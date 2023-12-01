
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);

}

void loop()
{
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(6, HIGH);
  delay(2000);
  digitalWrite(5, LOW);
  digitalWrite(3, HIGH);
  delay(1000);
  digitalWrite(3, LOW);
  digitalWrite(6, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(7, HIGH);
  delay(2000);
  
  
}
