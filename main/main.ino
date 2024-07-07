#include "display_util.h"
#include "sensor_util.h"
#include "storage_util.h"

void setup() {
  initDisplay();
  initSensors();
  initStorage();
  Serial.begin(115200);
}

void loop() {
  readSensors();
  updateDisplay();
  saveData();
  delay(500);
}
