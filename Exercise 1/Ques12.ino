#include <LiquidCrystal.h>
// include the library for lcd display
const int rs = 2, en = 3, d4 = 4, d5 = 8, d6 = 12, d7 = 13;//setting pins according to lcd
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);//initialize lcd with pins defined

void setup() {
  lcd.begin(16, 2);//columns=16,rows=2
  lcd.print("Group 20 here!");//displaying text in lcd
}

void loop() {//for blinking of curser
  lcd.setCursor(0, 1);
  lcd.print(millis() / 1000);//reset time for cursor
}
