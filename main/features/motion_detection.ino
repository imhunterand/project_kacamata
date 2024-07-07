#include <Wire.h>
#include <Adafruit_MLX90640.h>
#include <Adafruit_SSD1306.h>

extern Adafruit_SSD1306 display;

void detectMotion() {
  // Pseudocode for motion detection
  if (/*motion detected*/) {
    display.setCursor(0,10);
    display.println("Motion Detected!");
    display.display();
  }
}
