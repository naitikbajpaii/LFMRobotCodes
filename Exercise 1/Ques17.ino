#include <Servo.h>

int switch7=7;
int switch8=8;

Servo servoMotor;
int presentangle = 90; 

void setup() {
  servoMotor.attach(5); 
  pinMode(7, INPUT_PULLUP); 
  pinMode(8, INPUT_PULLUP);
}

void loop() {
  
  if (digitalRead(switch8) == LOW) {
    delay(50); 
    if (digitalRead(switch8) == LOW && presentangle <180)
      presentangle +=2;
    servoMotor.write(presentangle);
    delay(20);
  }


 if (digitalRead(switch7) == LOW) {
    delay(50); 
    if (digitalRead(switch7) == LOW && presentangle >0)
      presentangle -=2;
    servoMotor.write(presentangle);
    delay(20);
  }

}
