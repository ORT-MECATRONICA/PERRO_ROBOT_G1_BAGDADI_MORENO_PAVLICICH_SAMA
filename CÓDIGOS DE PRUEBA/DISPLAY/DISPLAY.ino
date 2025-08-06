#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup() {
  lcd.setCursor(1, 0);
  lcd.print("Prueba:");
  lcd.setCursor(7, 0);
  lcd.print(“Grupo”);
  lcd.setCursor(1, 1);
  lcd.print("Meca:");
  lcd.setCursor(5, 0);
  lcd.print(“2025”);
}

void loop() {
}
