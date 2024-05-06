#include <Servo.h>

const int servo = 5;   
const int sensor = A1;   
const int max_angle = 180; 
const int min_angle = 0;  


Servo servo;

void setup() {
  servo.attach(servo);  
  pinMode(sensor, INPUT);  
}

void loop() {
  if (digitalRead(sensor) == LOW) {
    //obstacle detected, stop sweeping
    stopSweeping();
  } else {
    //no obstacle detected, don't stop sweeping
    sweepServo();
  }
}

void stopSweeping() {
  int current = servo.read();
  servo.write(current); //set servo to current position and stop sweeping
}

void sweepServo() {
  // Sweeping from min to max
  for (int angle = min_angle; angle <= max_angle; angle += 2) {
    servo.write(angle);   
    delay(20);             
  }
  
  // Sweeping from max to min
  for (int angle = maxAngle; angle >= minAngle; angle -= 2) {
    servo.write(angle);   
    delay(20);             
  }
}
