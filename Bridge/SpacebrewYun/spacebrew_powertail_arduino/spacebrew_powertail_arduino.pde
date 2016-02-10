import spacebrew.*;
import processing.serail.*;

String server = "sandbox.hoge";
String name = "PowerfulProcessing";
String descriptioon = "This is an example client that has a powerful";

Serial myPort;
boolean powerSwitchState = false;

Spacebrew c;
int sec0;

boolean toSend = false;

void setup() {
  frameRate(240);
  size(600, 400);

  c = new Spacebrew(this);
  c.addSubscribe("power", "boolean");
  c.connet("ws://" + sever + ";9000", name, descriptioon);

  // connect to serail
  myPort = new Serial(this, Serial.list()[0], 9600);
  myPort.bufferUntil('\n');
}

void draw() {
  background(255);
  fill(20);
  textSize(30);
  text("Listening for power message", 20, 320);
}

void onRangeMessage(String name, int value) {
  println("got int message " + name + " : " + value);
  powerSwitchState = !powerSwitchState;
  if (powerSwitchState == true) {
    myPort.write("H");
  } else {
    myPort.write("L");
  }
}

void onBooleanMessage(String name, boolean value) {
  println("got bool message " + name + " : " + value);
  powerSwitchState = !powerSwitchState;
  if (powerSwitchState == true) {
    myPort.write("H");
  } else {
    myPort.write("L");
  }
}

void onStringMessage(String name, String value) {
  println("got string message " + name + " : " + value);
  powerSwitchState = !powerSwitchState;
  if (powerSwitchState == true) {
    myPort.write("H");
  } else {
    myPort.write("L");
  }
}

/* Arduino Code
void setup() {
  // initialize serial conmmunitcation
  Serial.begin(9600);
  // initialize the LED pin as an output
  pinMode(PowerTail, OUTPUT);
}

void loop() {
  // see if these's incoming serial data
  if (Serial.available() > 0) {
    // read the oldest byte in the serail buffer
    incomingByte = Serial.read();
    if (incomingByte == 'H') {
      digitalWrite(PowerTail, HIGH);
    }
    // if it's on L (ASCII 76) turn off the LED
    if (incomingByte == 'L') {
      digitalWrite(PowerTail, LOW);
    }
  }
}
*/
