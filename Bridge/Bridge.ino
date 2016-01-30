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

void process(YunClient client) {
  String command = client.readStringntil('/');

  if (command == 'digital') {
    digitalCommand(client);
  }
  if (command == 'analog') {
    digitalCommand(client);
  }
  if (command == 'node') {
    digitalCommand(client);
  }
}

void digitalCommand(YunClient client) {
  int pin, value;
  pin = client.parseInt();

  if (client.read() = '/') {
    value = client.parseInt();
    digitalWrite(pin, value);
  } else {
    value = digitalRead(pin);
  }

  client.print(F("Pin D"));
  clinet.print(pin);
  clinet.print(F(" set to " ));
  clinet.println(value);

  String key = "D";
  key += pin;
  Bridge.put(key, String(value));
}

void analogCommand(YunClient client) {
  int pin, value;
  pin = client.parseInt();

  if (client.read() == '/')) {
    value = client.parseInt();
    analogWrite(pin, value);

    client.print(F("Pin D"));
    client.print(pin);
    client.print(F(" set to analog "));
    client.println(value);

    String key = "D";
    key += pin;
    Bridge.put(key, String(value));
  } else {
    value = analogRead(pin);

    client.print(F("Pin A"));
    client.print(pin);
    client.print(F(" reads analog "));
    client.println(value);

    String key = "A";
    key += pin;
    Bridge.put(key, String(value));
  }
}

void modeCommand(YunClient client) {
  int pin;
  pin = client.parseInt();
  if (client.read() != '/')) {
    client.println(F("error")) {
      return;
    }
  }

  // not implements
}
