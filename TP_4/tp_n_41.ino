#define led1rojo 3
#define led1azul 5
#define led1verde 6
#define tmp A0
#define ldr A1

void setup()
{
  pinMode(tmp, INPUT);
  pinMode(ldr, INPUT);
  pinMode(led1rojo, OUTPUT);
  pinMode(led1azul, OUTPUT);
  pinMode(led1verde, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  float grados = (5.0 / 1024 * analogRead(tmp)) * 100 - 50;
  int luz = analogRead(ldr);
  int ldr2 = map(luz, 0, 310, 0, 100); 
  
  Serial.print("El nivel de luz actual es: ");
  Serial.print(ldr2);
  Serial.print(" y la temperatura actual es: ");
  Serial.print(grados);
  Serial.println("-C");

  if (grados > 90 && ldr2 != 0) {
    
    analogWrite(led1rojo, 255);
    analogWrite(led1verde, 0);
    analogWrite(led1azul, 0);
  }else if (grados < 18 && ldr2 != 0) {
    analogWrite(led1rojo, 0);
    analogWrite(led1verde, 0);
    analogWrite(led1azul, 255);
  }else if (grados >= 18 && grados <= 90 && ldr2 != 0) {
    analogWrite(led1rojo, 0);
    analogWrite(led1verde, 255);
    analogWrite(led1azul, 0);
  } else {
    analogWrite(led1rojo, 0);
    analogWrite(led1verde, 0);
    analogWrite(led1azul, 0);
  }
	
}