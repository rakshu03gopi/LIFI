/*
 * Li-Fi Brake Alert System
 * TRANSMITTER
 * STM32F103C8T6
 */

#define LED_PIN A5
#define SWITCH_PIN A0

void setup()
{
  pinMode(LED_PIN, OUTPUT);
  pinMode(SWITCH_PIN, INPUT_PULLDOWN);
}

void loop()
{
  int buttonState = digitalRead(SWITCH_PIN);

  if (buttonState == HIGH)
  {
    digitalWrite(LED_PIN, HIGH);
  }
  else
  {
    digitalWrite(LED_PIN, LOW);
  }
}