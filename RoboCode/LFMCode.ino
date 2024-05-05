#define enableA 10
#define enableB 11

int fwSpeed = 255; //forward speed


void setup() {
  pinMode(enableA, OUTPUT); //speed MotorA
  pinMode(enableB, OUTPUT); //speed MotorB
  pinMode(12,OUTPUT); //direction MotorA
  pinMode(13,OUTPUT); //direction MotorB
 
  pinMode(A1, INPUT);//for left sensor
  pinMode(A2, INPUT);// for right sensor
}


void loop() { //sensors checking continously in loop
  int rsValue = digitalRead(A2);
  int lsValue = digitalRead(A1);

  if (rsValue == LOW && lsValue == LOW) 
  { // Both sensors on white( car on centerline)
    forward_motion();
  } 

  else if (rsValue == LOW && lsValue == HIGH) 
  { // Left sensor on black(a left turn)
    left_turn();
  }

  else if (rsValue == HIGH && lsValue == LOW) 
  { // Right sensor on black(a right turn)
    right_turn();
  } 

  else if (rsValue == HIGH && lsValue == HIGH) 
  { //both sensors in black
    stop();  
  }
}

void stop() 
{
  // Set motor speed
  analogWrite(enableA,200 ); 
  analogWrite(enableB, 200); 
  // set motor direction
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);

}
void forward_motion() {
  // Set motor speed
  analogWrite(enableA, 255); 
  analogWrite(enableB, 255); 
  // set motor direction
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
}

void left_turn() {
  // Set motor speed
  analogWrite(enableA, 210); 
  analogWrite(enableB, 230); 
  // set motor direction
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
}

void right_turn() {
  // Set motor speed
  analogWrite(enableA, 210); 
  analogWrite(enableB, 230); 
  // set motor direction
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
}
