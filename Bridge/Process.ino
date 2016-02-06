#include <Process.h>

void setup() {
  Bridge.begin();
  Serial.begin(9600);
  while (!Serial);

  runCurl();
  runCpuInfo();
}

void loop() {
  // do nothing here
}

void runCurl() {
  Process p;
  p.begin("curl");
  p.addParameter("http://arduino.cc/asciilogo.txt");
  p.run();

  while (p.available() > 0) {
    char c = p.read();
    Serial.print(c);
  }

  Serial.flush();
}

void runCpuInfo() {
  Process p;
  p.begin("cat");
  p.addParameter("/proc/cpuinfo");
  p.run();

  while (p.available() > 0) {
    char c = p.read();
    Serial.print(c);
  }
  Serial.flush();
}
