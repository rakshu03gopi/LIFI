# LiFi-Brake-Alert-System

🚗 Li-Fi Based Brake Failure Detection System

An STM32-based Li-Fi brake failure detection system that uses optical communication to detect brake status in real time. The transmitter sends light signals using LEDs, while the receiver detects the light using a photodiode. The STM32 processes the received signal and displays the brake condition ("Brake OK" or "Brake FAIL") on an OLED display.

---

## 🚀 Features

- Li-Fi based optical communication using LEDs
- Real-time brake status detection
- Photodiode-based light sensing
- OLED display for live ADC values and brake status
- STM32 ADC-based signal processing
- Short-range wireless optical communication
- Low-cost and energy-efficient design
- Easy to implement for automotive safety applications

---

## 🛠️ Hardware Used

- STM32F103C8T6 (Blue Pill)
- SSD1306 0.96" OLED Display (I²C)
- IR Photodiode
- White/Red LEDs
- Push Button
- 220Ω Resistors
- 10kΩ Resistor
- Breadboard
- Jumper Wires
- ST-Link Programmer
- USB Cable

---

## ⚙️ System Overview

### Transmitter Unit

- Push button simulates brake activation.
- STM32 reads the button input.
- LEDs turn ON when the button is pressed.
- LED light acts as the Li-Fi transmission signal.
- Different LED configurations can be tested to compare sensing distance.

### Receiver Unit

- IR photodiode detects incoming light.
- STM32 continuously reads the photodiode voltage using ADC.
- ADC values are compared with a calibrated threshold.
- OLED displays:
  - ADC Value
  - Brake OK
  - Brake FAIL
- System responds in real time to changes in light intensity.

---

## 📡 Working Principle

When the brake button is pressed:

- LEDs transmit light.
- The photodiode detects the incoming light.
- ADC value decreases.
- If ADC value falls below the threshold, the system displays **Brake FAIL**.

When no light is detected:

- ADC remains above the threshold.
- OLED displays **Brake OK**.

---

## 💻 Technologies

- STM32F103C8T6
- Arduino IDE
- Embedded C++
- Li-Fi Communication
- Analog-to-Digital Conversion (ADC)
- I²C Communication
- SSD1306 OLED Display
- Optical Sensing
- Embedded Systems

---

## 📊 Experimental Results

| LED Configuration | ADC Value | Detection Distance |
|-------------------|----------:|-------------------:|
| 2 Red LEDs | 415 | 10 cm |
| 1 White LED | 412 | 15 cm |
| 2 White LEDs | 409 | 17 cm |

The system demonstrated reliable light detection up to **17 cm**, with white LEDs providing better performance due to stronger detectable light intensity.

---

## 📈 Future Improvements

- High-power IR LED transmitter
- Longer communication distance
- Adaptive threshold calibration
- PWM-based Li-Fi communication
- Vehicle-to-Vehicle (V2V) optical communication
- Machine learning for intelligent fault detection
- Integration with automotive braking systems
- Cloud-based monitoring and diagnostics

---


---

## 📜 License

This project is intended for educational and research purposes.
