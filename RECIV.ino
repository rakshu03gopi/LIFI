#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

#define PHOTO_PIN A1

const int THRESHOLD = 420;

void setup()
{
  Serial.begin(9600);

  pinMode(PHOTO_PIN, INPUT);

  Wire.begin();

  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C))
  {
    while (1);
  }

  display.clearDisplay();
  display.display();
}

void loop()
{
  int sensorValue = analogRead(PHOTO_PIN);

  Serial.print("ADC = ");
  Serial.println(sensorValue);

  display.clearDisplay();

  display.setTextSize(2);
  display.setTextColor(WHITE);

  display.setCursor(0,0);
  display.print("ADC:");

  display.print(sensorValue);

  display.setCursor(0,35);

  if(sensorValue < THRESHOLD)
  {
      display.print("Brake");
      display.setCursor(0,55);
      display.print("FAIL");
  }
  else
  {
      display.print("Brake");
      display.setCursor(0,55);
      display.print("OK");
  }

  display.display();

  delay(200);
}