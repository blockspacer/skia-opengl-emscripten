// Copyright 2017 The Cobalt Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef COBALT_SCRIPT_PROMISE_H_
#define COBALT_SCRIPT_PROMISE_H_

#include "base/memory/ref_counted.h"
#include "cobalt/script/exception_message.h"
#include "cobalt/script/script_exception.h"
#include "cobalt/script/script_value.h"

#if !defined(ENABLE_JS_PROMISES)

#include <atomic>
#include <functional>
#include <memory>
#include <type_traits>

/// __TODO__
/// \see https://github.com/LifeWanted/liblw/blob/master/source/lw/event/Promise.impl.hpp

namespace lw {
namespace event {

// ---------------------------------------------------------------------------------------------- //

template<typename T>
class Future;

// ---------------------------------------------------------------------------------------------- //

/// @brief Determines if the given variable is a `Future`, or derives publicly from `Future`.
///
/// @tparam T The type to check.
template<typename T>
struct IsFuture : public std::integral_constant<bool, false> {};

template<typename T>
struct IsFuture<Future<T>> : public std::integral_constant<bool, true> {};

template<template<typename> class T, typename Value>
struct IsFuture<T<Value>> :
    public std::integral_constant<bool, std::is_base_of<Future<Value>, T<Value>>::value>
{};

// ---------------------------------------------------------------------------------------------- //

/// @brief Breaks down a type to the highest non-future layer.
///
/// @tparam T The type to break down.
template<typename T>
struct UnwrapFuture {
    typedef T result_type;  ///< The type that will be promised.
    typedef Future<T> type; ///< The type of a future for this type.
};

template<typename T>
struct UnwrapFuture<Future<T>> : public UnwrapFuture<T> {};

// ---------------------------------------------------------------------------------------------- //

/// @brief Determines the result of a function as a future.
template<typename T>
struct FutureResultOf;

template<typename F, typename... Args>
struct FutureResultOf<F(Args...)> :
    public UnwrapFuture<typename std::result_of<F(Args...)>::type>
{};

// ---------------------------------------------------------------------------------------------- //

/// @brief `Promise`s and `Future`s allow for chaining callbacks without nesting.
///
/// A `Promise` is the active side of the pair. Asynchronous functions create a promise and later
/// fulfill it by either resolving or rejecting the promise.
template<typename T = void>
class Promise {
public:
    /// @brief Default construction.
    Promise(void):
        m_state(new _SharedState())
    {
        m_state->resolved   = false;
        m_state->rejected   = false;
        m_state->resolve    = nullptr;
        m_state->reject     = nullptr;
    }

    // ------------------------------------------------------------------------------------------ //

    /// @brief No copying!
    Promise(const Promise&) = delete;

    // ------------------------------------------------------------------------------------------ //

    /// @brief Moves the promise from `other` to `this`.
    Promise(Promise&& other):
        m_state(std::move(other.m_state))
    {
        other.m_state = nullptr;
    }

    // ------------------------------------------------------------------------------------------ //

    /// @brief Returns a future associated with this promise.
    Future<T> future(void);

    // ------------------------------------------------------------------------------------------ //

    /// @brief Resolves the promise as a success.
    void resolve(T&& value) const {
        m_state->resolved = true;
        if (m_state->resolve) {
            m_state->resolve( std::move( value ) );
        }
    }

    // ------------------------------------------------------------------------------------------ //

    /// @copydoc Promise::resolve(T&&)
    void resolve(const T& value) const {
        resolve(T(value));
    }

    // ------------------------------------------------------------------------------------------ //

    /// @brief Rejects the promise as a failure.
    void reject(bool& err) const {
        m_state->rejected = true;
        if (m_state->reject) {
            m_state->reject(err);
        }
        else {
            err = true;
        }
    }

    // ------------------------------------------------------------------------------------------ //

    /// @brief Resets the promise's internal state so that it can be reused.
    ///
    /// @throws PromiseError If the promise is in an unfinished state.
    void reset(void){
        if (!is_finished()) {
            printf("Cannot reset an unfinished promise.\n");
        }
        m_state->resolved   = false;
        m_state->rejected   = false;
        m_state->resolve    = nullptr;
        m_state->reject     = nullptr;
    }

    // ------------------------------------------------------------------------------------------ //

    /// @brief Indicates if the promise has been resolved.
    bool is_resolved(void) const {
        return m_state->resolved;
    }

