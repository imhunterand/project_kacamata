#include <EEPROM.h>

int sensitivity = 30; // Default sensitivity

void setSensitivity(int newSensitivity) {
  sensitivity = newSensitivity;
  EEPROM.write(0, sensitivity);
}

void getSensitivity() {
  sensitivity = EEPROM.read(0);
}
