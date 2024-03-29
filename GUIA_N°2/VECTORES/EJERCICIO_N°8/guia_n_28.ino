#define led 5
#define boton 10

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(boton, INPUT); 
  Serial.begin(9600);
}

void loop()
{
  int vector[] = {0, 0, 0, 0, 0};
  for(int i = 0; i < (sizeof(vector)/sizeof(int)); i++)
  {
    digitalWrite(led, HIGH);
    delay(1000);
    int estado_boton = digitalRead(boton);
    digitalWrite(led, LOW);
    vector[i] = estado_boton;
    delay(500);
  }
  
  Serial.print("[");
  for(int i = 0; i < (sizeof(vector)/sizeof(int)); i++)
  {
    Serial.print(vector[i]);
    
    if(i != 4)
    {
      Serial.print(", ");
    }
    else
    {
      Serial.println("]");
    }
  }
  delay(5000);
}