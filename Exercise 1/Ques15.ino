#include <Servo.h>
//including the servo motor library
Servo myservo;
//initializing our servo motor
int pos = 0;//setting position of motor to 0 initiallly

void setup() {
  myservo.attach(5);//servo motor connected to pin 5
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) {
    myservo.write(pos);//change position of servo from 0 to 180 degree   
    delay(15);                       
  }
  for (pos = 180; pos >= 0; pos -= 1) { 
    myservo.write(pos);////change position of servo from 180 to 0 degree             
    delay(15);                       
  }
}
