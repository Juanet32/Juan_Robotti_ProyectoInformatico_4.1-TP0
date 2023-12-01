#define led_R 4
#define led_G 2
#define led_B 3
#define boton_up 5

int cambioLed = 1;
bool presionado = false;

void setup()
{
 
  pinMode(led_R, OUTPUT);
  pinMode(led_G, OUTPUT);
  pinMode(led_B, OUTPUT);
  pinMode(boton_up, INPUT_PULLUP);
}

void loop()
{
  int estadoBoton = digitalRead(boton_up);

  if (estadoBoton == LOW && !presionado)
  {
    presionado = true;

   
    digitalWrite(led_R, LOW);
    digitalWrite(led_G, LOW);
    digitalWrite(led_B, LOW);


    if (cambioLed == 1) {
      digitalWrite(led_R, HIGH);
      cambioLed = 2;
    }
    
    
    else if (cambioLed == 2) {
      digitalWrite(led_G, HIGH);
      digitalWrite(led_B, HIGH);
      cambioLed = 3;
    }
    
    else if (cambioLed == 3) {
      digitalWrite(led_G, HIGH);
      cambioLed = 4;
    }
    
   
    else if (cambioLed == 4) {
      digitalWrite(led_R, HIGH);
      digitalWrite(led_B, HIGH);
      cambioLed = 5;
    }    
    
    
    else if (cambioLed == 5) {
      digitalWrite(led_B, HIGH);
      cambioLed = 6;    
    }
    
   
    else if (cambioLed == 6) {
      digitalWrite(led_R, HIGH);
      digitalWrite(led_G, HIGH);
      digitalWrite(led_B, HIGH);
      cambioLed = 7;
    }    
  
    
    else if (cambioLed == 7) {
      digitalWrite(led_R, HIGH);
      digitalWrite(led_G, HIGH);
      cambioLed = 1;
    }    
  }

  if (estadoBoton == HIGH && presionado)
  {
    presionado = false;
  }
}