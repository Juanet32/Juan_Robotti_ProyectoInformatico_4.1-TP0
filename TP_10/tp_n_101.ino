
#include <Servo.h>

Servo servoPuerta1;
Servo servoPuerta2;

#define led 2
#define servo1 3
#define servo2 5
#define pirSalida 8
#define pirEntrada 7

#define ldr A3

void setup()
{
  servoPuerta1.attach(3);
  servoPuerta2.attach(5);
  pinMode(led, OUTPUT);
  pinMode(ldr, INPUT);
  pinMode(pirSalida, INPUT);
  pinMode(pirEntrada, INPUT);
  pinMode(servo1, OUTPUT);
  pinMode(servo2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  leerSensorPIR(pirEntrada);
  leerSensorPIR(pirSalida);
  leerSensorLdr(ldr, led);
 
}

void leerSensorPIR(int pin) {
    int estadoSensor = digitalRead(pin);
    int anguloServo1, anguloServo2;
   
    if (pin == pirEntrada) {
      anguloServo1 = 180;
      anguloServo2 = 0;
    } else if (pin == pirSalida) {
      anguloServo1 = 0;
      anguloServo2 = 180;
    }

    if (estadoSensor == HIGH) {
      abrirPuertas(anguloServo1, anguloServo2);
      delay(10000);
    } else {
      cerrarPuertas();
    }
}

void leerSensorLdr(int pinLdr, int pinLed) {
    int luz = analogRead(pinLdr);
    if (luz >= 30) {
      digitalWrite(pinLed, HIGH);
    }
  else{
      digitalWrite(pinLed, LOW);
  }
}

void abrirPuertas(int angulo1, int angulo2) {
    servoPuerta1.write(angulo1);
    servoPuerta2.write(angulo2);
}

void cerrarPuertas() {
    servoPuerta1.write(90);
    servoPuerta2.write(90);
}