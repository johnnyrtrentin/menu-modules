#include "menu.h"

Menu menu;

void setup() {
  Serial.begin(9600);
  Serial.println("Press any key...");
  Serial.println();
  
}

void loop() {
  menu.displayMenuOptions();
}
