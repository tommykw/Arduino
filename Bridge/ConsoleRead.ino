#include <Console.h>

String name;

void setup() {
  Bridge.begin();
  Console.begin();

  while (!Console);

  Console.println('Hi');
}

void loop() {
  if (Console.available() > 0) {
    char c = Console.read();
    if (c == '\n') {
      Console.print("Hi ");
      Console.print(name);
      Console.println("! Nice to meet you!");
      Console.println();
      Console.println("Hi, what's your name?");
      name = "";
    } else {
      name += c;
    }
  }
}
