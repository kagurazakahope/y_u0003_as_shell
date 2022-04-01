# y_u0003_as_shell

![y_u0003_as_shell]()

firmware for a customized fullsize keyboard with FN alternative multimedia shortcuts.

* Keyboard Maintainer: [kagurazakahope](https://github.com/kagurazakahope)
* Hardware Supported:
    - MCU: STM32F103
    - PCB: customized design to use the backshell (and the cabel :smile:) of a d*ll y_u0003 multimedia keyboard
    - Layout: https://gist.github.com/kagurazakahope/01b6c68ff1ecaca4fb4f5ef6145876f5
* Hardware Availability: https://weibo.com/u/5667208492

Make example for this keyboard (after setting up your build environment): *You need [QMK](https://qmk.fm/) to build the firmware.*

    qmk compile -kb y_u0003_as_shell -km default

Flashing example for this keyboard:

> Only avaliable via **ST_LINK**

## Bootloader

Sorry STM32F103 doesn't have USB DFU therefore **NO** Bootloader.