    // ------------------------------------------------------------------------------------------ //

    /// @brief Indicates if the promise has been rejected.
    bool is_rejected(void) const {
        return m_state->rejected;
    }

    // ------------------------------------------------------------------------------------------ //

    /// @brief Indicates if the promise has been either resolved or rejected.
    bool is_finished(void) const {
        return is_resolved() || is_rejected();
    }

    // ------------------------------------------------------------------------------------------ //

    /// @brief No copying!
    Promise& operator=(const Promise&) = delete;

    // ------------------------------------------------------------------------------------------ //

    /// @brief Moves the promise from `other` into `this`.
    Promise& operator=(Promise&& other){
        m_state = std::move(other.m_state);
        other.m_state = nullptr;
        return *this;
    }

private:
    template<typename Type>
    friend class ::lw::event::Future;

    // ------------------------------------------------------------------------------------------ //

    /// @brief The container for the shared state between promises and futures.
    struct _SharedState {
        std::atomic_bool resolved;
        std::atomic_bool rejected;
        std::function<void(T&&)> resolve;
        std::function<void(bool& err)> reject;
    };
    typedef std::shared_ptr<_SharedState> _SharedStatePtr;

    // ------------------------------------------------------------------------------------------ //

    /// @brief The state of the promise.
    _SharedStatePtr m_state;
};

// ---------------------------------------------------------------------------------------------- //

/// @brief The passive half of the `Promise`-`Future` pair.
///
/// `Future`s are the requester's handle on an asynchronous event. They allow callbacks to be
/// registered for after it has been started.
template<typename T = void>
class Future {
public:
    /// @brief The type promised by this future.
    typedef T result_type;

    /// @brief The type of Promise that made this future.
    typedef Promise<T> promise_type;

    // ------------------------------------------------------------------------------------------ //

    template<typename Func>
    auto then(Func&& func){
        return then(std::forward<Func>(func), nullptr);
    }

    // ------------------------------------------------------------------------------------------ //

    template<typename Result, typename Func>
    auto then(Func&& func){
        return then<Result>(std::forward<Func>(func), nullptr);
    }

    // ------------------------------------------------------------------------------------------ //

    template<typename Resolve, typename Reject>
    auto then(Resolve&& resolve, Reject&& reject){
        return _then(std::forward<Resolve>(resolve), std::forward<Reject>(reject));
    }

    // ------------------------------------------------------------------------------------------ //

    template<typename Result, typename Resolve, typename Reject>
    auto then(Resolve&& resolve, Reject&& reject){
        return _then<Result>(std::forward<Resolve>(resolve), std::forward<Reject>(reject));
    }

    // ------------------------------------------------------------------------------------------ //

    /// @brief Connects this promise to the one provided.
    ///
    /// @param promise The promise to resolve/reject with this one.
    void then(promise_type&& promise);

    // ------------------------------------------------------------------------------------------ //

private:
    template<typename Type>
    friend class ::lw::event::Promise;

    // ------------------------------------------------------------------------------------------ //

    /// @brief Only `Promise`s can construct us.
    ///
    /// @param state The shared state to associate with.
    Future(const typename promise_type::_SharedStatePtr& state):
        m_state(state)
    {}

    // ------------------------------------------------------------------------------------------ //

    /// @brief Chaining for generic functors.
    ///
    /// @tparam Result  The type given functor promises.
    /// @tparam Resolve A functor type that can take a `Promise&&` as its parameter.
    ///
    /// @param resolve The functor to call when this one is resolved.
    ///
    /// @return A new future, for when the provided `resolve` completes its action.
    template<
        typename Result,
        typename Resolve,
        typename Reject,
        typename = typename std::result_of<Resolve(T&&,Promise<Result>&&)>::type
    >
    Future<Result> _then(Resolve&& resolve, Reject&& reject);

    // ------------------------------------------------------------------------------------------ //

    /// @brief Chaining for generic functors promising nothing.
    ///
    /// @tparam Resolve A functor type that can take a `Promise&&` as its parameter.
    ///
    /// @param resolve The functor to call when this one is resolved.
    ///
    /// @return A new future, for when the provided `resolve` completes its action.
    template<
        typename Resolve,
        typename Reject,
        typename = typename std::result_of<Resolve(T&&, Promise<>&&)>::type
    >
    Future<> _then(Resolve&& resolve, Reject&& reject);

