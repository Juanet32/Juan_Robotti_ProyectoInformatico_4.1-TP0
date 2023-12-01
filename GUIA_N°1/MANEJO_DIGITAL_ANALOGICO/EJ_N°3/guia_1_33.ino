#define pot   A1
#define led   2
#define led2  3
#define led3  4
#define led4  5
#define led5  6
#define led6  8
#define led7  9
#define led9  10
#define led10  11
#define led11 12
#define led12 13
#define bot   7
int valor;
int valorn;
bool boton;
void setup()
{
  pinMode(pot, INPUT);
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led9,OUTPUT);
  pinMode(led10,OUTPUT);
  pinMode(led11,OUTPUT);
  pinMode(led12,OUTPUT);
  pinMode(bot, INPUT);
  Serial.begin(9600);
  
}

void loop()
{
  valor = analogRead(pot);
  valorn= map(valor,0,1023,0,255);
  Serial.print("el valor de lectura es: ");
  Serial.print(valor);
  Serial.print(" equivalente ");
  Serial.print(valorn);
  Serial.println(" en escritura.");
  boton=digitalRead(bot);
  delay(1);
  
  if (boton==!HIGH && boton==205)
 {
   digitalWrite(led,HIGH);
   delay(1000);
   digitalWrite(led,LOW);
   delay(1000);
   digitalWrite(led2,HIGH);
   delay(1000);
   digitalWrite(led2,LOW);
   delay(1000);
   digitalWrite(led3,HIGH);
   delay(1000);
   digitalWrite(led3,LOW);
   delay(1000);
   digitalWrite(led4,HIGH);
   delay(1000);
   digitalWrite(led4,LOW);
   delay(1000);
   digitalWrite(led5,HIGH);
   delay(1000);
   digitalWrite(led5,LOW);
   delay(1000);
   digitalWrite(led6,HIGH);
   delay(1000);
   digitalWrite(led6,LOW);
   delay(1000);
   digitalWrite(led7,HIGH);
   delay(1000);
   digitalWrite(led7,LOW);
   delay(1000);
   digitalWrite(led9,HIGH);
   delay(1000);
   digitalWrite(led9,LOW);
   delay(1000);
   digitalWrite(led10,HIGH);
   delay(1000);
   digitalWrite(led10,LOW);
   delay(1000);
   digitalWrite(led11,HIGH);
   delay(1000);
   digitalWrite(led11,LOW);
   delay(1000);
   digitalWrite(led12,HIGH);
   delay(1000);
   digitalWrite(led12,LOW);
   delay(1000);
   
 }else{
   digitalWrite(led,LOW);
   digitalWrite(led2,LOW);
   digitalWrite(led3,LOW);
   digitalWrite(led4,LOW);
   digitalWrite(led5,LOW);
   digitalWrite(led6,LOW);
   digitalWrite(led7,LOW);
   digitalWrite(led9,LOW);
   digitalWrite(led10,LOW);
   digitalWrite(led11,LOW);
   digitalWrite(led12,LOW);
   
 }
  if (boton==!HIGH && boton==511)
 {
   digitalWrite(led,HIGH);
   delay(500);
   digitalWrite(led,LOW);
   delay(500);
   digitalWrite(led2,HIGH);
   delay(500);
   digitalWrite(led2,LOW);
   delay(500);
   digitalWrite(led3,HIGH);
   delay(500);
   digitalWrite(led3,LOW);
   delay(500);
   digitalWrite(led4,HIGH);
   delay(500);
   digitalWrite(led4,LOW);
   delay(500);
   digitalWrite(led5,HIGH);
   delay(500);
   digitalWrite(led5,LOW);
   delay(500);
   digitalWrite(led6,HIGH);
   delay(500);
   digitalWrite(led6,LOW);
   delay(500);
   digitalWrite(led7,HIGH);
   delay(500);
   digitalWrite(led7,LOW);
   delay(500);
   digitalWrite(led9,HIGH);
   delay(500);
   digitalWrite(led9,LOW);
   delay(500);
   digitalWrite(led10,HIGH);
   delay(500);
   digitalWrite(led10,LOW);
   delay(500);
   digitalWrite(led11,HIGH);
   delay(500);
   digitalWrite(led11,LOW);
   delay(500);
   digitalWrite(led12,HIGH);
   delay(500);
   digitalWrite(led12,LOW);
   delay(500);
   
 }else{
   digitalWrite(led,LOW);
   digitalWrite(led2,LOW);
   digitalWrite(led3,LOW);
   digitalWrite(led4,LOW);
   digitalWrite(led5,LOW);
   digitalWrite(led6,LOW);
   digitalWrite(led7,LOW);
   digitalWrite(led9,LOW);
   digitalWrite(led10,LOW);
   digitalWrite(led11,LOW);
   digitalWrite(led12,LOW);
   
 }
  if (boton==!HIGH && boton==1023)
 {
   digitalWrite(led,HIGH);
   delay(300);
   digitalWrite(led,LOW);
   delay(300);
   digitalWrite(led2,HIGH);
   delay(300);
   digitalWrite(led2,LOW);
   delay(300);
   digitalWrite(led3,HIGH);
   delay(300);
   digitalWrite(led3,LOW);
   delay(300);
   digitalWrite(led4,HIGH);
   delay(300);
   digitalWrite(led4,LOW);
   delay(300);
   digitalWrite(led5,HIGH);
   delay(300);
   digitalWrite(led5,LOW);
   delay(300);
   digitalWrite(led6,HIGH);
   delay(300);
   digitalWrite(led6,LOW);
   delay(300);
   digitalWrite(led7,HIGH);
   delay(300);
   digitalWrite(led7,LOW);
   delay(300);
   digitalWrite(led9,HIGH);
   delay(300);
   digitalWrite(led9,LOW);
   delay(300);
   digitalWrite(led10,HIGH);
   delay(300);
   digitalWrite(led10,LOW);
   delay(300);
   digitalWrite(led11,HIGH);
   delay(300);
   digitalWrite(led11,LOW);
   delay(300);
   digitalWrite(led12,HIGH);
   delay(300);
   digitalWrite(led12,LOW);
   delay(300);
   
 }else{
   digitalWrite(led,LOW);
   digitalWrite(led2,LOW);
   digitalWrite(led3,LOW);
   digitalWrite(led4,LOW);
   digitalWrite(led5,LOW);
   digitalWrite(led6,LOW);
   digitalWrite(led7,LOW);
   digitalWrite(led9,LOW);
   digitalWrite(led10,LOW);
   digitalWrite(led11,LOW);
   digitalWrite(led12,LOW);
   
 }
}