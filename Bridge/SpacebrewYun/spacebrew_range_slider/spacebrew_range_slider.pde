import spacebrew.*;

/*
  This example is of a silider that sends a value in the range of 0 to 1023.
  Click and drag the mouse to move the slider.
*/

String server = "sandbox.spacebrew.cc";
String name = "processingRangeSlider";
String description = "This is an example client";

import processing.serial.*;

Spacebrew c;

// Keep track of our current place in the range
int currentDistance = 512;

void setup() {
  size(1044, 200);
  background(0);

  c = new Spacebrew(this);

  // add each thing you publish to
  c.addPublish("currentDistance", currentDistance);

  // add each thing you subscribe to
  c.addSubscribe("currentDistance", "range");

  // connect
  c.connect("ws://" + server + ":9000", name, description);
}

void draw() {
  background(0);

  // Display the current value of currentDistance
  fill(255);
  text("Current Distance: " + currentDistance, 30, 50);

  // White box containing slider
  fill(255);
  rect(0, height / 2, width, height / 2);

  // Line the slider moves on
  fill(15);
  line(0, height * 3 / 4, width, height * 3 / 4);

  // Slider
  fill(255, 0, 0);
  rect(currentDistance, (height / 2) + 5, 20, (height / 2) - 10);
}