    // ------------------------------------------------------------------------------------------ //

    /// @brief Chaining for `Future`-returning functors.
    ///
    /// @tparam Resolve A functor which returns a `Future`.
    ///
    /// @param resolve The functor to call when this one is ready.
    ///
    /// @return A `Future` which will be resolved by `resolve`.
    template<
        typename Resolve,
        typename Reject,
        typename ResolveResult = typename std::result_of<Resolve(T&&)>::type,
        typename std::enable_if<IsFuture<ResolveResult>::value>::type* = nullptr
    >
    Future<typename ResolveResult::result_type> _then(Resolve&& resolve, Reject&& reject);

    // ------------------------------------------------------------------------------------------ //

    /// @brief Chaining for value-returning functors (i.e. synchronous ones).
    ///
    /// @tparam Resolve A synchronous functor type.
    ///
    /// @param resolve A synchronous functor returning some value.
    ///
    /// @return A `Future` which will be resolved with the return value from `resolve`.
    template<
        typename Resolve,
        typename Reject,
        typename ResolveResult = typename std::result_of<Resolve(T&&)>::type,
        typename std::enable_if<
            !IsFuture<ResolveResult>::value &&
            !std::is_void<ResolveResult>::value
        >::type* = nullptr
    >
    Future<ResolveResult> _then(Resolve&& resolve, Reject&& reject);

    // ------------------------------------------------------------------------------------------ //

    /// @brief Chaining for void-returning synchronous functors.
    ///
    /// @tparam Resolve A synchronous functor type.
    ///
    /// @param resolve A synchronous functor with no return value.
    ///
    /// @return A `Future` which will be resolved `resolve` runs.
    template<
        typename Resolve,
        typename Reject,
        typename ResolveResult = typename std::result_of<Resolve(T&&)>::type,
        typename std::enable_if<std::is_void<ResolveResult>::value>::type* = nullptr
    >
    Future<> _then(Resolve&& resolve, Reject&& reject);

    // ------------------------------------------------------------------------------------------ //

    /// @brief Our internal shared state.
    typename promise_type::_SharedStatePtr m_state;
};

template<>
class Promise< void >{
public:
    /// @brief Default construction.
    Promise( void ):
        m_state( new _SharedState() )
    {
        m_state->resolved   = false;
        m_state->rejected   = false;
        m_state->resolve    = nullptr;
        m_state->reject     = nullptr;
    }

    // ---------------------------------------------------------------------- //

    /// @brief No copying!
    Promise( const Promise& ) = delete;

    // ---------------------------------------------------------------------- //

    /// @brief Moves the promise from `other` to `this`.
    Promise( Promise&& other ):
        m_state( std::move( other.m_state ) )
    {
        other.m_state = nullptr;
    }

    // ---------------------------------------------------------------------- //

    /// @brief Returns a future associated with this promise.
    Future< void > future( void );

    // ---------------------------------------------------------------------- //

    /// @brief Resolves the promise as a success.
    void resolve( void ) const {
        m_state->resolved = true;
        if( m_state->resolve ){
            m_state->resolve();
        }
    }

    // ---------------------------------------------------------------------- //

    /// @brief Rejects the promise as a failure.
    void reject( const bool& err ) const {
        m_state->rejected = true;
        if( m_state->reject ){
            m_state->reject( err );
        }
        else {
            throw err;
        }
    }

    // ---------------------------------------------------------------------- //

    /// @brief Resets the promise's internal state so that it can be reused.
    ///
    /// @throws PromiseError If the promise is in an unfinished state.
    void reset( void ){
        if( !is_finished() ){
            printf("Cannot reset an unfinished promise.\n" );
        }
        m_state->resolved   = false;
        m_state->rejected   = false;
        m_state->resolve    = nullptr;
        m_state->reject     = nullptr;
    }

    // ---------------------------------------------------------------------- //

    /// @brief Indicates if the promise has been resolved.
    bool is_resolved( void ) const {
        return m_state->resolved;
    }

    // ---------------------------------------------------------------------- //

    /// @brief Indicates if the promise has been rejected.
    bool is_rejected( void ) const {
        return m_state->rejected;
    }

    // ---------------------------------------------------------------------- //

    /// @brief Indicates if the promise has been either resolved or rejected.
    bool is_finished( void ) const {
        return is_resolved() || is_rejected();
    }

