//LIBRARYS
#include <Keypad.h>
#include <LiquidCrystal.h>

//VARIALBES
const byte numberLines = 4;
const byte numberColuns = 4;

byte pinLines[numberLines] = {3,4,5,6};
byte pinColuns[numberColuns] = {8,9,10,11};

char matrixKeyboard[numberLines][numberColuns] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

Keypad keyBoard = Keypad(makeKeymap(matrixKeyboard), pinLines, pinColuns, numberLines, numberColuns);

void setup() {
  Serial.begin(9600);
  Serial.println("Press any key...");
  Serial.println();
}

void loop() {
  printsPressedKeys();
}

void printsPressedKeys {
  char keyPressed = keyBoard.getKey();

  if (keyPressed) {
    Serial.print("Key pressed: ");
    Serial.println(keyPressed);
  }
}