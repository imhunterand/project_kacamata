#include <SoftwareSerial.h>

SoftwareSerial BTSerial(10, 11); // RX, TX

void initBluetooth() {
  BTSerial.begin(9600);
  Serial.println("Bluetooth Initialized");
}

void readBluetooth() {
  if (BTSerial.available()) {
    char data = BTSerial.read();
    Serial.print("Received: ");
    Serial.println(data);
  }
}
