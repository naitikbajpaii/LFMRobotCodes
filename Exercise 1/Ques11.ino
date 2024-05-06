int R_LED = 3; //LED to glowwith varying potentiometer  
int Analog_in = A2; //analog port for potentiometer

void setup() {
  Serial.begin(9600);
  pinMode(R_LED, OUTPUT);
}

void loop() {
  int R_Intensity= analogRead(Analog_in); //Reading potentiometer data

  int Analog_value = map(Analog_in, 0, 1023, 0, 255);
  analogWrite(R_LED,R_Intensity);//give potentiometer intensity to led
  Serial.println(R_Intensity);//print potentiometer intensity value to led
  delay(10);
}
