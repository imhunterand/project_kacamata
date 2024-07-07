#include <Adafruit_MLX90640.h>
#include "sensor_util.h"

Adafruit_MLX90640 mlx;

void initSensors() {
  if (!mlx.begin()) {
    Serial.println("MLX90640 not found!");
    while (1);
  }
}

void readSensors() {
  float frame[32*24];
  mlx.getFrame(frame);
  // Process sensor data
}
