bool boton ;

void setup()
{
 	pinMode(2, INPUT);
	pinMode(3, OUTPUT);
  	
}

void loop()
{
	boton = digitalRead(2);
  	delay(1);
     
    if (boton == !HIGH)
    {
    	digitalWrite(3, HIGH);
      	delay(200);
      	digitalWrite(3, LOW);
      	delay(200);
    } else {
    	digitalWrite(3, LOW);
      	delay(500);
    }
}	