#include "Keyboard.h"

const int bottonPin = 4;
int previousButtonState = HIGH;
int counter = 0;

void setup() {
  pinMode(buttonPin, INPUT);
  Keyboard.begin();
}

void loop() {
  int buttonState = digitalRead(buttonPin);
  if ((buttonState != previousButtonState)
    && (buttonState == HIGH)) {

    counter++;
    Keyboard.print("Yout pressed the button ");
    Keyboard.print(counter);
    Keyboard.println(" times. ");
  }
  previousButtonState = buttonState;
}
