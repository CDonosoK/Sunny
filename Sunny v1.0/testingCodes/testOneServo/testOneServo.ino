#include <Servo.h>

Servo hombro, piernaSuperior, piernaInferior;  
int anguloEntregadoH, anguloEntregadoS, anguloEntregadoI;
int largoSuperior = 10;
int largoInferior = 12;

void setup() {
  hombro.attach(4);
  piernaSuperior.attach(3);
  piernaInferior.attach(5);
  anguloEntregadoH = 50;
  hombro.write(anguloEntregadoH);
  anguloEntregadoS = 160;
  piernaSuperior.write(anguloEntregadoS);
  anguloEntregadoI = 15;
  piernaInferior.write(anguloEntregadoI);
}

void loop() {
  anguloEntregadoS = 160;
  piernaSuperior.write(anguloEntregadoS);
  delay(500);
  anguloEntregadoI = 15;
  piernaInferior.write(anguloEntregadoI);
  delay(500);
  anguloEntregadoS = 160;
  piernaSuperior.write(anguloEntregadoS);
  delay(500);
  anguloEntregadoI = 15;
  piernaInferior.write(anguloEntregadoI);
  delay(500);

  
}
