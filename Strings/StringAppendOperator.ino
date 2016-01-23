String one, two;

void setup() {
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect
  }

  one = String("Sensor");
  two = String("value");
  Serial.println("\n\nAppending to a string");
  Serial.println();
}

void loop() {
  Serial.println(one);
  one += two;
  Serial.println(one);

  one += " for input ";
  Serial.println(one);

  one += "A";
  Serial.println(one);

  one += 0;
  Serial.println(one);

  one += ": ";
  Serial.println(one);

  one += analogRead(A0);
  Serial.println(one);

  Serial.println("\n\changing the Strings");
  one = "A long integer: ";
  two = "The millis(): ";

  one += 123456789;
  Serial.println(one);

  two.concat(millis());
  Serial.println(two);

  // do nothing while true
  while (true);
}


