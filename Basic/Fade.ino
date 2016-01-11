int led = 9;
int brightness = 0;
int fadeAmount = 5;

void setup() {
  pinMode(let, OUTPUT);
}

void loop() {
  analogWrite(led, brightness);
  brightness = brightness + fadeAmount;

  if (brightness == 0 || brightness == 255) {
    fadeAmmount = -fadeAmount;
  }

  delay(30);
}
