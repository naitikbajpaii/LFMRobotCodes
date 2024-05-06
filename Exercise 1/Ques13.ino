#include <LiquidCrystal.h>
LiquidCrystal lcd(2,3,4,8,12,13);
int Light_intensity;

void setup() {
  lcd.begin(16, 2);
  Serial.begin(9600);
}

void loop() {
  //display on lcd
  Light_intensity = analogRead(A3);
  lcd.clear();
  Serial.println(Light_intensity);
  lcd.setCursor(0, 1);
  lcd.print(Light_intensity);
  // display on serial monitor
  Serial.print("LDR Value: ");
  Serial.println(Light_intensity);
  delay(500);
}
