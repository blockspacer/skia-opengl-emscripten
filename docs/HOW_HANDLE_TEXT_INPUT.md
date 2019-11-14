# About

Keyboard text input handled as below:

- handle `keyup`
- handle `keydown`
- handle `keypress`

## `keyup` and `keydown`

`keyup` and `keydown` used to handle control characters.

Control characters must be not printable, so mark them `is_printable = false`.

Don't insert control characters into textfields, but handle them as key commands (ctrl+C, ctrl+V, etc.)

## `keypress`

`keypress` used to handle unicode text input (only printable characters).

Sometimes `keypress` can take multiple key presses to produce a character.

Sometimes a single key press can produce multiple characters.

`keypress` may be [SDL_TextInputEvent](https://wiki.libsdl.org/Tutorials/TextInput) on native platform.

Skip `keypress` events with modifiers:

```cpp
// \note skips shiftKey
const noModifier = !e.ctrlKey && !e.metaKey && !e.altKey;
```

Make sure keys with modifiers are handled only during `keyup` and `keydown`.
