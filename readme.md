# Handwired BluePill 87 / 104 QMK Guide
This is a forked QMK repository that aim to aid beginner to smoothen their handwired keyboard modding journey. Bluepill is a widely available, cheap ARM microcontroller that catch my atttention during my hunt for cheap and enough I/O for TKL or Full Fledge 104 ANSI layout. 

This guide is divided into 2 sections, Wiring & Firmware. This guide should be enough for you to begin your journey of creating your own custom QMK firmware for bluepill (STM32F108C8T6). Before proceed, this is by no means a full replacement on commercialised keyboard. You may face a lot of issue and problem if you have no idea what you are trying to do. If you are a person who purely want to explore **HANDWIRED QMK keyboard**, Welcome aboard.  

Throughout my testing, 'non STM' / clone version work pretty well too. Bluepill offers more I/O capabilities vs price if compare to teensy / arduino solution. 
The **only downside** is that it is complicated to start with as there is a lot of preparation needed before  getting into QMK. 

Current limitation on my implementation: (due to my limited understanding QMK of course)
1. No guide on how to RGB
2. No QMK Via support YET
3. No OLED display / LCD display 
4. Non-split KB layout
5. No Bluetooth Connection, it was said that QMK do support bluetooth but the option is limited,  it is a deep murky water to explore, for ARM controller, as far as i can tell. 

##### *some guide on the listed feature might be supported in future, currently there are few features im keen on implementing it on my bluepill KB
 
 &nbsp; 
 &nbsp; 
 ****
 &nbsp;  
 
## Electronics / Wiring
In this section is all about physical wiring and soldering. I will try to explain as much as i can in layman term for why and how. Once handwiring is completed you may proceed to Firmware section. 

You may construct a temporary 4x4 switches array to play with QMK before you scale up with full fledge KB layout that you want. 

<details>
<summary>Basic Keymap &  Ghosting Introduction</summary>

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

&nbsp;
&nbsp; 

### Bluepill Board preparation 
By default your bluepill board doesn't have any USB bootloading feature, meaning you can't update bluepill firmware over USB. By default only support Serial. USB bootloading will speed up alot of your development(i think).

To enable USB bootloader you need: 
1. Serial converter that support 5V(USB)-> 3.3V(Bluepill), otherwise you will slowly kill your bluepill TX pin A9/A10 overtime.
2. Bluepill USB bootloader firmware
3. Bluecube software

