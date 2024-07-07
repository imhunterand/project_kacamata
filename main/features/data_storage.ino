#include <SPI.h>
#include <SD.h>

#define SD_CS_PIN 4

void initStorage() {
  if (!SD.begin(SD_CS_PIN)) {
    Serial.println("SD Card initialization failed!");
    return;
  }
  Serial.println("SD Card initialized.");
}

void saveData() {
  File dataFile = SD.open("datalog.txt", FILE_WRITE);
  if (dataFile) {
    dataFile.println("Data point");
    dataFile.close();
  }
}
