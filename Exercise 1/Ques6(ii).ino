int i;
void setup()
{
  
}

void loop()
{
  for(i=1;i<256;i=i+32)
  {
      analogWrite(3,i);
      delay(1000);
  }
  for(i=255;i>0;i=i-32)
  {
    analogWrite(3,i);
    delay(1000);
  }
}
