# 🔥 Gas/Smoke Detection System using Arduino (Tinkercad Simulation)

## 📖 Overview
This project is a **Gas and Smoke Detection System** built and simulated using **Arduino on Tinkercad**.  
The system uses a gas sensor (MQ series) to monitor air quality and provides **visual alerts (LEDs)**, **audio alarms (buzzer)**, and **serial monitor messages** when harmful gases or smoke are detected.  

It is a beginner-friendly project for learning **embedded systems, Arduino programming, and Tinkercad simulation**.


## ⚡ Features
- Real-time smoke/gas detection  
- **Red LED + Buzzer** → danger alert  
- **Green LED** → safe condition  
- Serial Monitor output for debugging/logging  
- Fully simulated on **Tinkercad** (easy to reproduce)  

## 🛠️ Components Used
- Arduino UNO  
- Gas Sensor (e.g., MQ-2/MQ-135)  
- Red LED (Pin A1)  
- Green LED (Pin A3)  
- Buzzer (Pin A2)  
- Jumper wires + breadboard  

## 🔌 Circuit Diagram
![Circuit Diagram](Gas Lekage Detector img.png)

If you want to explore or modify the simulation, open the project directly in **Tinkercad**:  
👉(https://www.tinkercad.com/things/3m4yMaBlBOG-dazzling-fyyran/editel?returnTo=https%3A%2F%2Fwww.tinkercad.com%2Fdashboard)


## 💻 Arduino Code
The source code is available in [`Gas_Sensor.ino`](Gas_Sensor.ino).

## 🚀 How It Works
1. The gas sensor continuously measures gas concentration.  
2. If the reading **≥ 300**:  
   - Red LED turns **ON**  
   - Green LED turns **OFF**  
   - Buzzer activates  
   - Serial Monitor prints: *"SMOKE DETECTED"*  
3. If the reading is **below 300**:  
   - Green LED turns **ON**  
   - Red LED turns **OFF**  
   - Buzzer deactivates  
   - Serial Monitor shows safe mode with sensor value.  

## 📊 Applications
- Home smoke and gas leakage alarms  
- Industrial gas monitoring  
- Fire detection and safety systems  
- IoT-based safety automation  


## 📜 License
This project is free to use and modify it for your own learning and projects.
