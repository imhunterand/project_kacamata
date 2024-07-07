#include <TinyGPS++.h>

TinyGPSPlus gps;
HardwareSerial Serial1(1);

void initGPS() {
  Serial1.begin(9600, SERIAL_8N1, 16, 17); // RX, TX
}

void updateGPS() {
  while (Serial1.available() > 0) {
    gps.encode(Serial1.read());
  }
  if (gps.location.isUpdated()) {
    Serial.print("Latitude: ");
    Serial.println(gps.location.lat(), 6);
    Serial.print("Longitude: ");
    Serial.println(gps.location.lng(), 6);
  }
}
