void setup() {
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect
  }

  Serial.println("send");
  Serial.println();
}

void loop() {
  if (Serial.available() > 0) {
    int thisChar = Serial.read();
    Serial.print("You send me:");
    Serial.write(thisChar);
    Serial.print("ASCII Value");
    Serial.println(thisChar);

    if (isAlphaNumeric(this)) {
      Serial.println("its alphanumeric");
    }
    if (isAlpha(thisChar)) {
      Serial.println("its alphabetic");
    }
    if (isAscii(thisChar)) {
      Serial.println("its ascii");
    }
    if (isWhitespace(thisChar)) {
      Serial.println("its whitespace");
    }
    if (isControl(thisChar)) {
      Serial.println("its control");
    }
    if (isDigit(thisChar)) {
      Serial.println("its a numeric digit");
    }
    if (isGraph(thisChar)) {
      Serial.println("its a printable character that's not whitespace");
    }
    if (isLowerCase(thisChar)) {
      Serial.println("its a lower case");
    }
    if (isPrintable(thisChar)) {
      Serial.println("its a printable");
    }
    if (isPunct(thisChar)) {
      Serial.println("its a punct"):
    }
    if (isSpace(thisChar)) {
      Serial.println("its a space");
    }
    if (isUpperCase(thisChar)) {
      Serial.println("its a upper case");
    }
    if (isHexadecimalDigit(thisChar)) {
      Serial.println("it's a valid hexadecimaldigit");
    }

    Serial.println();
    Serial.println("Give me another byte");
    Serial.println();
  }
}
