#pragma once

/// \note place base_export.h before defined(OS_*) and EM_IS_MAIN_THREAD
#include "base/base_export.h"
#include "base/callback.h"
#include "base/containers/stack.h"
#include "base/macros.h"
#include "base/synchronization/lock.h"
#include "base/thread_annotations.h"
#include "base/compiler_specific.h"

#if defined(__EMSCRIPTEN__)
#include <emscripten.h>
#include <emscripten/bind.h>
#include <emscripten/html5.h>
#include <emscripten/bind.h>
#include <emscripten/val.h>
#include <emscripten/threading.h>

#include <algorithm>
#include <functional>
#include <vector>

#if !defined(EM_IS_MAIN_THREAD)
#error "need to define EM_IS_MAIN_THREAD"
#endif // EM_IS_MAIN_THREAD

#include <iostream>

#include <utility>
#include <functional>
#include <sstream>
#include <memory>
#include <cstdlib>
#include <tuple>
#include <type_traits>
#include <typeinfo>

#include <emscripten.h>
#include <emscripten/html5.h>
#include <emscripten/bind.h>
#include <emscripten/val.h>

namespace embinder {

namespace meta {

template<typename... Args> struct placeholders_count;

template<>
struct placeholders_count<> {
    static constexpr size_t value = 0;
};

template <class T>
struct one_if_placeholder {
    static constexpr size_t value =
    (std::is_placeholder<typename std::decay<T>::type>::value) ? 1 : 0;
};

template<typename Arg, typename... Args>
struct placeholders_count<Arg, Args...> {
    static constexpr size_t value =
    one_if_placeholder<Arg>::value + placeholders_count<Args...>::value;
};

// detects callable objects, not functions
// http://stackoverflow.com/questions/15393938/find-out-if-a-c-object-is-callable
template<typename T>
class is_callable_object {
private:
    using yes = char(&)[1];
    using no  = char(&)[2];

    struct Fallback { void operator()(); };
    struct Derived : T, Fallback { };

    template<typename U, U> struct Check;

    template<typename>
    static yes test(...);

