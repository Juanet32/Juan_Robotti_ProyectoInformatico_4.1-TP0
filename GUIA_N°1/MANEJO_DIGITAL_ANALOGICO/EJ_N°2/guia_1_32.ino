const int buttonPin = 2;      
const int potPin = A0;    
const int redPin = 9;        
const int greenPin = 11;      
const int bluePin = 10;       

int buttonState = 0;
int potValue = 0;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (!buttonState) {  // Verificar si el botón está presionado
    potValue = analogRead(potPin);

    int redValue = map(potValue, 0, 1023, 0, 255);
    int greenValue = map(potValue, 0, 1023, 0, 255);
    int blueValue = map(potValue, 0, 1023, 0, 255);

    analogWrite(redPin, redValue);
    analogWrite(greenPin, greenValue);
    analogWrite(bluePin, blueValue);
  } else {
    analogWrite(redPin, 0);
    analogWrite(greenPin, 0);
    analogWrite(bluePin, 0);
  }
}
