/*
    Project name : Heart Rate Sensor
    Modified Date: 10-06-2024
    Code by : Projectslearner
    Website : https://github.com/Projectslearner/arduino-nano-heart-rate-sensor.git
*/

const int heartSensorPin = A0; // Analog pin connected to the heart rate sensor

void setup() {
  // Initialize the serial communication
  Serial.begin(9600);
}

void loop() {
  // Read the value from the heart rate sensor
  int sensorValue = analogRead(heartSensorPin);

  // Print the sensor value to the Serial Monitor
  Serial.print("Heart Rate Sensor Value: ");
  Serial.println(sensorValue);

  // Add a small delay to avoid spamming the Serial Monitor
  delay(100);
}
