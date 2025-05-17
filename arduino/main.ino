// Arduino Example: Blink an LED using GPIO
// Board: Arduino Uno
// Wiring: Connect an LED (with resistor) to pin 13 and GND

void setup()
{
    pinMode(13, OUTPUT);
}

void loop()
{
    digitalWrite(13, HIGH);
    delay(500);
    digitalWrite(13, LOW);
    delay(500);
}
