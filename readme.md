# Handwired BluePill 87 / 104 QMK Guide
This is a forked QMK repository that aim to aid beginner to smoothen their handwired keyboard modding journey. Bluepill is a widely available, cheap ARM microcontroller that catch my atttention during my hunt for cheap and enough I/O for TKL or Full Fledge 104 ANSI layout. 

Current Limitation: 
1. No guide on how to RGB
2. No QMK Via support YET
3. No OLED display / LCD display 
4. Non-split KB layout        

##### *some guide on the listed feature might be supported in future, currently there are few features im keen on implementing it on my bluepill KB
*** 
## Electronic 
In this section is all about physical wiring and soldering. I will try to explain as much as i can in layman term for why and how. Once handwiring is completed you may proceed to Firmware section.

<details>
<summary>Introduction</summary>

### Switch / Key Matrix(AKA Keymaps)
Due to limited I/O availabe, it is impossible for each switch to have its own 'private access lane' to tell your microcontroller that it was stroke. Instead all switch will connected in a array or grid, consisted of multiple rows and columns. 

Microcontroller will then scan the row and column over and over again to see if any key was struck during scanning. This is where you need to create a grid of your switches and input your switch array / grid as keymaps in QMK

### Anti Ghosting
Anti ghosting is defined as 2 or more neighbouring switches was stroke and due to how switches are connected in a grid, your keyboard though that you stroked additional keys that you didn't. Visit [here](https://beebom.com/keyboard-ghosting-explained/) for detailed explaination on this topic. N key roll over & ghosting might be more complicated than you think it is. 

Possible Solution:      

1. Very important to have good keymap design. General rule will be try to utilse as much I/O as possible for your keymaps. It ease the wiring and ghosting less likely to occur.    
2. Adding Diode might help. 
3. Enable QMK Anti Ghosting algoritm(not recommended as sometimes might stop you from input certain key combination )
</details>


### Bluepill Board preparation 
By default your bluepill board don't have any USB bootloading feature, meaning you can't update bluepill firmware over USB. By default only support Serial. USB bootloading will speed up alot of your QMK debugging(i think).

To enable USB bootloader you need: 
1. Serial converter that support 5V(USB)-> 3.3V(Bluepill), otherwise you will slowly kill your bluepill TX pin A9/A10 overtime.
2. Bluepill USB bootloader firmware
3. Bluecube software

