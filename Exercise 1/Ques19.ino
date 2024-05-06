const int sensor = A1;
const int led = 13;

void setup() {
  pinMode(sensor, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  int sensorValue = analogRead(sensor);

  if (sensorValue < 500) { // threshold=500
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
}
