![SofleKeyboard default keymap](https://github.com/josefadamcik/SofleKeyboard/raw/master/Images/soflekeyboard.png)
![SofleKeyboard adjust layer](https://github.com/josefadamcik/SofleKeyboard/raw/master/Images/soflekeyboard_layout_adjust.png)


# Based on default keymap for Sofle Keyboard

Layout in [Keyboard Layout Editor](http://www.keyboard-layout-editor.com/#/gists/76efb423a46cbbea75465cb468eef7ff) and [adjust layer](http://www.keyboard-layout-editor.com/#/gists/4bcf66f922cfd54da20ba04905d56bd4)

# Luna, the keyboard pet

[Source](https://github.com/HellSingCoder/qmk_firmware/tree/33d7fa1180d232dcdb024c68a8f4629dced32afb/keyboards/sofle/keymaps/helltm)

- Luna reacts to your wpm counter
    - under 10 wpm she sits
    - between 10 and 40 wpm she walks
    - over 40 wpm she runs
- She will move sneakily if you hold down Ctrl
- Will bark at people on the internet if you activate Caps Lock!
- Luna jumps every time you hit Space

# TODO: document things I changed

Command to compile:
```
qmk compile -kb sofle -km thekugelmeister -e CONVERT_TO=promicro_rp2040
```
