#include <Servo.h>

Servo servoMotor;
int potential = 0;
int angle = 0;

void setup() {
  servoMotor.attach(5); 
}

void loop() {
  potential = analogRead(A2);
  angle = map(potential, 0, 1023, 0, 180);//getting value of angle from potentiometer
  servoMotor.write(angle);  
  delay(15);
}
