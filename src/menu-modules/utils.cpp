#include "utils.h"
#include <HardwareSerial.h>


// 
void Utils::print(char* content) {

    Serial.print(content);
};

// 
void Utils::println(char* content) {

    Serial.println(content);
};

// Display no lcd
void Utils::display(char* content) {
    this->print(content);

};
