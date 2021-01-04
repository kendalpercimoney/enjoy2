Enjoy2
======

Enjoy2 is a simple program for OSX that allows you to transform joystick inputs into keyboard or mouse events.

If you've ever played a video game which only supports mouse and keyboard input, but you want to use a joystick or gamepad, then Enjoy2 is the program for you. Enjoy2 lets you map your joystick inputs to:

* Key events
* Mouse clicks
* Mouse movement (for analog sticks)
* Scrolling

Enjoy2 supports multiple configurations (for different games or programs) and you can even map joystick buttons to change configurations on-the-fly.

Enjoy2 is written by [@nongraphical](http://nongraphical.com) and is based on [Enjoy by Sam McCall](https://yukkurigames.com/enjoyable/). Enjoy2 is MIT-licensed.

This Enjoy2 update has been written by [BaconShrimpEyes](http://baconshrimpeyes.com).

## How to install

[Download Enjoy2 release by @nongraphical](http://nongraphical.s3-website-us-east-1.amazonaws.com/releases/Enjoy2.zip), extract the archive, and you're done!

To compile yourself:

install xcode from the MacOS app store or from [developer.apple.com](https://developer.apple.com/xcode/)

clone this repository, with this command in terminal

```
git clone https://github.com/BaconWrappedShrimpWithEyes/enjoy2.git
```

open `enjoy2.xcodeproject` using any version of xcode built for macos 10.13 or later

click run

the enjoy2 application will be built in `~/Library/Developer/Xcode/DerivedData/enjoy2-[RANDOM-SEQUENCE-OF-LETTERS]/Build/Products/Debug/Enjoy2.app` or, alternatively, the app will be searchable using Spotlight search

## What's Been Changed

• Currently uncompileable features (depracated and deleted Objective-C functions) have been replaced with modern equivelants
• Dark Mode support added

## How to use

At startup, and when Enjoy2 is paused, press any button or move any analog stick to jump to the configuration for that button or stick. From there, select one of the mapping options from the choices on the right.

To use an analog axis to move the mouse, select the "Analog" sub-item on the left.

### Terminology

A **mapping** specifies which keys/mouse buttons/mouse movements happen when a joystick button is pressed or axis moved. A **translation** specifies which hardware joystick buttons and axes translate into which virtual buttons and axes.

### Mapping modes

Enjoy2 offers two mouse mapping modes: global and single-window. Enjoy2 starts in global mode, but you can set any joystick button to the "toggle mouse scope" action, which will change the mode. If you are using Enjoy2 to play a video game, you may find that one or the other mode offers better compatibility with your game's specific requirements.

### Translations (upcoming feature)

**Translations** allow you to specify a mapping (e.g. for playing a specific video game) once and apply it to a variety of similar controllers. For example, you could create a mapping and use it with PS3 controllers and Logitech PC gamepads.

These were never implemented properly.

## Transferring configuration files

All the Enjoy2 configuration files (mappings and translations) are stored in the user's Application Support directory:

    /Users/$USERNAME/Library/Application Support/Enjoy2/*

The files are JSON-encoded and should be portable across machines.

## Requirements

* Mac OS X 10.13 (Snow Leopard) or higher
* USB gamepad/joystick/controller

## Changelog

Version 1.3

* Added dark mode support
* Button on-press event options are no longer spaced out so much
* Fixed compiling issues for modern versions of XCode

*At present, this version requires user compilation in xcode*

Version 1.2

* JSON configuration files

Version 1.1

* Forked from Enjoy
* Mouse movement support
* Mouse button support
* Scrollwheel support
* Support for two mouse movement modes

## Acknowledgements

* JSONKit: [https://github.com/johnezang/JSONKit](https://github.com/johnezang/JSONKit)
