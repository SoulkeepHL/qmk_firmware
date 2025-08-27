# mediakeys

![mediakeys](https://i.imgur.com/jbH9Hul.jpeg)

VIA enabled QMK firmware for a directpin RP2040 3 button + rotary encoder media control keypad

* Keyboard Maintainer: [SoulkeepHL](https://github.com/SoulkeepHL)

Compile example for this keyboard (after setting up your build environment):

    qmk compile -kb handwired/soulkeephl/mediakeys -km via

Flashing example for this keyboard:

    qmk flash -kb handwired/soulkeephl/mediakeys -km via

See the [build environment setup](getting_started_build_tools) and the [make instructions](getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](newbs).

## Bootloader

Enter the bootloader in 2 ways:

* **Bootmagic reset**: Hold down the button closest to the micro-USB port while plugging it in to USB
* **Physical reset button**: Hold the BOOTSEL button on the Pi Pico while connecting it to USB
