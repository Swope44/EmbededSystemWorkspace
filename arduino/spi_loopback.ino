// Arduino Example: SPI Loopback
// Board: Arduino Uno
// Wiring: Connect MOSI to MISO (pins 11 and 12)
#include <SPI.h>

void setup()
{
    Serial.begin(9600);
    SPI.begin();
    pinMode(MISO, INPUT);
    pinMode(MOSI, OUTPUT);
    pinMode(SCK, OUTPUT);
    byte data = 0x55;
    byte result = SPI.transfer(data);
    Serial.print("Sent: 0x");
    Serial.print(data, HEX);
    Serial.print(", Received: 0x");
    Serial.println(result, HEX);
}
void loop() {}
