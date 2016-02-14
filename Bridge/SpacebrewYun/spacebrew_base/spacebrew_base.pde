import spacebrew.*;

String server="sandbox.spacebrew.cc";
String name="givemeabettername";
String description ="This is an example client which .... It also listens to...";

Spacebrew spacebrewConnection;

void setup() {
  size(600, 400);
  spacebrewConnection = new Spacebrew(this);
  // connect
  spacebrewConnection.connect("ws://" + server + ":9000", name, description);
}

void draw() {
}

void onRangeMessage(String name, int value) {
  println("got int message " + name + " : " + value);
}

void onBooleanMessage(String name, boolean value) {
  println("got boolean message " + name + " : " + value);
}

