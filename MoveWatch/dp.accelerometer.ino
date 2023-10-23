//include libraries
#include "LIS3DHTR.h"
#include <Wire.h>
LIS3DHTR<TwoWire> LIS; //IIC
#define WIRE Wire

void setup() {
Serial.begin(9600);
Serial.println("Serial monitor configured to 9600");
Serial.println("---------------------------------");
}

void loop() {
  if (acceleration > ) {
// do stuff if the condition is true
} else {
// do stuff if the condition is false
}
}