    // ---------------------------------------------------------------------- //

    /// @brief No copying!
    Promise& operator=( const Promise& ) = delete;

    // ---------------------------------------------------------------------- //

    /// @brief Moves the promise from `other` into `this`.
    Promise& operator=( Promise&& other ){
        m_state = std::move( other.m_state );
        other.m_state = nullptr;
        return *this;
    }

private:
    template< typename Type >
    friend class ::lw::event::Future;

    // ---------------------------------------------------------------------- //

    /// @brief The container for the shared state between promises and futures.
    struct _SharedState {
        std::atomic_bool resolved;
        std::atomic_bool rejected;
        std::function< void( void ) > resolve;
        std::function< void( const bool& ) > reject;
    };
    typedef std::shared_ptr< _SharedState > _SharedStatePtr;

    // ---------------------------------------------------------------------- //

    /// @brief The state of the promise.
    /*mutable*/ _SharedStatePtr m_state;
};

// -------------------------------------------------------------------------- //

template<>
class Future< void >{
public:
    /// @brief The type promised by this future.
    typedef void result_type;

    /// @brief The type of Promise that made this future.
    typedef Promise< void > promise_type;

    // ---------------------------------------------------------------------- //

    template< typename Func >
    auto then( Func&& func ){
        return then( std::forward< Func >( func ), nullptr );
    }

    // ---------------------------------------------------------------------- //

    template< typename Result, typename Func >
    auto then( Func&& func ){
        return then< Result >( std::forward< Func >( func ), nullptr );
    }

    // ---------------------------------------------------------------------- //

    template< typename Resolve, typename Reject >
    auto then( Resolve&& resolve, Reject&& reject ){
        return _then(
            std::forward< Resolve   >( resolve  ),
            std::forward< Reject    >( reject   )
        );
    }

    // ---------------------------------------------------------------------- //

    template< typename Result, typename Resolve, typename Reject >
    auto then( Resolve&& resolve, Reject&& reject ){
        return _then< Result >(
            std::forward< Resolve   >( resolve  ),
            std::forward< Reject    >( reject   )
        );
    }

    // ---------------------------------------------------------------------- //

    /// @brief Connects this promise to the one provided.
    ///
    /// @param promise The promise to resolve/reject with this one.
    void then( promise_type&& promise );

    // ---------------------------------------------------------------------- //

private:
    template< typename Type >
    friend class ::lw::event::Promise;

    // ---------------------------------------------------------------------- //

    /// @brief Only `Promise`s can construct us.
    ///
    /// @param state The shared state to associate with.
    Future( const typename promise_type::_SharedStatePtr& state ):
        m_state( state )
    {}

    // ---------------------------------------------------------------------- //

    /// @brief Chaining for generic functors.
    ///
    /// @tparam Result  The type given functor promises.
    /// @tparam Resolve A functor type that can take a `Promise&&` as its parameter.
    ///
    /// @param resolve The functor to call when this one is resolved.
    ///
    /// @return A new future, for when the provided `resolve` completes its action.
    template<
        typename Result,
        typename Resolve,
        typename Reject,
        typename = typename std::result_of< Resolve( Promise< Result >&& ) >::type
    >
    Future< Result > _then( Resolve&& resolve, Reject&& reject );

    // ---------------------------------------------------------------------- //

    /// @brief Chaining for generic functors promising nothing.
    ///
    /// @tparam Resolve A functor type that can take a `Promise&&` as its parameter.
    ///
    /// @param resolve The functor to call when this one is resolved.
    ///
    /// @return A new future, for when the provided `resolve` completes its action.
    template<
        typename Resolve,
        typename Reject,
        typename = typename std::result_of< Resolve( Promise<>&& ) >::type
    >
    Future<> _then( Resolve&& resolve, Reject&& reject );

    // ---------------------------------------------------------------------- //

    /// @brief Chaining for `Future`-returning functors.
    ///
    /// @tparam Resolve A functor which returns a `Future`.
    ///
    /// @param resolve The functor to call when this one is ready.
    ///
    /// @return A `Future` which will be resolved by `resolve`.
    template<
        typename Resolve,
        typename Reject,
        typename ResolveResult = typename std::result_of< Resolve() >::type,
        typename std::enable_if< IsFuture< ResolveResult >::value >::type* = nullptr
    >
    Future< typename ResolveResult::result_type > _then( Resolve&& resolve, Reject&& reject );

