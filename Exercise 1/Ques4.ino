int LED1=13;
int SWITCH1=7;
int LED2=12;
int SWITCH2=8;
int LED3=11;
int SWITCH3=9;
  
void setup()
{
  pinMode(SWITCH1,INPUT_PULLUP);
  pinMode(LED1,OUTPUT);
  pinMode(SWITCH2,INPUT_PULLUP);
  pinMode(LED2,OUTPUT);
  pinMode(SWITCH3,INPUT_PULLUP);
  pinMode(LED3,OUTPUT);
}

void loop()
{
  if(digitalRead(SWITCH1)==LOW)
  {
    digitalWrite(LED1,HIGH);
  }
  else{
    digitalWrite(LED1,LOW);
  }
  if(digitalRead(SWITCH2)==LOW)
  {
    digitalWrite(LED2,HIGH);
  }
  else{
    digitalWrite(LED2,LOW);
  }
  if(digitalRead(SWITCH3)==LOW)
  {
    digitalWrite(LED3,HIGH);
  }
  else{
    digitalWrite(LED3,LOW);
  }
}
