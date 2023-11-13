/* 
> sorry  dardar we deleted your code because i got the accelerometer working
+ we also got the stepcounter working

notes for you:
? can you do the health bar since i did the accelerometer
- download step counter library: arduino_bma456.h, link found on its sensor catalogue, download from github

- download visual studio code (b jones recommendation) for easier navigation when INTEGRATING/MERGING CODE ONLY 
- create folder to make functions to include in mainline to integrate all our code
- then call those functions in the main folder
*/

/*
    Grove LED Bar - Level Example
    This example will show you how to use setLevel() function of this library.
    The setLevel() function illuminates the given number of LEDs from either side.

    Syntax setLevel(level)
    0  = all LEDs off
    5  = 5 LEDs on
    10 = all LEDs on
*/

#include <Grove_LED_Bar.h>

//BE SURE USE CORRESPONDING DEVICE
//Grove_LED_Bar bar(6, 7, 0, LED_CIRCULAR_24);
//FOR LED_BAR_10
Grove_LED_Bar bar(7, 6, 0, LED_BAR_10); // Clock pin, Data pin, Orientation

void setup() {
    // nothing to initialize
    bar.begin();
}

void loop() {
    // Walk through the levels
    for (int i = 0; i <= 10; i++) {
        bar.setLevel(i);
        delay(100);
    }
}