    // ---------------------------------------------------------------------- //

    /// @brief Chaining for value-returning functors (i.e. synchronous ones).
    ///
    /// @tparam Resolve A synchronous functor type.
    ///
    /// @param resolve A synchronous functor returning some value.
    ///
    /// @return A `Future` which will be resolved with the return value from `resolve`.
    template<
        typename Resolve,
        typename Reject,
        typename ResolveResult = typename std::result_of< Resolve() >::type,
        typename std::enable_if<
            !IsFuture< ResolveResult >::value &&
            !std::is_void< ResolveResult >::value
        >::type* = nullptr
    >
    Future< ResolveResult > _then( Resolve&& resolve, Reject&& reject );

    // ---------------------------------------------------------------------- //

    /// @brief Chaining for void-returning synchronous functors.
    ///
    /// @tparam Resolve A synchronous functor type.
    ///
    /// @param resolve A synchronous functor with no return value.
    ///
    /// @return A `Future` which will be resolved `resolve` runs.
    template<
        typename Resolve,
        typename Reject,
        typename ResolveResult = typename std::result_of< Resolve() >::type,
        typename std::enable_if< std::is_void< ResolveResult >::value >::type* = nullptr
    >
    Future<> _then( Resolve&& resolve, Reject&& reject );

    // ---------------------------------------------------------------------- //

