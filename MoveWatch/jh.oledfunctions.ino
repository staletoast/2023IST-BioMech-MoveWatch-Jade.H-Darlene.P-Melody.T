// connect OLED to 2IC node
void printToOLED(float step) {
  u8g2.clearBuffer();                   // clear the internal memory
  u8g2.setFont(u8g2_font_ncenB08_tr);   // choose a suitable font
  u8g2.setCursor(0, 10);              // set cursor to first line
  u8g2.print("G'day");                // write something to internal memory
  
  u8g2.setCursor(0, 20);             
  u8g2.print("step: ");
  u8g2.print(step);
  u8g2.print("unit");

  // send info to memory
  u8g2.sendBuffer();                
}

float myStep() {
  // gets step count
  return bma456.getStepCounterOutput();
}

