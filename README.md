# Brushless-Motor-Speed-Control

brushless motor speed control 
# Hardware Description
In this task, the circuit has been designed to control the speed of the brushless motor of the wheels of the food serving robot. The circuit is composed of an Arduino, a brushless motor and a QS-909 motor driver.  
# Implementation 
To construct the circuit, first connect the potentiometer to pin A0 and the QS-909 motor driver to the Arduino pins as shown in the figure. Note that EL (enable pin) and M (PWM pin) should be connected to 5V. Then, connect the output pins to the brushless motor (any order of connection of the wires won’t make any difference and if you notice that the wheel is in reverse, just switch the places of any two wires). Moreover, connecting the hall pins to the brushless motor is optional, however connecting them will result in slight smoothness of rotation. 
![Brushless-motor JPG](https://user-images.githubusercontent.com/85446888/128193366-06048d5d-f497-414b-8356-9836bd2506c0.png)


# Programing Description
The circuit was programmed to control the speed of the brushless motor using the potentiometer. 
#include <Servo.h>

int pot1=0; // define potentiometer to control motor speed
int motorspeed=0;
 Servo Motor1;
void setup() {
  Motor1.attach(3);  // define the motor and pin

pinMode(2,OUTPUT); // define pin 2 for digital output for the driver

pinMode(4,OUTPUT); // define pin 4 for digital output for the driver
  digitalWrite(2,1);
  delay(10);
  digitalWrite(4,1);
  delay(10);
}

void loop() {
// the following lines of code read the value of the potentiometer and determines the speed and sends it back to the motor 
  pot1=analogRead(A0);
  motorspeed=map(pot1, 0, 1023 , 0 , 180);
  Motor1.write(motorspeed);
}


