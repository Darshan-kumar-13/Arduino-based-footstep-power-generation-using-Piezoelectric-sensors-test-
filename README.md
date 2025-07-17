Footstep Power Generation using Piezoelectric Sensors

This project is aimed at demonstrating an energy-harvesting system that generates power using piezoelectric sensors placed beneath a walking surface. As individuals walk across it, their footsteps generate voltage, which is then measured and analyzed using an Arduino-based system


📘 Project Summary

The aim of this project is to convert mechanical energy from foot pressure into electrical energy using piezoelectric materials. This approach is simple, cost-effective, and environmentally friendly. It finds application in public places such as malls, railway stations, and footpaths to harvest energy from pedestrian traffic.

---

⚙️ Hardware Components

| Component                  | Description                        |
|----------------------------|------------------------------------|
| Piezoelectric Sensor       | Converts pressure into voltage     |
| Arduino UNO/Nano           | Microcontroller for data processing|
| I2C 16x2 LCD               | Displays voltage and power output  |
| 10kΩ Load Resistor         | Acts as a resistive load           |
| Bridge Rectifier & Capacitor | Smooths the piezo output         |
| Jumper Wires, Breadboard   | For circuit connections            |



🔌 Circuit Diagram

<img width="449" height="680" alt="image" src="https://github.com/user-attachments/assets/3863c475-75e9-4a4a-9b15-66cf1879ec41" />

🔬 Working Principle

- When a person steps on the piezo tile, mechanical stress is applied to the sensor.
- The piezoelectric effect generates a voltage.
- This AC voltage is rectified and smoothed using a bridge rectifier and capacitor.
- The Arduino measures the voltage and calculates power using:

  \[
  Power = \frac{V^2}{R}
  \]

- The result is displayed on an LCD and sent to the Serial Monitor.


📟 Output Example

LCD Output:
Voltage: 2.13 V
Power: 0.45 mW


Serial Monitor:
Voltage: 2.13 V
Power: 0.45 mW


📂 Arduino Code

The Arduino code is located in:
footstep_power_generation/footstep_power_generation.ino


🚀 Applications

- Railway stations
- Shopping malls
- Airports
- Bus terminals
- Street lighting systems

 📈 Expected Outcome

- Demonstrates clean and renewable energy harvesting.
- Helps raise awareness of smart energy solutions.
- Can be extended to power low-energy devices (e.g., LED lights).

📌 Future Scope

- Energy storage with Li-ion battery modules
- Integration with IoT platforms
- Real-time energy monitoring dashboard
- Use of multiple sensor arrays for higher output

👥 Contributors

- Darshan Kumar – Project Lead & Developer  


📝 License

This project is licensed under the MIT License. Feel free to use and modify it.