    /// @brief Our internal shared state.
    typename promise_type::_SharedStatePtr m_state;
};

template< typename T >
inline Future< T > Promise< T >::future( void ){
    return Future< T >( m_state );
}

// ---------------------------------------------------------------------------------------------- //

inline Future< void > Promise< void >::future( void ){
    return Future< void >( m_state );
}

// ---------------------------------------------------------------------------------------------- //

template< typename T >
template< typename Result, typename Resolve, typename Reject, typename >
Future< Result > Future< T >::_then( Resolve&& resolve, Reject&& reject ){
    auto next = std::make_shared< Promise< Result > >();
    auto prev = m_state;
    m_state->resolve = [ resolve, prev, next ]( T&& value ) mutable {
        resolve( std::move( value ), std::move( *next ) );
        prev->reject = nullptr;
        prev.reset();
    };

    typedef std::function< void( const bool& ) > RejectHandler;
    RejectHandler rejectHandler;
    if( std::is_same< std::nullptr_t, Reject >::value ){
        rejectHandler = [ next ]( const bool& err ){
            next->reject( err );
        };
    }
    else {
        rejectHandler = std::forward< Reject >( reject );
    }
    m_state->reject = [ rejectHandler, prev, next ](
        const bool& err
    ) mutable {
        rejectHandler( err );
        prev->resolve = nullptr;
        prev.reset();
    };

    return next->future();
}

// ---------------------------------------------------------------------------------------------- //

template< typename T >
template< typename Resolve, typename Reject, typename >
inline Future<> Future< T >::_then( Resolve&& resolve, Reject&& reject ){
    return then< void >(
        std::forward< Resolve   >( resolve  ),
        std::forward< Reject    >( reject   )
    );
}

// ---------------------------------------------------------------------------------------------- //

template< typename T >
template<
    typename Resolve,
    typename Reject,
    typename ResolveResult,
    typename std::enable_if< IsFuture< ResolveResult >::value >::type*
>
Future< typename ResolveResult::result_type > Future< T >::_then( Resolve&& resolve, Reject&& reject ){
    typedef typename ResolveResult::result_type Result;
    return then< Result >(
        [ resolve ]( T&& value, Promise< Result >&& promise ) mutable {
            resolve( std::move( value ) ).then( std::move( promise ) );
        },
        std::forward< Reject >( reject )
    );
}

// ---------------------------------------------------------------------------------------------- //

template< typename T >
template<
    typename Resolve,
    typename Reject,
    typename ResolveResult,
    typename std::enable_if<
        !IsFuture< ResolveResult >::value &&
        !std::is_void< ResolveResult >::value
    >::type*
>
Future< ResolveResult > Future< T >::_then( Resolve&& resolve, Reject&& reject ){
    return then< ResolveResult >(
        [ resolve ]( T&& value, Promise< ResolveResult >&& promise ) mutable {
            try {
                promise.resolve( resolve( std::move( value ) ) );
            }
            catch( const bool& err ){
                promise.reject( err );
            }
        },
        std::forward< Reject >( reject )
    );
}

// ---------------------------------------------------------------------------------------------- //

template< typename T >
template<
    typename Resolve,
    typename Reject,
    typename ResolveResult,
    typename std::enable_if< std::is_void< ResolveResult >::value >::type*
>
Future<> Future< T >::_then( Resolve&& resolve, Reject&& reject ){
    return then(
        [ resolve ]( T&& value, Promise<>&& promise ){
            try {
                resolve( std::move( value ) );
            }
            catch( const bool& err ){
                promise.reject( err );
                return;
            }
            promise.resolve();
        },
        std::forward< Reject >( reject )
    );
}

// ---------------------------------------------------------------------------------------------- //

template< typename T >
void Future< T >::then( promise_type&& promise ){
    auto next = std::make_shared< promise_type >( std::move( promise ) );
    auto prev = m_state;
    m_state->resolve = [ prev, next ]( T&& value ) mutable {
        next->resolve( std::move( value ) );
        prev->reject = nullptr;
        prev.reset();
    };
    m_state->reject = [ prev, next ]( const bool& err ) mutable {
        next->reject( err );
        prev->resolve = nullptr;
        prev.reset();
    };
}

// ---------------------------------------------------------------------------------------------- //

template< typename Result, typename Resolve, typename Reject, typename >
Future< Result > Future< void >::_then( Resolve&& resolve, Reject&& reject ){
    auto next = std::make_shared< Promise< Result > >();
    auto prev = m_state;
    m_state->resolve = [ resolve, prev, next ]() mutable {
        resolve( std::move( *next ) );
        prev->reject = nullptr;
        prev.reset();
    };

    typedef std::function< void( const bool& ) > RejectHandler;
    RejectHandler rejectHandler;
    if( std::is_same< std::nullptr_t, Reject >::value ){
        rejectHandler = [ next ]( const bool& err ){
            next->reject( err );
        };
    }
    else {
        rejectHandler = std::forward< Reject >( reject );
    }
    m_state->reject = [ rejectHandler, prev, next ](
        const bool& err
    ) mutable {
        rejectHandler( err );
        prev->resolve = nullptr;
        prev.reset();
    };

    return next->future();
}

// ---------------------------------------------------------------------------------------------- //

template< typename Resolve, typename Reject, typename >
Future<> Future< void >::_then( Resolve&& resolve, Reject&& reject ){
    return then< void >(
        std::forward< Resolve   >( resolve  ),
        std::forward< Reject    >( reject   )
    );
}

// ---------------------------------------------------------------------------------------------- //

template<
    typename Resolve,
    typename Reject,
    typename ResolveResult,
    typename std::enable_if< IsFuture< ResolveResult >::value >::type*
>
Future< typename ResolveResult::result_type > Future< void >::_then( Resolve&& resolve, Reject&& reject ){
    typedef typename ResolveResult::result_type Result;
    return then< Result >(
        [ resolve ]( Promise< Result >&& promise ){
            resolve().then( std::move( promise ) );
        },
        std::forward< Reject >( reject )
    );
}

// ---------------------------------------------------------------------------------------------- //

template<
    typename Resolve,
    typename Reject,
    typename ResolveResult,
    typename std::enable_if<
        !IsFuture< ResolveResult >::value &&
        !std::is_void< ResolveResult >::value
    >::type*
>
Future< ResolveResult > Future< void >::_then( Resolve&& resolve, Reject&& reject ){
    return then< ResolveResult >(
        [ resolve ]( Promise< ResolveResult >&& promise ){
            try {
                promise.resolve( resolve() );
            }
            catch( const bool& err ){
                promise.reject( err );
            }
        },
        std::forward< Reject >( reject )
    );
}

// ---------------------------------------------------------------------------------------------- //

template<
    typename Resolve,
    typename Reject,
    typename ResolveResult,
    typename std::enable_if< std::is_void< ResolveResult >::value >::type*
>
Future< void > Future< void >::_then( Resolve&& resolve, Reject&& reject ){
    return then< void >(
        [ resolve ]( Promise< void >&& promise ){
            try {
                resolve();
            }
            catch( const bool& err ){
                promise.reject( err );
                return;
            }
            promise.resolve();
        },
        std::forward< Reject >( reject )
    );
}

// ---------------------------------------------------------------------------------------------- //

inline void Future< void >::then( promise_type&& promise ){
    auto next = std::make_shared< promise_type >( std::move( promise ) );
    auto prev = m_state;
    m_state->resolve = [ prev, next ]() mutable {
        next->resolve();
        prev->reject = nullptr;
        prev.reset();
    };
    m_state->reject = [ prev, next ]( const bool& err ) mutable {
        next->reject( err );
        prev->resolve = nullptr;
        prev.reset();
    };
}

} // namespace event
}
#endif

