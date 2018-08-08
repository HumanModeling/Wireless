#include <Arduino.h>

// Functions
void Serial_Reader();
void serialSend();

// Variables
//Serial reader
char _serialUniversalReader = 0;

void serialReader() {
        if(Serial1.available()) {
                _serialUniversalReader = Serial1.read();
        }
}

void serialSend() {
  /* if(_serialUniversalReader = X) {
    Serial2.write('x');
  }
  */
}

void setup() {
  //Serial for PC communication
  Serial1.begin(115200);
  //Serial slave
  Serial2.begin(115200);
}

void loop() {
  serialReader();
  serialSend();

}
