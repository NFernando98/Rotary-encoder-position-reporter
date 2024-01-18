#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Encoder.h>

LiquidCrystal_I2C lcd(0x3F, 16, 2);
Encoder myEncoder(2, 3);

void setup() {
  lcd.init();
  lcd.clear();
  lcd.backlight();

  lcd.setCursor(2, 0);
  lcd.print("Rotary Encoder:");

  lcd.setCursor(2, 1);
  lcd.print("Position: ");
}

void loop() {
  int encoderValue = myEncoder.read();

  lcd.setCursor(11, 1);  // Set cursor to character 11 on line 1 (after "Position: ")
  lcd.print(encoderValue);

  delay(100);  // Adjust the delay based on your requirements
}
