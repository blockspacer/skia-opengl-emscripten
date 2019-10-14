#include "custom_controllers.h"

#ifdef ENABLE_COBALT

#include "base/logging.h"

#include "extended_html/input_box/HTMLInputElement.h"
#include "extended_html/input_box/input_node.h"

#include <string>
#include <map>
#include <functional>
#include <memory>
#include <iostream>

namespace {

// TODO: OnPaintLayer
class Input1_controller :
  public InputElementController {
 public:

  explicit Input1_controller(HTMLInputElement* inputElem,
      cobalt::render_tree::InputNode* inputNode);

  ~Input1_controller() {}

  void ContentsChanged(views::Textfield* sender,
                                          const base::string16& new_contents) override;

  bool HandleMouseEvent(views::Textfield* sender,
                                           const ui::MouseEvent& mouse_event) override {
    //return OnTextfieldEvent(mouse_event.type());
    sender->SchedulePaint();
    return true;
  }

  bool HandleGestureEvent(
      views::Textfield* sender,
      const ui::GestureEvent& gesture_event) override {
    //return OnTextfieldEvent(gesture_event.type());

    sender->SchedulePaint();
    return true;
  }

  DISALLOW_COPY_AND_ASSIGN(Input1_controller);
};

void Input1_controller::ContentsChanged(views::Textfield *sender,
    const base::string16 &new_contents)
{
  //printf("ContentsChanged %s\n", new_contents.c_str());

  std::cout << "Input1_controller: ContentsChanged!!!" << std::endl;
  std::cout << "Input1_controller: new_contents: " << new_contents << std::endl;

  // Set search box focused when query changes.
  ///search_box_->RequestFocus();
  //UpdateModel(true);
  ///NotifyQueryChanged();
  ///if (!new_contents.empty())
  ///  SetSearchBoxActive(true, ui::ET_KEY_PRESSED);
  ///UpdateButtonsVisisbility();

  /// \note TODO:
  /// Check failed: (sequence_checker_).CalledOnValidSequence().  WeakPtrs must be
  ///   checked on the same sequenced thread.
  /// & prevent cyclic changes
  // if(inputElem_) {
  //   inputElem_->
  //     set_initial_text(base::UTF16ToUTF8(new_contents));
  // }

  sender->SchedulePaint();
}

Input1_controller::Input1_controller(
  HTMLInputElement *inputElem, cobalt::render_tree::InputNode *inputNode)
    : InputElementController(inputElem, inputNode)
{
}

///

// TODO: OnPaintLayer
class Input2_controller :
  public InputElementController {
 public:

  explicit Input2_controller(HTMLInputElement* inputElem,
      cobalt::render_tree::InputNode* inputNode);

  ~Input2_controller() {}

  void ContentsChanged(views::Textfield* sender,
                                          const base::string16& new_contents) override;

  bool HandleMouseEvent(views::Textfield* sender,
                                           const ui::MouseEvent& mouse_event) override {
    //return OnTextfieldEvent(mouse_event.type());
    sender->SchedulePaint();
    return true;
  }

  bool HandleGestureEvent(
      views::Textfield* sender,
      const ui::GestureEvent& gesture_event) override {
    //return OnTextfieldEvent(gesture_event.type());

    sender->SchedulePaint();
    return true;
  }

  DISALLOW_COPY_AND_ASSIGN(Input2_controller);
};

void Input2_controller::ContentsChanged(views::Textfield *sender,
    const base::string16 &new_contents)
{
  //printf("ContentsChanged %s\n", new_contents.c_str());

  std::cout << "Input2_controller: ContentsChanged!!!" << std::endl;
  std::cout << "Input2_controller: new_contents: " << new_contents << std::endl;

  // Set search box focused when query changes.
  ///search_box_->RequestFocus();
  //UpdateModel(true);
  ///NotifyQueryChanged();
  ///if (!new_contents.empty())
  ///  SetSearchBoxActive(true, ui::ET_KEY_PRESSED);
  ///UpdateButtonsVisisbility();

  /// \note TODO:
  /// Check failed: (sequence_checker_).CalledOnValidSequence().  WeakPtrs must be
  ///   checked on the same sequenced thread.
  /// & prevent cyclic changes
  // if(inputElem_) {
  //   inputElem_->
  //     set_initial_text(base::UTF16ToUTF8(new_contents));
  // }

  sender->SchedulePaint();
}

Input2_controller::Input2_controller(
  HTMLInputElement *inputElem, cobalt::render_tree::InputNode *inputNode)
    : InputElementController(inputElem, inputNode)
{
}

///

static skemgl::TextfieldControllerCreatorsMap textfield_controller_creators {};

static void add_controller_ex1() {
  skemgl::TextfieldControllerCreator controller_creator_1{
    [](HTMLInputElement* inputElem,
       cobalt::render_tree::InputNode* inputNode)
    {
      return std::make_unique<Input1_controller>
        (inputElem, inputNode);
    }
  };
  add_textfield_controller_creator("input1_controller",
    std::move(controller_creator_1));
}

static void add_controller_ex2() {
  skemgl::TextfieldControllerCreator controller_creator_2{
    [](HTMLInputElement* inputElem,
       cobalt::render_tree::InputNode* inputNode)
    {
      return std::make_unique<Input2_controller>
        (inputElem, inputNode);
    }
  };
  add_textfield_controller_creator("input2_controller",
    std::move(controller_creator_2));
}

} // namespace

namespace skemgl {

skemgl::TextfieldControllerCreator get_textfield_controller_creator(
    const std::string & name)
{
  const auto it = textfield_controller_creators.find(name);
  if(it != textfield_controller_creators.end()) {
      return it->second;
  }
  return skemgl::TextfieldControllerCreator{};
}

void add_textfield_controller_creator(const std::string &name,
    const skemgl::TextfieldControllerCreator& controller)
{
  if(textfield_controller_creators.find(name) != textfield_controller_creators.end()) {
    // TODO: print warning on controller redefinition or ...?
    NOTIMPLEMENTED_LOG_ONCE();
  }
  textfield_controller_creators[name] = controller;
}

skemgl::TextfieldControllerCreatorsMap& get_textfield_controller_creators()
{
  return textfield_controller_creators;
}

void preload_textfield_controller_creators()
{
  add_controller_ex1();
  add_controller_ex2();
}

} // namespace skemgl

#endif // ENABLE_COBALT
