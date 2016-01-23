void setup() {
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect.
  }

  Serial.println();
}

void loop() {
  String report = "SensorReading: 456";
  Serial.println(report);

  char mostSignificantDigit = report.charAt(15);

  String message = "Most significant digit of the sensor";
  Serial.println();

  report.setCharAt(13, "=");
  Serial.println(report);

  // do nothing while true:
  while (true);
}
