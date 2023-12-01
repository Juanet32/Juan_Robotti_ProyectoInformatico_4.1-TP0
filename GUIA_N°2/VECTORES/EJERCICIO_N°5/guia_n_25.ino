#define led1 4
#define led2 5
int secuencia1[] = { 1, 0 ,0 ,1, 1, 0, 1,1};
int secuencia2[] = { 0, 1 ,0 ,1, 0, 0, 1,0};

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop()
{
  for(int i = 0; i < (sizeof(secuencia1)/sizeof(int)); i++)
  {
    if(secuencia1[i] == 1)
    {
      digitalWrite(led1, HIGH);
    }
    else
    {
      digitalWrite(led1, LOW);
    }
    if(secuencia2[i] == 1)
    {
      digitalWrite(led2, HIGH);
    }
    else
    {
      digitalWrite(led2, LOW);
    }
    delay(500);
  }
}