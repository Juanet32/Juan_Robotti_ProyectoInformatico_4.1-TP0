#define led1RPin 9
#define led1GPin 10
#define	led1BPin 11
#define led2RPin 6
#define led2GPin 7
#define led2BPin 8
#define led3RPin 3
#define led3GPin 4
#define led3BPin 5
#define botonPin  2

int ledActual = 1;
bool botonPresionado = false;

void setup() {
 
  pinMode(led1RPin, OUTPUT);
  pinMode(led1GPin, OUTPUT);
  pinMode(led1BPin, OUTPUT);
  pinMode(led2RPin, OUTPUT);
  pinMode(led2GPin, OUTPUT);
  pinMode(led2BPin, OUTPUT);
  pinMode(led3RPin, OUTPUT);
  pinMode(led3GPin, OUTPUT);
  pinMode(led3BPin, OUTPUT);
  pinMode(botonPin, INPUT_PULLUP);
}

void loop() {
  // Verificamos si se ha presionado el botón
  if (digitalRead(botonPin) == LOW && !botonPresionado) {
    botonPresionado = true;
    
     digitalWrite(3, LOW);
     digitalWrite(4, LOW);
     digitalWrite(5, LOW);
     digitalWrite(6, LOW);
     digitalWrite(7, LOW);
     digitalWrite(8, LOW);
     digitalWrite(9, LOW);
     digitalWrite(10, LOW);
     digitalWrite(11, LOW);
    
     ledActual = (ledActual % 3) + 1; 
  	 prenderLed(ledActual);
  
  } else if (digitalRead(botonPin) == HIGH) {
    botonPresionado = false;
  }
}
void prenderLed(int led) {
  switch (led) {
    case 1:
      digitalWrite(led1RPin, HIGH);
      digitalWrite(led1GPin, HIGH);
      digitalWrite(led1BPin, HIGH);
      break;
    case 2:
      digitalWrite(led2RPin, HIGH);
      digitalWrite(led2GPin, HIGH);
      digitalWrite(led2BPin, HIGH);
      break;
    case 3:
      digitalWrite(led3RPin, HIGH);
      digitalWrite(led3GPin, HIGH);
      digitalWrite(led3BPin, HIGH);
      break;
  }
}
