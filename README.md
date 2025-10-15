# 🚗 NepoTronics Bluetooth RC Car

A **Bluetooth-controlled RC Car** project designed and programmed by **Sarpharaj Aalam**.  
This project integrates **Arduino (or ESP-based)** control, **motor driver circuits**, and **Bluetooth communication** to create a smooth and responsive wireless robotic car — perfect for DIY, learning, and robotics enthusiasts.

---

## 📸 Project Overview

<p align="center">
  <img src="docs/thumbnail.jpeg" alt="Thumbnail" width="600"/>
</p>

The car receives movement commands from a smartphone via **Bluetooth (HC-05/HC-06)** and responds in real-time to drive **forward**, **backward**, **left**, **right**, and even diagonally using PWM motor speed control.

---

## ⚙️ Key Features

- 📱 Bluetooth wireless control via Android app  
- 🧭 Supports forward, backward, left, right, diagonal moves  
- ⚡ Smooth PWM speed control (0–255 levels)  
- 💡 LED indicators for front and back  
- 🔋 Battery-powered and portable  
- 🧩 Simple and cost-effective design  

---

## 🧩 Components Used

| Component | Description |
|------------|-------------|
| **Microcontroller** | Arduino Nano (can be ported to ESP32) |
| **Motor Driver** | L298N or L293D |
| **Bluetooth Module** | HC-05 / HC-06 |
| **Motors** | 2 × DC motors |
| **Wheel** | 4 × Wheels |
| **Stering** | Single motor based |
| **Drive System** | Rear wheel single motor geared based |
| **Power Supply** | 9V or 12V Li-ion battery |
| **LEDs** | Front and back indicators |
| **Smartphone App** | Bluetooth RC Controller (APK provided) |

---

## 🧠 Working Principle

1. The **Bluetooth module** receives data from the smartphone app.  
2. The **microcontroller** interprets commands such as:
   - `F` → Forward  
   - `B` → Backward  
   - `L` → Left  
   - `R` → Right  
   - `S` → Stop  
3. Based on each command, motor driver pins are set HIGH/LOW.  
4. PWM is used to vary motor speed smoothly.  
5. Optional LEDs indicate movement direction.

---

## 🔌 Arduino Nano Pin Configuration

<p align="center">
  <img src="docs/circuit_diagram.jpg" alt="Circuit Diagram" width="600"/>
</p>

| Function | Pin | Description |
|-----------|-----|-------------|
| Motor 1 IN1 | D7 | Controls direction (Forward/Backward) |
| Motor 1 IN2 | D8 | Controls direction (Forward/Backward) |
| Motor 1 ENA | D6 | PWM speed control (analogWrite) |
| Motor 2 IN3 | D2 | Controls direction |
| Motor 2 IN4 | D4 | Controls direction |
| Motor 2 ENB | D3 | PWM speed control |
| Front LED | D12 | Headlight indicator |
| Back LED | D11 | Reverse indicator |
| Bluetooth RX | D0 | Connected to TX of HC-05 |
| Bluetooth TX | D1 | Connected to RX of HC-05 |

> ⚠️ **Note:** Use voltage divider or level shifter between Arduino TX and HC-05 RX to prevent overvoltage.

---

## 🗂️ Project Structure
```
NepoTronics-RC-Car/
├── .pio/                          # PlatformIO build files
├── .vscode/                       # VS Code project settings
├── apk/
│   └── Bluetooth RC Controller.apk # Android app for control
├── docs/
│   ├── circuit_diagram.jpg        # Circuit diagram
│   └── testing_video.mp4          # Real-world demo video
├── include/                       # Header files (if any)
├── lib/                           # Libraries (if any)
├── src/
│   └── main.cpp                   # Main source code
├── test/                          # Test files
├── .gitignore
├── platformio.ini                 # PlatformIO configuration
└── README.md
```

---

## ⚙️ PlatformIO Configuration (`platformio.ini`)

**Example configuration for Arduino Nano:**
```ini
[env:nanoatmega328]
platform = atmelavr
board = nanoatmega328
framework = arduino
monitor_speed = 9600
```

**Or for ESP32:**
```ini
[env:esp32dev]
platform = espressif32
board = esp32dev
framework = arduino
monitor_speed = 9600
```

---

## 🧾 How to Run the Project

### Step 1: Clone the Repository
```bash
git clone https://github.com/<your-username>/NepoTronics-RC-Car.git
cd NepoTronics-RC-Car
```

### Step 2: Open with PlatformIO
- Launch **VS Code** → **PlatformIO** → **Open Project Folder**.
- Ensure correct board selection in `platformio.ini`.

### Step 3: Upload the Code
- Connect your **Arduino Nano** (or **ESP32**).
- Click **Upload** in PlatformIO to flash the firmware.

### Step 4: Connect Bluetooth
- Power your car circuit.
- Pair your phone with **HC-05** (PIN: `1234` or `0000`).
- Open the provided mobile app.
- Connect and control the car using directional buttons.

---

## 📱 Mobile App (Bluetooth RC Controller)

<p align="center">
  <img src="docs/app_ui.jpg" alt="App UI" width="600"/>
</p>

Use the included Android application to control the car.

📦 **APK File:**  
⬇️ [Download Bluetooth RC Controller](apk/Bluetooth%20RC%20Controller.apk)

> If GitHub doesn't allow direct download, right-click the link → **Save link as...**

---

## 📽️ Testing Video

<p align="center">
  <img src="docs/picture_inmotion" alt="Car in Action" width="600"/>
</p>

🎬 [Watch Testing Video](docs/testing_video.mp4)

🎬 [Watch Full Video](https://youtu.be/lI9yIjI4Ih8?si=cfia8_hwaqZ9CWz-)

---

## 🧪 Results

✅ Car responds instantly to app commands  
✅ Range up to 10–15 meters (Bluetooth)  
✅ Stable and smooth movement  
✅ Compact and easy to control  

---

## 🧑‍💻 Author

**Project By:** Sarpharaj Aalam  
**Channel:** NepoTronics  
**Connect:** Facebook & Instagram [@NepoTronics](https://facebook.com/NepoTronics)

---

> *"Every small circuit is a big step toward innovation."*

---

## 📄 License

This project is open-source and available under the [MIT License](LICENSE).

---

## 🤝 Contributing

Contributions, issues, and feature requests are welcome!  
Feel free to check the [issues page](https://github.com/sarpharaj-09/NepoTronics-RC-Car/issues).

---

## ⭐ Show Your Support

If you found this project helpful, please give it a ⭐ on GitHub!