#include <Adafruit_MLX90640.h>

extern Adafruit_MLX90640 mlx;
extern Adafruit_SSD1306 display;

float frame[32*24];

void displayThermalMap() {
  mlx.getFrame(frame);
  for (uint8_t h=0; h<24; h++) {
    for (uint8_t w=0; w<32; w++) {
      float temp = frame[h*32 + w];
      if (temp > 30.0) {
        display.drawPixel(w, h, SSD1306_WHITE);
      }
    }
  }
  display.display();
}
