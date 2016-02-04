#include <FileIO.h>

void setup() {
  Bridge.begin();
  Serial.begin(9600);
  whle (!Serial);
  Serial.println("File Write Sample");
  FileSystem.begin();
  uploadScript();
}
