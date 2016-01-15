void setup() {
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect
  }

  Serial.println("ASCII Table");
}

int thisByte = 33;

void loop() {
  Serial.write(thisByte);
  Serial.print(" dec ");
  Serial.print(thisByte);
  Serial.print(" hex ");
  Serial.print(thisByte, HEX);
  Serial.print(" bin ");
  Serial.println(thisByte, BIN);

  if (thisByte == 126) {
    while (true) {
      continue;
    }
  }

  thisByte++;
}

