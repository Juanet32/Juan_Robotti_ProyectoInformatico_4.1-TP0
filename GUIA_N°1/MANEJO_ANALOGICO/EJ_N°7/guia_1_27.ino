#define potenciometro A5
#define buzzer 3


void setup()
{
  
  pinMode(buzzer, OUTPUT);
  pinMode(potenciometro, INPUT);

}

void loop()
{
  int lecturaAnaloga = analogRead(potenciometro);
  
  
  int frecuencia = map(lecturaAnaloga, 0, 1023, 21, 6271);
    
  tone(buzzer, frecuencia); 
  
}