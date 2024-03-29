#define led 1
#define pot A5

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(pot, INPUT);
}

void loop()
{
  int lecturaAnal = analogRead(pot);
  int nuevoValor = map(lecturaAnal, 0, 1023, 0, 1000);
  
  digitalWrite(led, HIGH);
  delay(nuevoValor);
  digitalWrite(led, LOW);
  delay(nuevoValor);
}