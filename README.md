# Embedded System Development Workspace

This workspace is set up for developing projects on ESP32, Raspberry Pi, and Arduino platforms, with a focus on portability and hardware interfacing (GPIO, I2C, SPI, UART, PWM, etc.).

---

## File Tree & Purpose
```
/esp32/                # ESP32 projects (C++)
  ├── main.cpp          # GPIO blink example
  └── i2c_scan.cpp      # I2C bus scan example

/arduino/              # Arduino projects (C++)
  ├── main.ino          # GPIO blink example
  └── spi_loopback.ino  # SPI loopback example

/raspberrypi/          # Raspberry Pi projects (Python)
  ├── main.py          # GPIO blink example
  └── uart_echo.py      # UART echo example
```

## Recommended Extensions
- PlatformIO IDE (for ESP32/Arduino)
- Arduino (by Microsoft)
- C/C++ (by Microsoft)
- Python (by Microsoft)

## Getting Started

### ESP32
1. Open the `/esp32/` folder in VS Code.
2. Use PlatformIO or Arduino extension to build and upload (`main.cpp` or `i2c_scan.cpp`).
3. Connect your ESP32 via USB. Select the correct board and port in PlatformIO/Arduino.
4. For I2C: Connect SDA to GPIO21, SCL to GPIO22 (with pull-ups).

### Arduino
1. Open the `/arduino/` folder in VS Code.
2. Use PlatformIO or Arduino extension to build and upload (`main.ino` or `spi_loopback.ino`).
3. Connect your Arduino via USB. Select the correct board and port.
4. For SPI: Connect MOSI to MISO (pins 11 and 12).

### Raspberry Pi
1. Open the `/raspberrypi/` folder in VS Code.
2. For GPIO: Run `main.py` directly on the Pi (`python3 main.py`).
3. For UART: Run `uart_echo.py` (`python3 uart_echo.py`). Connect TX (GPIO14) to RX (GPIO15).
4. Use SSH or VS Code Remote to edit/run code on the Pi.

# Raspberry Pi Python Virtual Environment Setup

To use the Raspberry Pi examples with isolated dependencies:

1. Create and activate a virtual environment (already set up):
   ```sh
   python3 -m venv .venv
   source .venv/bin/activate
   ```
2. Install dependencies:
   ```sh
   pip install -r raspberrypi/requirements.txt
   ```
3. Run the example (on Raspberry Pi hardware):
   ```sh
   python raspberrypi/main.py
   ```

Note: RPi.GPIO only works on Raspberry Pi hardware.

To update pip (optional):
```sh
python -m pip install --upgrade pip
```

## Cross-compilation & Flashing
- For ESP32/Arduino: Use PlatformIO/Arduino to cross-compile and flash firmware.
- For Raspberry Pi: Develop locally, then deploy via SSH or use VS Code Remote.

## Hardware Interfacing
- All examples include comments for wiring and hardware setup.
- Modify pin numbers as needed for your board.

Feel free to add more examples or request additional templates (I2C, SPI, UART, PWM, etc.).


---

## Recommended Extensions

- PlatformIO IDE (for ESP32/Arduino)
- Arduino (by Microsoft)
- C/C++ (by Microsoft)
- Python (by Microsoft)

---

## Getting Started

### ESP32
1. Open the `/esp32/` folder in VS Code.
2. Use PlatformIO or Arduino extension to build and upload (`main.cpp` or `i2c_scan.cpp`).
3. Connect your ESP32 via USB. Select the correct board and port in PlatformIO/Arduino.
4. **Wiring:**  
   - For I2C: Connect SDA to GPIO21, SCL to GPIO22 (with pull-up resistors).

### Arduino
1. Open the `/arduino/` folder in VS Code.
2. Use PlatformIO or Arduino extension to build and upload (`main.ino` or `spi_loopback.ino`).
3. Connect your Arduino via USB. Select the correct board and port.
4. **Wiring:**  
   - For SPI: Connect MOSI to MISO (pins 11 and 12).

### Raspberry Pi
1. Open the `/raspberrypi/` folder in VS Code.
2. For GPIO: Run `main.py` directly on the Pi (`python3 main.py`).
3. For UART: Run `uart_echo.py` (`python3 uart_echo.py`). Connect TX (GPIO14) to RX (GPIO15).
4. Use SSH or VS Code Remote to edit/run code on the Pi.

---

## Python Virtual Environment Setup (Raspberry Pi)

To use the Raspberry Pi examples with isolated dependencies:

1. Create and activate a virtual environment:
   ```sh
   python3 -m venv .venv
   source .venv/bin/activate      # On Linux/macOS
   .venv\Scripts\activate         # On Windows