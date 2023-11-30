#define led1rojo  A0
#define led2rojo  2
#define led2azul  3
#define led3azul  5
#define led3verde 6
#define pot A1
#define boton 7

void setup()
{
  pinMode(led1rojo, OUTPUT);
  pinMode(led2rojo, OUTPUT);
  pinMode(led2azul, OUTPUT);
  pinMode(led3azul, OUTPUT);
  pinMode(led3verde, OUTPUT);
  pinMode(boton, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop()
{
  
 
  int lecturaAnal = analogRead(pot);
  int nuevoValor = map(lecturaAnal, 0, 1023, 0, 1000);
  
  int estadoBoton = digitalRead(boton);
  if(estadoBoton != LOW)
  {
    
    analogWrite(led1rojo, 255); 
    delay(nuevoValor);
    analogWrite(led1rojo, 0);
    delay(nuevoValor);

    
    digitalWrite(led2rojo, HIGH);
    digitalWrite(led2azul, HIGH);
    delay(nuevoValor);
    digitalWrite(led2rojo, LOW);
    digitalWrite(led2azul, LOW);
    delay(nuevoValor);

    
    analogWrite(led3verde, 127);
    analogWrite(led3azul, 127);
    delay(nuevoValor);
    analogWrite(led3verde, 0);
    analogWrite(led3azul, 0);
    delay(nuevoValor);
    
  }else{
    analogWrite(led1rojo, 0);
    digitalWrite(led2rojo, LOW);
    digitalWrite(led2azul, LOW);
    analogWrite(led3azul, 0);
    analogWrite(led3verde, 0);
  }
  
  Serial.print(boton);
}