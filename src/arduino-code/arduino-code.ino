#include <SPI.h> // For SPI communication for OLED
#include <Wire.h> // For i2C communication for OLED


// OLED
#include <Adafruit_GFX.h> // OLED library
#include <Adafruit_SSD1306.h> // OLED library
#define SCREEN_WIDTH 128 // OLED width
#define SCREEN_HEIGHT 64 // OLED height
#define OLED_MOSI   9
#define OLED_CLK   10
#define OLED_DC    11
#define OLED_CS    12
#define OLED_RESET 13

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT,
  OLED_MOSI, OLED_CLK, OLED_DC, OLED_RESET, OLED_CS);


// DHT
#include <DHT.h> // DHT library
#define DHTPIN 7     // DHT pin number
#define DHTTYPE DHT11   // DHT 22  (AM2302)
DHT dht(DHTPIN, DHTTYPE); // Initialize DHT sensor for normal 16mhz Arduino

#define MOISURESEN A0 // Moisure sensor pin number
#define RAINDROP A1 // Rain drop sensor pin number


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
