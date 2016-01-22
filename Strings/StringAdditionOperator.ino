String one, two, three;

void setup() {
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect
  }

  one = String("three = ");
  two = String("string");
  three = String();
  Serial.println();
}

void loop() {
  three = one + 123;
  Serial.println(three);

  three = one + 123456789;
  Serial.println(three);

  three = one + "A";
  Serial.println(three);

  three = one + "abc";
  Serial.println(three);

  three = one + two;
  Serial.println(three);

  int sensorValue = analogRead(A0);
  one = "Sensor value:";
  three = one + sensorValue;
  Serial.println(three);

  long currentTime = millis();
  one = "millis() values: ";
  three = one + millis();
  Serial.println(three);

  while (true);
}
