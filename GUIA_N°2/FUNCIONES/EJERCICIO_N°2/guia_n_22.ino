#define eco 6
#define trig 7

void setup()
{
  pinMode(eco, INPUT);
  pinMode(trig, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  Serial.println(distancia());
  delay(200);
}

float distancia()
{
  digitalWrite(trig, LOW);
  digitalWrite(trig, HIGH);
  delayMicroseconds(2);
  digitalWrite(trig, LOW);
  float tiempo = pulseIn(eco, HIGH);
  float distancia = (tiempo / 58.2);
  return distancia;
}