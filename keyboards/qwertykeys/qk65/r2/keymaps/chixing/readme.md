# chixing QK65 R2 keymap

Static eight-layer QMK version of the shared layout: Base, Fn/F-keys, Numpad,
Nav, Symbols-right, Brackets, Symbols-left, and Mouse.

Build without flashing:

```sh
qmk compile -kb qwertykeys/qk65/r2 -km chixing
```

This PCB's custom bootloader does not implement `QK_BOOT`. Hold the physical
QWERTY `B` position while plugging in the USB cable to enter the bootloader.

The official R2 Vial recovery kit and layout export are stored in the
`chi-keyboards/boards/qk65/recovery` directory.
