String inString = "";

void setup() {
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect
  }

  Serial.println();
}

void loop() {
  while (Serial.available() > 0) {
    int inChar = Serial.read();
    if (isDigit(inChar)) {
      inString += (char)inChar;
    }

    if (inChar == '\n') {
      Serial.print('Value:');
      Serial.println(inString.toInt());
      Serial.print("String:");
      Serial.println(inString);
      // clear the string for new input
      inString = "";
    }
  }
}
