int value;
int outputValue = 0;

void setup()
{
  pinMode(A2, INPUT);
  pinMode(9, OUTPUT);//LED
  Serial.begin(9600);
}

void loop()
{
  value = analogRead(A2);
  outputValue = map(value, 0, 1023, 0, 255);
  analogWrite(9, outputValue);//Change LED according to potentiometer
  Serial.println(outputValue);
  delay(2); 
}
