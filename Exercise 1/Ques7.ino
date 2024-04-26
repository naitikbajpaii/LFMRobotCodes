int i;
void setup()
{
  
}

void loop()
{
    for(i=1;i<256;i=i+64)
    {
      analogWrite(3,i);
      delay(1000);
     }
    analogWrite(3,0);
      i=0;
    for(i=1;i<256;i=i+64)
    {
      analogWrite(5,i);
      delay(1000);
    }
    analogWrite(5,0);
      i=0;
    for(i=1;i<256;i=i+64)
    {  
      analogWrite(6,i);
      delay(1000);
    }
     analogWrite(6,0);
     i=0;
}
