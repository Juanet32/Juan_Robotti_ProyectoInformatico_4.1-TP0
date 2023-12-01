const int ledPin = 13;  
const int soundPin = 9;  

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(soundPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  tone(soundPin, 600);  

  delay(100);  

  
  digitalWrite(ledPin, LOW);
  noTone(soundPin);

  delay(100);  
}
