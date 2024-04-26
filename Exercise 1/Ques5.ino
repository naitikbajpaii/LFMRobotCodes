void setup()
{
  pinMode(13,INPUT_PULLUP);
}

void loop()
{
  if(digitalRead(13)==LOW)
     {
  analogWrite(3,255);
  delay(500);
  analogWrite(3,0);
  analogWrite(5,255);
  delay(500);
  analogWrite(5,0);
  analogWrite(6,255);
  delay(500);
  analogWrite(6,0);
     }
}
