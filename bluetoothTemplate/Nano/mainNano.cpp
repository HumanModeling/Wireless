#include <Arduino.h>

//Declare the functions
void serialUniversalRead();//Read the serial port
void serialEventUno();//Events of the player one

void setup() {
  Serial.begin(115200);
}

void loop {
  Serial_Universal_Read();
}

void serialUniversalRead() {
  //Read Serial
  if(Serial.available()) {
          StateSerial = Serial.read();
          Serial.print(StateSerial1);
          // Here activate the PGM or something

  }
}