To flash bluepill USB bootloader, follow [here](https://www.electronicshub.org/how-to-upload-stm32f103c8t6-usb-bootloader/). Please Ignore Arduino steps at the bottom of the guide, unless you would like to test whether USB bootloader is working fine.

&nbsp; 
&nbsp; 

### Keyboard Preparation 
1. Prepare your keyboard and switches
2. Decide how are you going to wire your switch matrix / array.(how many rows and column) 
3. Check QMK official guide [here](https://beta.docs.qmk.fm/using-qmk/guides/keyboard-building/hand_wire) for how to start and which type of wiring suits your need. IGNORE the firmware section at the bottom of the guide. As you will be creating your own firmware instead.
4. Document your keyboard matrix on excel or on paper while you are soldering your switch matrix. Your will need it for next section(Firmware preparation).  
 
 &nbsp; 
 &nbsp; 
 ****
 &nbsp; 
## Firmware 
This process might be very long and you might need to spend a lot of time troubleshooting your firmware and keyboard wiring. You will get frustrated at some point, but trust me keep going and you will be thankful toward yourselves once you embraced the hardship. Due to the fact that I'm using ubuntu for the whole process, i will try to provide as details as possible when it comes to setting up your enviroment. 

Bear in mind you will be creating your own firmware rather than flashing other people firmware unlesss your keyboard wiring are exact same as theirs OR you buy PCB from them. Since this is open source project, I will not be responsible on any hardware brick / damage occured in this process. 

&nbsp;
&nbsp; 

### Setup Your QMK enviroment
#### General guide
1. Download & install GIT on your computer [here](https://git-scm.com/download/)
2. Visit [here] on how to setup QMK enviroment on your PC(https://beta.docs.qmk.fm/tutorial/newbs_getting_started)
3. Follow the setup process in this document. 
Good reference for windows user [here] by  Chokkan (https://www.youtube.com/watch?v=-HLV6mUxNnU)
<details>
<summary>Ubuntu guide</summary>
1. Download GIT on your computer [here](https://git-scm.com/download/)
2. Download (QMK firmware)[https://github.com/qmk/qmk_firmware] code by running **git clone https://github.com/qmk/qmk_firmware.git** on your computer terminal. Details tutorial on how to [git clone](https://www.jcchouinard.com/clone-github-repository-on-windows/)
3. Setup your QMK enviroment depends on your Distro OS.
4. Use Code Editor of your choice(VisualStudio Code, ATOM, Sublime) and open the QMK firmware folder. 
5. Start editing / change according to your keymaps. 

##### Git is a version control and code sharing software. Nothing malicious, you will need git to 'download' QMK code to your computer first. 
</details>

&nbsp;
&nbsp; 

### Things to change
1. Configure your keyboard configuration according to your wiring.(eg, diode direction, how many rows & columns) under folder **handwired/pillXXX/config.h**. [Refererance here.](https://beta.docs.qmk.fm/developing-qmk/qmk-reference/config_options) *It is unlikely that you need to modify *rules.mk* unless your are using different microcontroller.
2. Modify your key matrix layout under folder **handwired/pillXXX/pillXXX.h**, check out [here](https://beta.docs.qmk.fm/configurator/qmk-api/reference_configurator_support)
3. Edit your prefered keymaps under folder **handwired/pillXXX/keymaps/default/keymap.c** [ref](https://beta.docs.qmk.fm/using-qmk/guides/keymap), as for what KC_ means check [here](https://beta.docs.qmk.fm/using-qmk/simple-keycodes)

&nbsp;
&nbsp; 

### Compile and upload firmware to Bluepill
QMK has a specific command on how to compile firmware
command as follow:     
{project folder}:{keymaps}:{flash utilities}

To compile your firmware just run make up your command and run this on terminal. 
1. Compile your firmware using command handwired/pillXXX:default:dfu-util
2. When you see your terminal is waiting for bootloader presence, move your BOOT1 jumper to high(1) and press bluepill reset button
3. Wait for the uploading sequence to complete and then change back BOOT1 jumper to low(0) 
4. Press reset twice to toggle back to USB bootloader mode if needed. (As for why need to press twice might be due to there are 2 bootloader in STM32, Original bootloader & USB bootloader, again i might be wrong)
5. Last but not least, debug and recompile and repeat steps 2 to 4 to test your firmware.

##### A unccessful VIA (pill104via) was included in this repo, but it is not fully working yet & the VIA json file is **NOT** included in this repo too. I can't get it working yet.  

 &nbsp; 
 &nbsp; 
 ***
 &nbsp; 
## Summary 
### Electronics Wiring 
The wiring process will be as follow: 
1. Prepare your handwire keyboard with switch
2. Design your keyboard keymaps before soldering(where wire should run, where is your bluepill will be placed etc)
3. Solder your switches  
4. Document your switch array as you progress 

### Firmware 
The firmware preparation process will be as follow: 
1. Setup QMK enviroment 
2. Configure your keyboard configuration and keymaps accordingly 
3. Compile your firmware
4. Upload your firmwarer to Bluepill
6. Debug, recompile and test.
##### every OS has slightly different setup and you might need to search your problem on the web, this is not a easy journey for non-programmer. Countless of time need to be spent on trying to debug your circuit / firmware try to figure out what went wrong. 
 &nbsp;
### GLHF

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
