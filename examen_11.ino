bool boton;

void setup()
{
  	pinMode(A4, OUTPUT);
  	pinMode(A2, OUTPUT);
  	pinMode(A3, OUTPUT);
  	pinMode(2, OUTPUT);
  	pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(A1, INPUT);
}

void loop()
{
  	int valor = analogRead(A1);
  	int nueValor = map(valor, 0, 1023 , 50, 600);
  	
  	boton = digitalRead(5);
  	delay(1);
     
    if (boton == !HIGH)
    {
		digitalWrite(2, LOW);
        digitalWrite(3, LOW);
      	digitalWrite(4, LOW);
      	analogWrite(A4, 200);
   		analogWrite(A2, 0);
    	analogWrite(A3, 100);
      	delay(nueValor);
        analogWrite(A4, 200);
      	analogWrite(A2, 0);
      	analogWrite(A3, 200);
      	delay(nueValor);
      	analogWrite(A4, 255);
      	analogWrite(A2, 0);
      	analogWrite(A3, 0);
      	delay(nueValor);
      	analogWrite(A4, 255);
      	analogWrite(A2, 255);
      	analogWrite(A3, 0);
      	delay(nueValor);
    } else {
    	analogWrite(A4, 0);
        analogWrite(A2, 0);
      	analogWrite(A3, 0);
      	analogWrite(4, 200);
      	analogWrite(3, 0);
    	analogWrite(2, 100);
      	delay(nueValor);
        analogWrite(4, 200);
      	analogWrite(3, 0);
      	analogWrite(2, 200);
      	delay(nueValor);
      	analogWrite(4, 255);
      	analogWrite(3, 0);
      	analogWrite(2, 0);
      	delay(nueValor);
      	analogWrite(4, 255);
      	analogWrite(3, 255);
      	analogWrite(2, 0);
      	delay(nueValor);
      
    }
      
 }