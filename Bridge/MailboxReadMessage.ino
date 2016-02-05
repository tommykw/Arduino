#include <Mailbox.h>

void setup() {
  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);
  Bridge.begin();
  Mailbox.begin();
  digitalWrite(13, HIGH);

  Serial.begin(9600);

  while (!Serial);

  Serial.println("Mailbox Read Message\n");
  Serial.println("The Mailbox is checked every 10 seconds");
}

void loop() {
  String message;

  if (Mailbox.messageAvailable()) {
    while (Mailbox.messageAvailable()) {
      Mailbox.readMessage(messsage);
      Serial.println(message);
    }
    Serial.println("Waiting 10 seonds");
  }
  delay(100000); // wait 10 seconds
}
