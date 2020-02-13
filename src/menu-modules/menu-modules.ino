#include "../../include/menu.h"

void setup() {
  Serial.begin(9600);
  Serial.println("Press any key...");
  Serial.println();
  Menu menu;
}

void loop() {
  Menu.displayMenuOption();
}
