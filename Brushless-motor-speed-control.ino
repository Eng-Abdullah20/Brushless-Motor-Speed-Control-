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
