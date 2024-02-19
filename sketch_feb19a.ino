#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);
void setup() {
 
}

void loop() {
  
  lcd.init();
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("Merhaba");
  lcd.setCursor(0,1);
  lcd.print("Dunya");
  delay(1000);
  lcd.clear();

  lcd.noBacklight();
  delay(2000);
  lcd.backlight();

  lcd.setCursor(0,0);
  lcd.print("Mehmet");
  lcd.setCursor(0,1);
  lcd.print("Emre");
  delay(1000);
  lcd.clear();

}
