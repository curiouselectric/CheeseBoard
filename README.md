CheeseBoard Library
===================

This library contains components for use with the CheeseBoard Cheddar and variants.  The examples show off some of the features of the boards - using WiFi, displaying messages and graphics on the OLED screen, using the RGB LEDs and getting input from the rotary encoder and it's push-button feature.

The library defines the following convenience classes:

* CbLeds - Singleton for controlling the RGB LEDs (inherits from Adafruit_NeoPixel)
* CbOledDisplay - Singleton U2g2 object which adds justified wrapped text 
* CbRotaryInput - Singleton which used callbacks to reveice input from the rotary encoder + button
* GfxItem - base class for high-level objects which can be drawn on CbOledDisplay
* GfxSSIDListBox - a list box for displaying WiFi network information
* GfxNetInfo - an item for the GfxSSIDListBox
* GfxScene - experimental collection of GfxItem objects
* GfxSignalStrength - little signal strength meter for use in GfxNetInfo
* GfxStringListBox - generic listbox for strings (needs completion)
* GfxTextBox - show text in a box with optional border

Select your hardware by copying or linking the appropriate XXXConfig.h file to CheeseboardConfig.h in this directory.

Documentation
-------------

Dependencies
------------

* ESP8266 board (install using IDE boards manager, or manually from here: https://github.com/esp8266/Arduino)
* Adafruit_NeoPixel library (install using IDE library manager)
* Encoder library (install using IDE library manager)
* TimeLib (install using IDE library manager)
* U8g2 (install using IDE library manager)
* Mutila install manually from https://github.com/matthewg42/Mutila
* EspApConfigurator install manually from https://github.com/matthewg42/EspApConfigurator

Future
------

* Better method of selecting hardware
* Make sure all dependent libs are available in IDE library manager - including CheeseBoard
* Host generated docs on github or readthedocs

