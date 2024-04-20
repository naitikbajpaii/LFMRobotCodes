//The logic is to increase intensity of one colour while decreasing intensity of some other colour in a for loop, 3 similar for loops are used one by one for R, G and B.

int i;
void setup() {

}

void loop() {
  //increasing red light and decreasing blue light simultaneously
  for(i=0;i<=255;i++){
    analogWrite(3,i);
    analogWrite(6,255-i);
    delay(10);
  }
  delay(50);
  //decreasing red light and increasing green simultaneously
  for(i=0;i<=255;i++){
    analogWrite(5,i);
    analogWrite(3,255-i);
    delay(10);
  }
  delay(50);
    //decreasing green light and increasing blue simultaneously
  for(i=0;i<=255;i++){
    analogWrite(6,i);
    analogWrite(5,255-i);
    delay(10);
  }
}
