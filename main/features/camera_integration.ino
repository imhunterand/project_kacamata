#include <ArduCAM.h>
#include <Wire.h>
#include <SPI.h>
#include "memorysaver.h"

ArduCAM myCAM(OV2640, CS_PIN);

void initCamera() {
  Wire.begin();
  SPI.begin();
  myCAM.write_reg(ARDUCHIP_MODE, 0x00);
}

void captureImage() {
  myCAM.flush_fifo();
  myCAM.clear_fifo_flag();
  myCAM.start_capture();
  while (!myCAM.get_bit(ARDUCHIP_TRIG, CAP_DONE_MASK));
  uint8_t temp = myCAM.read_fifo();
  // Save or process the image data
}
