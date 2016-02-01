#include <Console.h>

const int ledPin = 13;
char incomingByte;

void setup() {
  Bridge.begin();
  Console.begin();

  while (!Console);

  Console.println("type H or L to turn pin 13 on or off");
  pinMode(ledPin, OUTPUT);
}

void loop() {
  if (Console.available() > 0) {
    incomingByte = Console.read();
    Console.println(incomingByte);

    if (incomingByte == 'H') {
      digitalWrite(ledPin, HIGH);
    }
    if (incomingByte == 'L') {
      digitalWrite(ledPin, LOW);
    }
  }
}
