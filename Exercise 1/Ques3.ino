int LED=13;
int SWITCH=7;
void setup()
{
 pinMode(SWITCH,INPUT_PULLUP);
 pinMode(LED,OUTPUT);
}
void loop()
{
  if(digitalRead(SWITCH)==LOW)
  {
    digitalWrite(LED,HIGH);
   }
  else{
    digitalWrite(LED,LOW);
  }
}
