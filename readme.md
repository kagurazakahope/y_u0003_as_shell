# y_u0003_as_shell

![y_u0003_as_shell]()

firmware for a customized fullsize keyboard with FN alternative multimedia shortcuts.

* Keyboard Maintainer: [kagurazakahope](https://github.com/kagurazakahope)
* Hardware Supported:
    - MCU: STM32F401
    - PCB: customized design to use the backshell (and the cabel :smile:) of a d*ll y_u0003 multimedia keyboard
    - Layout: http://www.keyboard-layout-editor.com/#/gists/d480edafde6f89e2de61316126f551e3
* Hardware Availability: https://weibo.com/u/5667208492

Make example for this keyboard (after setting up your build environment): *You need [QMK](https://qmk.fm/) to build the firmware.*

    qmk compile -kb y_u0003_as_shell -km default

Flashing example for this keyboard:

Suggest to use STM32CubeProgrammer to flash. Other methods were not tested.

## Bootloader

Press and hold the volume knob before plug-in USB to enter USB DFU.
Or plug in ST-LINK when disconneted.
