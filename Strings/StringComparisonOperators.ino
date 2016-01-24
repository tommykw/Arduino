String one, two;

void setup() {
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect
  }

  one = String("this");
  two = String("that");
  Serial.println();
}

void loop() {
  if (one == "this") {
    Serial.println("one == this");
  }

  if (one != two) {
    Serial.println("one != two");
  }

  one = "This";
  two = "this";
  if (one != two) {
    Serial.println(one + " =! " + two);
  }

  if (one.equals(two)) {
    Serial.println(one + " equals " + two);
  } else {
    Serial.println(one + " does not equal " + two);
  }

  if (one.equalsIgnoreCase(two)) {
    Serial.println(one + " equals (ignoring case) " + two);
  } else {
    Serial.println(one + " dose not equal (ignoring case) " + two);
  }

  one = "1";
  int numberOne = 1;
  if (one.toINt() == numberOne) {
    Serial.println(one + " = " + numberOne);
  }

  one = "2";
  two = "1";
  if (one >= two) {
    Serial.println(one + " >= " + two);
  }

  one = String("Brown");
  if (one < "Charles") {
    Serial.println(one + " < Charles");
  }

  if (one > "Adams") {
    Serial.println(one + " > Adams");
  }

  if (one <= "Browne") {
    Serial.println(one + " <= Browne");
  }

  if (one >= "Brow") {
    Serial.println(one + " >= Brow");
  }

  one = "Cucumber";
  two = "Cucuracha";
  if (one.compareTo(tow) < 0) {
    Serial.println(one + " comes before " + two);
  } else {
    Serial.println(one + " comes after " + two);
  }

  delay(10000);

  while (true) {
    one = "Sensor: ";
    two = "Sensor" ";

    one += analogRead(A0);
    two += analogRead(A5);

    if (one.compareTo(two) < 0) {
      Serial.println(one + " comes before " + two);
    } else {
      Serial.println(one + " comes after " + two);
    }
  }
}
