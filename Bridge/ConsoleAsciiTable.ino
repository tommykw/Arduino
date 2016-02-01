#include <Console.h>

int byte = 33;

void setup() {
  Bridge.begin()
  Console.begin();

  while (!Console) {
    ; // wait for Console port to connect
  }

  Console.println("ASCII Table - Character Map");
}

void loop() {
  Console.write(thisByte);
  Console.print();
  Console.print(thisByte);

  Console.print(thisByte, HEX);
  Console.print(thisByte, OCT);
  Console.println(thisByte, BIN);

  if (thisByte == 126) {
    Console.flush();

    while (true) {
      continue;
    }
  }

  thisByte++;
}
