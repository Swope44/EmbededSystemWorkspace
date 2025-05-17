// ESP32 Example: I2C Scan
// Board: ESP32 Dev Module
// Wiring: SDA to GPIO21, SCL to GPIO22, both with pull-up resistors
#include <Wire.h>

void setup()
{
    Wire.begin(21, 22);
    Serial.begin(115200);
    while (!Serial)
        ;
    Serial.println("I2C Scanner");
    for (byte address = 1; address < 127; ++address)
    {
        Wire.beginTransmission(address);
        if (Wire.endTransmission() == 0)
        {
            Serial.print("Found I2C device at 0x");
            Serial.println(address, HEX);
        }
    }
}
void loop() {}
