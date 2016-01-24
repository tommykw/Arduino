void setup() {
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect
  }

  Serial.println();
}

void loop() {
  String one = "Hello String";
  Serial.println(one);

  one = String("a");
  Serial.println(one);

  String two = String("This is a string");
  Serial.println(two);

  one = String(two + " with more");
  Serial.println(one);

  one = String(13);
  Strial.println(one);

  one = String(analogRead(A0), DEC);
  Serial.println(one);

  one = String(45, HEX);
  Serial.println(one);

  one = String(255, BIN);
  Serial.println(one);

  one = String(millis(), DEC);
  Serial.println(one);

  one = String(5.698, 3);
  Serial.println(one);

  one = String(5.698, 2);
  Serial.println(one);

  // do nothing while true
  while (true);
}
