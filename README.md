# **L298N Motor Driver Interfacing with Arduino**

🚗 Welcome to the L298N Arduino Interfacing Project Repository\!

This project demonstrates how to control DC motors using an Arduino and the L298N motor driver module. By the end of this guide, you’ll have a fully functional motor control system, allowing you to drive motors forward, backward, and control their speed with ease.

📝 **Project Overview**

The L298N is a dual H-bridge motor driver that allows the control of two DC motors independently. Using an Arduino, we can send control signals to the L298N to determine the direction and speed of each motor. This project is ideal for building simple robots, car-like projects, and motorized systems.

This project helps you learn:

* How to interface the L298N with an Arduino  
* Controlling motor direction and speed  
* Basics of PWM (Pulse Width Modulation)

🛠 **Components Required**

* **Arduino Uno:** Microcontroller board for sending control signals  
* **L298N Motor Driver Module:** To control motor power and direction  
* **DC Motor:** Motors to be controlled  
* **12V Battery:** Power supply for the motors and 5V for the Arduino  
* **Jumper Wires:** For electrical connections


⚙️ **Installation and Setup**

1. **Clone the Repository:**  
* git clone [https://github.com/YogeshwaranP-05/Arduino-L298N-Motor-Driver.git](https://github.com/YogeshwaranP-05/Arduino-L298N-Motor-Driver.git)  
* cd Arduino-L298N-Motor-Driver

2. **Connect Components:**  
* Connect the L298N’s IN3 and IN4 to Arduino digital pins.  
* Connect ENB to Arduino PWM pin.  
* Connect DC motors to the L298N’s motor B terminals.  
* Power the L298N and the Arduino with a 12V Battery supply.

3. **Upload the Code:**  
* Open **`Arduino_L298N_Interface.ino`** in the Arduino IDE.  
* Select the correct board and COM port.  
* Upload the code to your Arduino.

4. **Run the System:**  
* Power up the system.  
* Observe motor movement and control direction and speed.

📝 **Code Explanation**

* **Motor Direction Control:** The IN3 and IN4 pins determine the direction of motor B.  
* **Speed Control:** ENB is connected to PWM pins to adjust motor speed.  
* **Simple Functions:** The code includes functions for forward, backward, and stop actions.

🤝 **Contributing**

We welcome contributions\! Feel free to fork this repository, enhance the project, and submit a pull request.

🧩 **License**

This project is licensed under the GNU GPL V3.0 License. See the **`LICENSE`** file for details.

📧 **Contact**

For any queries or suggestions, reach out to the official website: [www.circuitdigest.com](http://www.circuitdigest.com)

For Complete Project guide, check out here : [L298N Motor Driver with Arduino](https://circuitdigest.com/microcontroller-projects/interfacing-l298n-motor-driver-with-arduino)

Happy building and experimenting\! 🚀

