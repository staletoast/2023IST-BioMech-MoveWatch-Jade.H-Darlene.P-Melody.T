// This example use I2C.
#include "LIS3DHTR.h"
#include <Wire.h>
LIS3DHTR<TwoWire> LIS; //IIC
#define WIRE Wire

void setup()
{
  Serial.begin(9600);
  while (!Serial)
  {
  };
  LIS.begin(WIRE,0x19); //IIC init
  //LIS.begin(0x19);
  delay(100);
    LIS.setFullScaleRange(LIS3DHTR_RANGE_2G);

  LIS.setOutputDataRate(LIS3DHTR_DATARATE_50HZ);

}
void loop()
{
  if (!LIS)
  {
    Serial.println("LIS3DHTR didn't connect.");
    while (1)
      ;
    return;
  }
  //3 axis
    Serial.print("x:"); Serial.print(LIS.getAccelerationX()); Serial.print("  ");
    Serial.print("y:"); Serial.print(LIS.getAccelerationY()); Serial.print("  ");
    Serial.print("z:"); Serial.println(LIS.getAccelerationZ());

  if (LIS.getAccelerationX(), LIS.getAccelerationY(), LIS.getAccelerationZ() < 1.2)
  {
  Serial.print("Get Active!");
  }
  else 
  {
  Serial.print("wow you're active");
  }
}