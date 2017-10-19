#pragma once

/*! \brief millis replacement
 *
 * The Arduino millis() function can have it's return value
 * messed up if a sketch disables and re-enables interrupts 
 * for some reason. This is commonly encountered when using
 * Adafruit's NeoPixel library, which disables interrupts
 * while sending data to Neopixel devices (as timing is critical)
 * Sketches which make heavy use of NeoPixels will encouter 
 * millis drift, where time is slowed down.
 *
 * CbMillis() as a replacement for the stock millis() function,
 * and a addCbMillisOffset() which can then be used to compensate
 * drift in the internal clock.  In the case of NeoPixel show() 
 * calls, the drift is approximately proportional to the number 
 * of NeoPixels which are updated, and so the millis offset can 
 * be calculated and addCbMillisOffset() called to "fix" the 
 * clock.
 *
 */

//! Global CbMillis offset value
extern float _CbMillisOffsetMs;

//! Replacement for millis()
unsigned long CbMillis(); 

//! Add offset
void addCbMillisOffset(float ms);


