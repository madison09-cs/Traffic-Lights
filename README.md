# 🚦 Traffic Lights Simulation with Arduino

A beginner-friendly Arduino project that replicates a real-world **traffic light system** using LEDs. This miniature model demonstrates the light sequence logic of stoplights and is perfect for learning timing, sequencing, and basic digital output control with Arduino.

---

## 📝 Description

The **Traffic Lights** project is designed to simulate the operation of a standard traffic light using three LEDs: **red, yellow, and green**. It follows a timed sequence that mimics real traffic signal behavior — making it easier to understand how such systems are coded and controlled in real life.

This is an excellent introductory project for those learning how to control multiple outputs using Arduino and writing basic timing-based logic.

---

## 🔧 Components Used

| Component             | Quantity |
|-----------------------|----------|
| Arduino Uno R3        | 1        |
| Red LED               | 1        |
| Yellow LED            | 1        |
| Green LED             | 1        |
| 220Ω Resistors        | 3        |
| Breadboard            | 1        |
| Jumper Wires / Cables | Several  |
| USB Cable (for Arduino IDE) | 1   |

---

## 🚀 Installation & Setup

1. **Connect the LEDs**:
   - Red LED:
     - Anode → Digital Pin 2 (through 220Ω resistor)
     - Cathode → GND
   - Yellow LED:
     - Anode → Digital Pin 3 (through 220Ω resistor)
     - Cathode → GND
   - Green LED:
     - Anode → Digital Pin 4 (through 220Ω resistor)
     - Cathode → GND

2. **Upload the Code**:
   - Open the Arduino IDE.
   - Write or paste your traffic light sketch.
   - Connect the Arduino Uno via USB.
   - Select the correct board and COM port under **Tools**.
   - Click **Upload**.

---

## ⚙️ How It Works

The program uses a simple loop with delays to simulate the traffic light cycle:

1. **Green Light ON** – cars can go.
2. **Yellow Light ON** – prepare to stop.
3. **Red Light ON** – stop.

Each LED turns on and off in sequence with specific delays (e.g., 5s green, 2s yellow, 5s red) to simulate real-world timing.

This logic is controlled using `digitalWrite()` and `delay()` in the Arduino code.

---

## 💼 Portfolio

Explore more of my projects and documentation here:  
🔗 [My Portfolio](https://sites.google.com/d/1kRYFgoPpI5KiRHlfU4u9C--i8z4OA6I5/p/1_ZLDAirpPNf5aijgyz-LQdDFrC5D1Gd2/edit)

---

## 🔬 Simulation

Try out the full circuit virtually using **Tinkercad**:  
▶️ [Tinkercad - Traffic Light Simulation](https://www.tinkercad.com/things/8ZzKbSonJFC-copy-of-traffic-light-challenge/editel?returnTo=https%3A%2F%2Fwww.tinkercad.com%2Fdashboard%2Fdesigns%2Fcircuits%3Fq%3DTr%26page%3D1)

---

## 🙌 Credits

- Created by **[Madison Diggs]**
- Built using **Arduino Uno R3**
- Inspired by real-world traffic control systems

---

## 📄 License

This project is open-source and licensed under the Code in the Schools.

---
