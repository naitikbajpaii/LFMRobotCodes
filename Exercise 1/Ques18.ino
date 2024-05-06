const int sensor = A1;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensor_value = analogRead(sensor); // Read IR sensor value
  Serial.println(sensor_value); // Print sensor value to serial monitor
  delay(200);
}
