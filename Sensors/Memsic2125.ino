const int xPin = 2;
const int yPin = 3;

void setup() {
  Serial.begin(9600);
  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);
}

void loop() {
  int pluseX, pluseY;
  int accelerationX, accelerationY;

  pulseX = pulseIn(xPin, HIGH);
  pluseY = pulseIn(yPIn, HIGH);

  accelerationX = ((pulseX / 10) - 500) * 8;
  accelerationY = ((pulseY / 10) - 500) * 8;

  Serial.print(accelerationX);
  Serial.print("\t");
  Serial.print(accelerationY);
  Serial.println();
  delay(100);
}
