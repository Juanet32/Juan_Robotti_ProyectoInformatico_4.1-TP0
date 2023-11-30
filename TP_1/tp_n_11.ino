#define led1rojo  A0
#define led2rojo  2
#define led2azul  3
#define led3azul  5
#define led3verde 6

void setup()
{
  pinMode(led1rojo, OUTPUT);
  pinMode(led2rojo, OUTPUT);
  pinMode(led2azul, OUTPUT);
  pinMode(led3azul, OUTPUT);
  pinMode(led3verde, OUTPUT);
}

void loop()
{
  analogWrite(led1rojo, 255); 
  delay(500);
  analogWrite(led1rojo, 0);
  delay(500);
  digitalWrite(led2rojo, HIGH);
  digitalWrite(led2azul, HIGH);
  delay(500);
  digitalWrite(led2rojo, LOW);
  digitalWrite(led2azul, LOW);
  delay(500);  
  analogWrite(led3verde, 127);
  analogWrite(led3azul, 127);
  delay(500);
  analogWrite(led3verde, 0);
  analogWrite(led3azul, 0);
  delay(500);
}