    template<typename C>
    static no test(Check<void (Fallback::*)(), &C::operator()>*);

public:
    static const bool value = sizeof(test<Derived>(0)) == sizeof(yes);
};

template <typename T>
static constexpr auto is_callable_object_v = is_callable_object<T>::value;

// function traits

inline namespace detail {

template <typename ReturnType, typename ClassType, typename ... Args>
struct mem_function_traits {
    static constexpr auto arity = sizeof...(Args);

    using result_type = ReturnType;
    using class_type = ClassType;
    static constexpr auto valid = true;

    template <size_t i>
    struct arg {
        using type = std::tuple_element_t<i, std::tuple<Args...>>;
    };

    template <size_t i>
    using arg_t = typename arg<i>::type;
};

template <typename ReturnType, typename ... Args>
struct reg_function_traits {
    static constexpr auto arity = sizeof...(Args);

    using result_type = ReturnType;
    static constexpr auto valid = true;

    template <size_t i>
    struct arg {
        using type = decltype(std::get<i>(std::tuple<Args...>()));
    };

    template <size_t i>
    using arg_t = typename arg<i>::type;
};

} // namespace detail

// no types defined
template <typename T, typename = void, typename = void>
struct function_traits {
    static constexpr auto valid = false;
};

// generic functions
template <typename T>
struct function_traits<T,
    std::enable_if_t<std::is_class<T>::value>,
    std::enable_if_t<is_callable_object_v<T>>>
    : public function_traits<decltype(&T::operator())>
{ };

template <typename T>
struct function_traits<T,
    std::enable_if_t<std::is_reference<T>::value>>
    : public function_traits<typename std::remove_reference_t<T>>
{ };

// const member functions
template <typename ReturnType, typename ClassType, typename... Args>
struct function_traits<ReturnType(ClassType::*)(Args...) const,
    std::enable_if_t<std::is_member_function_pointer<ReturnType(ClassType::*)(Args...)>::value>>
    : public mem_function_traits<ReturnType, ClassType, Args...>
{ };

// member functions
template <typename ReturnType, typename ClassType, typename ... Args>
struct function_traits<ReturnType(ClassType::*)(Args...),
    std::enable_if_t<std::is_member_function_pointer<ReturnType(ClassType::*)(Args...)>::value>>
    : public mem_function_traits<ReturnType, ClassType, Args...>
{ };

// regular functions
template <typename ReturnType, typename ... Args>
struct function_traits<ReturnType(Args...),
    std::enable_if_t<std::is_function<ReturnType(Args...)>::value>>
    : public reg_function_traits<ReturnType, Args...>
{ };

// is_callable

template <typename T>
struct is_callable : public std::integral_constant<bool, function_traits<T>::valid> {};

// result_of

template <typename T>
struct result_of {
    using type = std::result_of_t<T>;
};

template <typename R, typename... Args>
struct result_of<R(*)(Args...)> {
    using type = R;
};

template <typename R, typename... Args>
struct result_of<R(&)(Args...)> {
    using type = R;
};

template <typename R, typename C, typename ... Args>
struct result_of<R(C::*)(Args...)> {
    using type = R;
};

template <typename R, typename C, typename ... Args>
struct result_of<R(C::*)(Args...) const> {
    using type = R;
};

} // namespace meta

template< size_t js_args_count, class Ret>
struct em_vals;

template< class Ret>
struct em_vals<0, Ret> {
    using type = Ret();
};

template< class Ret>
struct em_vals<1, Ret> {
    using type = Ret(emscripten::val);
};

template< class Ret>
struct em_vals<2, Ret> {
    using type = Ret(emscripten::val, emscripten::val);
};

template< class Ret>
struct em_vals<3, Ret> {
    using type = Ret(emscripten::val, emscripten::val, emscripten::val);
};

template< class Ret>
struct em_vals<4, Ret> {
    using type = Ret(emscripten::val, emscripten::val, emscripten::val, emscripten::val);
};

template< class Ret>
struct em_vals<5, Ret> {
    using type = Ret(emscripten::val, emscripten::val, emscripten::val, emscripten::val, emscripten::val);
};

template< class Ret>
struct em_vals<6, Ret> {
    using type = Ret(emscripten::val, emscripten::val, emscripten::val, emscripten::val, emscripten::val, emscripten::val);
};

template< size_t js_args_count, class F, class... Args >
emscripten::val bind( F&& f, Args&&... args ) {
    auto bind_result = std::bind( std::forward<decltype(f)>(f),
        ::std::forward<decltype(args)>(args)... );

    using result_type = typename meta::function_traits<std::decay_t<F>>::result_type;

    std::function<typename em_vals<js_args_count, result_type>::type> functor = bind_result;

    // We ensure the correct object will always be bound to the this of the function
    emscripten::val functor_adapter
        = emscripten::val(functor)["opcall"].call<emscripten::val>("bind", emscripten::val(functor));

    return functor_adapter;
}

template< class F, class... Args >
emscripten::val bind( F&& f, Args&&... args ) {
    constexpr auto result_placeholder_arity = meta::placeholders_count<Args...>::value;

    // assume that args count in js callback same as Args arity
    return bind<result_placeholder_arity>(std::forward<decltype(f)>(f), ::std::forward<decltype(args)>(args)...);
}

// EMSCRIPTEN_BINDINGS prevents BindingError: _emval_take_value has unknown type
/// \note generate emscripten::class for each return type and argument type
EMSCRIPTEN_BINDINGS(jsbindhpp) {
    emscripten::class_<
        std::function<
        typename embinder::em_vals<1, /*return_type*/void>::type
        >
    >("void1ArgsFunctor")
        .constructor<>()
        .function("opcall", &std::function<
        typename embinder::em_vals<1, /*return_type*/void>::type
        >::operator());

    emscripten::class_<
        std::function<
        typename embinder::em_vals<2, /*return_type*/void>::type
        >
    >("void2ArgsFunctor")
        .constructor<>()
        .function("opcall", &std::function<
        typename embinder::em_vals<2, /*return_type*/void>::type
        >::operator());

    emscripten::class_<
        std::function<
        typename embinder::em_vals<3, /*return_type*/void>::type
        >
    >("void3ArgsFunctor")
        .constructor<>()
        .function("opcall", &std::function<
        typename embinder::em_vals<3, /*return_type*/void>::type
        >::operator());

    emscripten::class_<
        std::function<
        typename embinder::em_vals<4, /*return_type*/void>::type
        >
    >("void4ArgsFunctor")
        .constructor<>()
        .function("opcall", &std::function<
        typename embinder::em_vals<4, /*return_type*/void>::type
        >::operator());

    emscripten::class_<
        std::function<
        typename embinder::em_vals<5, /*return_type*/void>::type
        >
    >("void5ArgsFunctor")
        .constructor<>()
        .function("opcall", &std::function<
        typename embinder::em_vals<5, /*return_type*/void>::type
        >::operator());

    emscripten::class_<
        std::function<
        typename embinder::em_vals<6, /*return_type*/void>::type
        >
    >("void6ArgsFunctor")
        .constructor<>()
        .function("opcall", &std::function<
        typename embinder::em_vals<6, /*return_type*/void>::type
        >::operator());
}

} // namespace embinder

#endif // OS_EMSCRIPTEN

