#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

unsigned int pos0=172; // ancho de pulso en cuentas para pocicion 0°
unsigned int pos180=565; // ancho de pulso en cuentas para la pocicion 180°

Adafruit_PWMServoDriver servos = Adafruit_PWMServoDriver(0x40);
void setServo(uint8_t n_servo, int angulo) {
  int duty;
  duty=map(angulo,0,180,pos0, pos180);
  servos.setPWM(n_servo, 0, duty);  
}

void setup(){
  servos.begin(); 
  servos.setPWMFreq(60); 
}

void loop(){
  setServo(1,90); 
  setServo(2,90); 
  setServo(3,90); 
  
  setServo(5,90);
  setServo(6,90);
  setServo(7,90); 

  
  setServo(9, 90);
  setServo(10,90);
  setServo(11,90); 
  
  setServo(13, 90);
  setServo(14,90);
  setServo(15,90);  

}
