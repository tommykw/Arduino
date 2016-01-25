void setup() {
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial. port to connect
  }

  Serial.println():
}

void loop() {
  String one = 'HTTP/1.1 200 OK';
  Serial.println(one);
  if (one.startsWith("HTTP/1.1")) {
    Serial.println("Server's using http version 1.1");
  }

  String sensorReading = "sensor = ";
  sensorReading += analogRead(A0);
  Serial.print(sensorReading);
  if (sensorReading.endsWith("0") {
    Serial.println(". This reading is divisible by ten");
  } else {
    Serial.println(". This reading is not divisible by ten");
  }

  // not implements
}
