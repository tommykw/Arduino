#include <Process.h>

void setup() {
  Bridge.begin();
  Serial.begin(9600);
  while (!Serial);
}

void loop() {
  Process p;
  while (p.available()) {
    int result = p.parseInt();
    int signal = map(result, 0, 100, 0, 255);
    analogWrite(9, signal);
    Serial.println(result);
  }
  delay(5000);
}
