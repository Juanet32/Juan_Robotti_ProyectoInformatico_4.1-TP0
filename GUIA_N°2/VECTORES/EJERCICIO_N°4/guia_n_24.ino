#define led 5
int secuencia[] = { 1, 0 ,0 ,1, 1, 0, 1,1};

void setup()
{
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  for(int i = 0; i < (sizeof(secuencia)/sizeof(int)); i++)
  {
    if(secuencia[i] == 1)
    {
      digitalWrite(led, HIGH);
    }
    else
    {
      digitalWrite(led, LOW);
    }
    delay(500);
  }
}