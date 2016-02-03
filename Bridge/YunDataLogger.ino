#include <FileIO.h>

void setup() {
  Bridge.begin();
  Serial.begin(9600);
  FileSystem.begin();

  while (!Serial);
  Serial.println("Filesystem dataLogger\n");
}

void loop() {
  String dataString;
  dataString += getTimeStamp();
  dataString += " = ";

  for (int analogPin = 0; analogPin < 3; analogPin++) {
    int sensor = analogRead(analogPin);
    dataString += String(sensor);
    if (analogPin < 2) {
      dataString += ".";
    }
  }

  File dataFile = FileSystem.open("/mnt/sd/datalog.txt", FILE_APPEND);

  if (dataFile) {
    dataFile.println(dataString);
    dataFile.close();
    Serial.println(dataString);
  } else {
    Serial.println("error opening datalog.txt");
  }
  delay(15000);
}

String getTimeStamp() {
  String result;
  Process time;
  time.begin("data");
  time.addParameter("+%D-%T");
  time.run();

  while (time.available() > 0) {
    char c = time.read();
    if (c != '\n') {
      result += c;
    }
  }

  return result;
}
