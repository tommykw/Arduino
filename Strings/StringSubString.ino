void setup() {
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect
  }

  Serial.println();
}

void loop() {
  String one = "Content-Type: text/html";
  Serial.println(one);

  if (one.substring(19) == "html") {
    Serial.println("It's an html file");
  }

  if (one.substring(14, 18) == "text") {
    Serial.println("It's a text-based file");
  }

  // do nothing while true
  while (true);
}
