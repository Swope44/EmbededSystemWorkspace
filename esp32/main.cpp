// ESP32 Example: Blink an LED using GPIO
// Board: ESP32 Dev Module
// Wiring: Connect an LED (with resistor) to GPIO2 and GND

#include <Arduino.h>

#define LED_PIN 2

void setup()
{
    pinMode(LED_PIN, OUTPUT);
}

void loop()
{
    digitalWrite(LED_PIN, HIGH);
    delay(500);
    digitalWrite(LED_PIN, LOW);
    delay(500);
}
