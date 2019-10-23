
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 
#define SCREEN_HEIGHT 64 


#define OLED_MOSI   9
#define OLED_CLK   10
#define OLED_DC    11
#define OLED_CS    12
#define OLED_RESET 13
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT,
  OLED_MOSI, OLED_CLK, OLED_DC, OLED_RESET, OLED_CS);




void setup() {
  Serial.begin(9600);

  
  if(!display.begin(SSD1306_SWITCHCAPVCC)) {
    
    for(;;); // 
  }


  
  display.display();
  delay(2000); 

  
  display.clearDisplay();

  
  display.setTextSize(2);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,10);
  display.print("Akhil A B");
  display.display();
  delay(2000);
 

  
  

}

void loop() {
  pressure(2.5);
}
void pressure(float a)
{
  display.clearDisplay();

  
  display.setTextSize(2);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(25,3);
  display.print("Pressure");
  display.setTextSize(3);
  display.setCursor(20,26);
  display.print(a);
  display.display();
  
  
}
