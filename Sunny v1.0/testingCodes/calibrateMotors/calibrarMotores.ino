#include <Servo.h>

Servo motor;
int angulo = 90;

void setup() {
  motor.attach(4);
  motor.write(angulo);
}

void loop() {

  
}
