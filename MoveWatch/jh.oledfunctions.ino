// connect OLED to 2IC node
void printToOLED(LIS.getAccelerationX(), LIS.getAccelerationY(), LIS.getAccelerationZ()) {
  u8g2.clearBuffer();                   // clear the internal memory
  u8g2.setFont(u8g2_font_ncenB08_tr);   // choose a suitable font
  u8g2.setCursor(0, 10);              // set cursor to first line
  u8g2.print("G'day");                // write something to internal memory
  
  u8g2.setCursor(0, 20);             
  u8g2.print("Accel: ");
  u8g2.print(LIS.getAccelerationX(), LIS.getAccelerationY(), LIS.getAccelerationZ());
  u8g2.print("unit");

  // send info to memory
  u8g2.sendBuffer();                
}


