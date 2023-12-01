#define buzz 4
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(buzz, OUTPUT);
}

void loop()
{
 	digitalWrite(3, HIGH);
    digitalWrite(2, LOW);
  	digitalWrite(buzz, 0);
  	delay(2000);
    digitalWrite(3, LOW);
  	delay(500);
  	digitalWrite(3, HIGH);
  	delay(500);
  	digitalWrite(3, LOW);
  	delay(500);
  	digitalWrite(3, HIGH);
  	delay(1000);
  	digitalWrite(buzz, 10);
  	digitalWrite(3, LOW);
  	digitalWrite(2, HIGH);
  	delay(2000);
}