namespace cobalt {
namespace script {

/*class SimpleScriptException : public ScriptException {
 public:
  SimpleScriptException(const std::string& message,
                        const std::string& name)
                        : message_(message), name(name_)
  {}


  // Used for RTTI on wrappable types. This is implemented within the
  // DEFINE_WRAPPABLE_TYPE macro, defined below, which should be added to the
  // class definition of each wrappable type.
  virtual base::TypeId GetWrappableType() const {
    return base::TypeId::From<void>();
  }

  virtual base::SourceLocation GetInlineSourceLocation() const = 0;

  virtual std::string message() const {
    return message_;
  }

  virtual std::string name() const {
    return name_;
  }

 private:
  std::string message_ = "SimpleScriptException";
  std::string name_ = "name_";
};*/

// TODO: Just use JavaScript undefined once abstracted JavaScript values are
// exposed to code outside of engine specific script implementations.
struct PromiseResultUndefined {};

// See [[PromiseState]] in
// https://tc39.github.io/ecma262/#sec-properties-of-promise-instances
enum class PromiseState {
  kPending,
  kFulfilled,
  kRejected,
};

// Interface for interacting with a JavaScript Promise object that is resolved
// or rejected from native code.
template <typename T>
class Promise {
 public:
  // Call the |resolve| function that was passed as an argument to the Promise's
  // executor function supplying |result| as its argument.
#if defined(ENABLE_JS_PROMISES)
  virtual void Resolve(const T& result) const = 0;

  // Call the |reject| function passed as an argument to the Promise's executor
  // function.
  virtual void Reject() const = 0;
  virtual void Reject(SimpleExceptionType exception) const = 0;
  virtual void Reject(const scoped_refptr<ScriptException>& result) const = 0;

  // Returns the value of the [[PromiseState]] field.
  virtual PromiseState State() const = 0;

  virtual ~Promise() {}
#else
  virtual void Resolve(const T& result) const {
    promise_.resolve(result);
  }

  // Call the |reject| function passed as an argument to the Promise's executor
  // function.
  virtual void Reject() const {
    bool err = false;
    promise_.reject(err);
  }
  virtual void Reject(SimpleExceptionType exception) const {
    bool err = false;
    promise_.reject(err);
    if (err)
      exception = SimpleExceptionType::kError;
  }

  virtual void Reject(const scoped_refptr<ScriptException>& result) const {
    bool err = false;
    promise_.reject(err);
    /// __TODO__
    /*if (err && !result)
      result = new SimpleScriptException();*/
  }

  // Returns the value of the [[PromiseState]] field.
  virtual PromiseState State() const {
    if(promise_.is_finished())
      return PromiseState::kFulfilled;
    if(promise_.is_rejected())
      return PromiseState::kRejected;

    return PromiseState::kPending;
  }

  virtual ~Promise() {}
#endif

  private:
  lw::event::Promise<T> promise_;
};

// A convenience specialization in order to facilitate not having to
// explicitly pass in |PromiseResultUndefined| when resolving a |Promise| with
// no value.
template <>
class Promise<void> : public Promise<PromiseResultUndefined> {
 public:
  using Promise<PromiseResultUndefined>::Resolve;

  void Resolve() const { Resolve(PromiseResultUndefined()); }
};

#if !defined(COBALT_BUILD_TYPE_GOLD)

inline std::ostream& operator<<(std::ostream& os, const PromiseState state) {
  switch (state) {
    case PromiseState::kFulfilled:
      os << "Fulfilled";
      return os;
    case PromiseState::kPending:
      os << "Pending";
      return os;
    case PromiseState::kRejected:
      os << "Rejected";
      return os;
  }
  DCHECK(false);
  os << "Unknown promise state";
  return os;
}

#endif  // !defined(COBALT_BUILD_TYPE_GOLD)

}  // namespace script
}  // namespace cobalt

#endif  // COBALT_SCRIPT_PROMISE_H_
