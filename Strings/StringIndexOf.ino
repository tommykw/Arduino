void setup() {
  Serial.begin(9600);
  while (!Serial) {
    // wait for serial port to connect
  }

  Serial.println();
}

void loop() {
  String one = "<HTML><HEAD><BODY>";
  int firstClosingBracket = one.indexOf(">");
  Serial.println(one + " is " + firstClosingBracket);

  one = "<HTML><HEAD><BODY>";
  int secondOpeningBracket = firstClosingBracket + 1;
  int secondClosingBracket = one.indexOf(">", secondOpeningBracket);
  Serial.println(one + " is " + secondClosingBracket);

  one = "<HTML><HEAD><BODY>";
  int bodyTag = one.indexOf("<BODY>");
  Serial.println(one + " is " + bodyTag);

  one = "<UL><LI>item<LI>item<LI>item</UL>";
  int firstListItem = one.indexOf("<LI>");
  int secondListItem = one.indexOf("<LI>", firstListItem + 1);
  Serial.println(stringOne + " is " + secondListItem);
}
