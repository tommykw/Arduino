#include <Bridge.h>
#include <YunServer.h>
#include <YunClient.h>

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);
  Bridge.begin();
  digitalWrite(13, HIGH);
  server.listenOnLocalhost();
  server.begin();
}

void loop() {
  YunClient clinet = server.accept();

  if (client) {
    process(client);
    client.stop();
  }

  delay(50);
}
