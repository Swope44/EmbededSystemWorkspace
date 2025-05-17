# Raspberry Pi Example: UART Echo
# Board: Raspberry Pi
# Wiring: Connect GPIO14 (TX) to GPIO15 (RX) with jumper wires
import serial

ser = serial.Serial('/dev/serial0', 9600, timeout=1)
ser.flush()

try:
    while True:
        if ser.in_waiting > 0:
            line = ser.readline().decode('utf-8').rstrip()
            print(f"Received: {line}")
            ser.write((line + '\n').encode('utf-8'))
except KeyboardInterrupt:
    ser.close()
