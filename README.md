# Home Automation System  

## Overview  
The **Home Automation System** is designed to enhance security and efficiency in residential spaces by integrating sensors and microcontroller-based automation. This system employs ultrasonic sensors, a smoke sensor, and smart lighting to detect motion, monitor air quality, and automate lighting, making homes safer and reducing human effort.  

---

## System Components & Functionality  

###  Ultrasonic Sensors (HC-SR04)  
- Two ultrasonic sensors detect movement and measure distances.  
- If a visitor is detected within a predefined range, the system triggers a **buzzer alert** and displays a message on an **LCD screen**.  

###  Smoke/Gas Sensor (MQ2)  
- Continuously monitors air quality for the presence of **smoke** or **hazardous gases**.  
- If smoke is detected, the system sounds an **alarm** and displays a **warning message** on the LCD.  

###  Smart Lighting Control  
- Uses an **ultrasonic sensor** to detect human presence.  
- When movement is detected within a specific range, an **LED light** automatically turns **ON**.  
- If no motion is detected, the light switches **OFF** to conserve energy.  

###  Microcontroller (Arduino)  
- The **Arduino board** processes input data from the sensors and controls the **buzzer, LCD, and LED** accordingly.  
- It executes the logic for detecting visitors, smoke, and automating lights.  

---

##  Working Mechanism  

1. **Motion Detection with Ultrasonic Sensors**  
   - The ultrasonic sensors continuously send **sound waves** and measure the time taken for echoes to return.  
   - Based on the time delay, **distance** is calculated.  
   - If the detected distance is below a **threshold** (e.g., **2 inches**), the system recognizes it as **visitor movement** and triggers the **buzzer**.  

2. **Smoke Detection with MQ2 Sensor**  
   - The **MQ2 sensor** detects gas levels.  
   - If readings exceed the **safety limit**, the system activates the **alarm** and displays a warning.  

3. **Smart Lighting Control**  
   - Smart lighting is controlled based on **movement detection** by an **ultrasonic sensor**.  
   - Lights turn **ON** when movement is detected and turn **OFF** when no motion is present, ensuring **efficient energy usage**.  



---

##  Contributing  
Feel free to contribute by submitting issues or pull requests!  

---

###  Contact  
For any queries, reach out via [GitHub Issues](https://github.com/aditi28880/) or email at **aditi28880@gmail.com**.  
