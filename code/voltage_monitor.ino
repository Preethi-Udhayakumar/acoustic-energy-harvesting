int sensorPin = A0;
float voltage = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(sensorPin);
  voltage = value * (5.0 / 1023.0) * 2;
  Serial.print("Voltage: ");
  Serial.println(voltage);
  delay(1000);
}
