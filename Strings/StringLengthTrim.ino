void setup() {
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect
  }

  Serial.println();
}

void loop() {
  String one = "    Hello     ";
  Serial.println(one);
  Serial.println(one.length());

  one.trim();
  Serial.println(one);
  Serial.println(one.length());

  // do nothing while true
  while (true);
}
