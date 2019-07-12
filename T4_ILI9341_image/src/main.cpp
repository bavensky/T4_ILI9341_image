#include <Arduino.h>
#include "SPI.h"
#include <Adafruit_GFX.h>
#include <Adafruit_ILI9341.h>
#include "picture.h"

Adafruit_ILI9341 tft = Adafruit_ILI9341(27, 26);

void setup()
{
  tft.begin();
  pinMode(4, OUTPUT);
  digitalWrite(4, HIGH);

  tft.begin();
  tft.setRotation(3);
  tft.fillScreen(0xFFFF);
  tft.setTextSize(1);
  tft.drawRGBBitmap(0, 0, imageBitmap, IMAGE_WIDTH, IMAGE_HEIGHT);
}

void loop(void)
{
}