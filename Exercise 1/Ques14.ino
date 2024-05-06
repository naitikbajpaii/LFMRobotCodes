#include <LiquidCrystal.h>
LiquidCrystal lcd(2,3,4,8,12,13);

void setup() {
  pinMode(A3, INPUT); //LDR to A3
  pinMode(13, OUTPUT); //LED to 13
  lcd.begin(16,2);
  lcd.print("LDR_Output:");
  lcd.setCursor(0,1);
  lcd.print("LED_STATUS:");
  delay(2000);
}

void loop() {
  int LDR_Out = analogRead(A3);
  lcd.setCursor(11,0);
  lcd.print(LDR_Out);
  
  if (LDR_Out > 500) {
    digitalWrite(13, HIGH);
    lcd.setCursor(12, 1);
    lcd.print("ON ");
     } 
  else {
    digitalWrite(13, LOW);
    lcd.setCursor(12, 1);
    lcd.print("OFF");
    
  }
  delay(1000);
}
