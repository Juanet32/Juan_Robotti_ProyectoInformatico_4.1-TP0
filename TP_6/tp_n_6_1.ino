#define ledrojo 3
#define ledazul 5
#define ledverde 6

void setup()
{
  pinMode(ledrojo, OUTPUT);
  pinMode(ledazul, OUTPUT);
  pinMode(ledverde,OUTPUT);
}

void loop()
{
  for (int rojo = 0; rojo <= 255; rojo++) {
    for (int verde = 0; verde <= 255; verde++) {
      for (int azul = 0; azul <= 255; azul++) {
        
        analogWrite(ledrojo, rojo);
        analogWrite(ledverde, verde);
        analogWrite(ledazul, azul);
        delay(10);
      }
    }
  }
}