To flash bluepill USB bootloader, follow [here](https://www.electronicshub.org/how-to-upload-stm32f103c8t6-usb-bootloader/). Please Ignore Arduino steps at the bottom ofthe guide, unless you would like to test whether USB bootloader is working fine.


### Keyboard Preparation 
1. Prepare your keyboard and switches
2. Decide how are you going to wire your switch matrix / array.(how many rows and column) 
3. Check QMK official guide [here](https://beta.docs.qmk.fm/using-qmk/guides/keyboard-building/hand_wire) for how to start and which type of wiring suits your need. IGNORE the firmware section at the bottom of the guide. As you will be creating your own firmware instead.
4. Document your keyboard matrix on excel or on paper while you are soldering your switch matrix. Your will need it for next section(Firmware preparation).  

***
## Firmware 
This process might be very long and you might need to spend a lot of time troubleshooting your keyboard. You will get frustrated at some point, but trust me keep going and you will be thankful toward yourselves once you embraced the hardship. Due to the fact that Im using ubuntu for the whole process.

Bear in mind you will be creating your own firmware rather than flashing other people firmware unlesss your keyboard wiring are exact same as theirs OR you buy PCB from them. Since this is open source project, I will not be responsible on any hardware brick / damage occured in this process. 

In short the process will as follow: 
1. Setup QMK enviroment 
2. Configure your keyboard configuration according to your wiring.(eg, diode direction, how many rows & columns) under folder **handwired/pillXXX/config.h**. [Refererance here.](https://beta.docs.qmk.fm/developing-qmk/qmk-reference/config_options) *It is unlikely that you need to modify *rules.mk* unless your are using different microcontroller.
3. Modify your key matrix layout under folder **handwired/pillXXX/pillXXX.h**, check out [here](https://beta.docs.qmk.fm/configurator/qmk-api/reference_configurator_support)
4. Edit your prefered keymaps under folder **handwired/pillXXX/keymaps/default/keymap.c** [ref](https://beta.docs.qmk.fm/using-qmk/guides/keymap), as for what KC_ means check [here](https://beta.docs.qmk.fm/using-qmk/simple-keycodes)
5. Compile your firmware using command handwired/pillXXX:default:dfu-util
6. Debug and recompile.

### Setup Your QMK enviroment
#### General
1. Download & install GIT on your computer [here](https://git-scm.com/download/)
2. Visit [here] on how to setup QMK enviroment on your PC(https://beta.docs.qmk.fm/tutorial/newbs_getting_started)
3. Follow the setup process in this document. 


<details>
<summary>Ubuntu guide</summary>
1. Download GIT on your computer [here](https://git-scm.com/download/)
2. Download (QMK firmware)[https://github.com/qmk/qmk_firmware] code by running **git clone https://github.com/qmk/qmk_firmware.git** on your computer terminal. Details tutorial on how to [git clone](https://www.jcchouinard.com/clone-github-repository-on-windows/)
3. Setup your QMK enviroment depends on your Distro OS.
4. Use Code Editor of your choice(VisualStudio Code, ATOM, Sublime) and open the QMK firmware folder. 
5.  
</details>


##### Git is a version control and code sharing software. Nothing malicious, you will need git to 'download' QMK code to your computer first. 



 
### Compile your firmware
QMK has a specific command on how to compile firmware, 

***
<!-- 
# Quantum Mechanical Keyboard Firmware

[![Current Version](https://img.shields.io/github/tag/qmk/qmk_firmware.svg)](https://github.com/qmk/qmk_firmware/tags)
[![Build Status](https://travis-ci.org/qmk/qmk_firmware.svg?branch=master)](https://travis-ci.org/qmk/qmk_firmware)
[![Discord](https://img.shields.io/discord/440868230475677696.svg)](https://discord.gg/Uq7gcHh)
[![Docs Status](https://img.shields.io/badge/docs-ready-orange.svg)](https://docs.qmk.fm)
[![GitHub contributors](https://img.shields.io/github/contributors/qmk/qmk_firmware.svg)](https://github.com/qmk/qmk_firmware/pulse/monthly)
[![GitHub forks](https://img.shields.io/github/forks/qmk/qmk_firmware.svg?style=social&label=Fork)](https://github.com/qmk/qmk_firmware/)

This is a keyboard firmware based on the [tmk\_keyboard firmware](https://github.com/tmk/tmk_keyboard) with some useful features for Atmel AVR and ARM controllers, and more specifically, the [OLKB product line](https://olkb.com), the [ErgoDox EZ](https://ergodox-ez.com) keyboard, and the [Clueboard product line](https://clueboard.co).

## Documentation

* [See the official documentation on docs.qmk.fm](https://docs.qmk.fm)

The docs are powered by [Docsify](https://docsify.js.org/) and hosted on [GitHub](/docs/). They are also viewable offline; see [Previewing the Documentation](https://docs.qmk.fm/#/contributing?id=previewing-the-documentation) for more details.

You can request changes by making a fork and opening a [pull request](https://github.com/qmk/qmk_firmware/pulls), or by clicking the "Edit this page" link at the bottom of any page.

## Supported Keyboards

* [Planck](/keyboards/planck/)
* [Preonic](/keyboards/preonic/)
* [ErgoDox EZ](/keyboards/ergodox_ez/)
* [Clueboard](/keyboards/clueboard/)
* [Cluepad](/keyboards/clueboard/17/)
* [Atreus](/keyboards/atreus/)

The project also includes community support for [lots of other keyboards](/keyboards/).

## Maintainers

QMK is developed and maintained by Jack Humbert of OLKB with contributions from the community, and of course, [Hasu](https://github.com/tmk). The OLKB product firmwares are maintained by [Jack Humbert](https://github.com/jackhumbert), the Ergodox EZ by [ZSA Technology Labs](https://github.com/zsa), the Clueboard by [Zach White](https://github.com/skullydazed), and the Atreus by [Phil Hagelberg](https://github.com/technomancy).

## Official Website

[qmk.fm](https://qmk.fm) is the official website of QMK, where you can find links to this page, the documentation, and the keyboards supported by QMK. -->
