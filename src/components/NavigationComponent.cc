#include "components/NavigationComponent.h"

#ifdef ENABLE_COBALT

const char* NavigationComponent::ComponentName = "ex3";

const std::string NavigationComponent::data() const {
  DCHECK(elem_);
  return R"raw(
<div class="navigation">
  <div class="navigation-root">
    <div class="navigation-item"><a href="#">One</a></div>
    <div class="navigation-item"><div><a href="#">Two</a></div>
      <div class="dropdown">
        <div><a href="#">Sub-1</a></div>
        <div><a href="#">Sub-2</a></div>
        <div><a href="#">Sub-3</a></div>
      </div>
    </div>
    <div class="navigation-item"><a href="#">Three</a></div>
  </div>
</div>

<div id="change-localization-menu">
 <h3>Select language:</h3></br>
 <div I_on-click-print_I="en">English</div>
 <div I_on-click-print_I="fr">Français (French)</div>
 <div I_on-click-print_I="bg">Български (Bulgarian)</div>
 <div I_on-click-print_I="ch">中国 (Mandarin)</div>
 <div I_on-click-print_I="mi">Maori</div>
</div>

<div style="width:100px;">
  <sk_input width="100" height="100" style="display: inline-block;width:100%;height:100px;" tabindex="0">
  text 1
  </sk_input>
</div>
<div style="width:100px;">
  <sk_input width="100" height="100" style="width:100%;height:100px;" tabindex="0">
  </sk_input>
</div>
)raw";
}

void NavigationComponent::onLoad(HTMLComponentElement* elem) {
  printf("ex3 component loaded!\n");
  elem_ = elem;
  DCHECK(elem_);
}

void NavigationComponent::onUnload() {
  printf("ex3 component loaded!\n");
  DCHECK(elem_);
}

#endif // ENABLE_COBALT
