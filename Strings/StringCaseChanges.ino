void setup() {
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect
  }

  Serial.println();
}

void loop() {
  String one = "<html><head><body>";
  Serial.println(one);
  one.toUpperCase();
  Serial.println(one);

  String two = "</BODY></HTML>";
  Serial.println(two);
  two.toLowerCase();
  Serial.println(two);

  while (true);
}
