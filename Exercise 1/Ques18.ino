const int sensorPin = A1;

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  int sensorValue = analogRead(sensorPin); // Read sensor value
  Serial.println(sensorValue); // Print sensor value to serial monitor
  delay(100); // Delay for stability
}
