#define A 2
#define B 3
#define C 9
#define D 10
#define E 11
#define F 13
#define G 12


int pines[]  = { A , B , C , D , E , F , G , 4 ,  5 ,  6 ,  7};
int estado[] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 ,  0 ,  0 ,  0};
// 0 =>  OUTPUT  1 => INPUT

void setup()
{
	for( int i = 0 ; i < (sizeof(pines)/sizeof(int)) ; i++ )
    {
  		pinMode( pines[i] , estado[i] );
    }
	Serial.begin( 9600 );
}
void loop()
{	
    				   // A   B   C   D   E   F   G
	int numeroCero[]   = {1 , 1 , 1 , 1 , 1 , 1 , 0};
  	int numeroUno[]    = {0 , 1 , 1 , 0 , 0 , 0 , 0};
  	int numeroDos[]    = {1 , 1 , 0 , 1 , 1 , 0 , 1};
    int numeroTres[]   = {1 , 1 , 1 , 1 , 0 , 0 , 1};
    int numeroCuatro[] = {0 , 1 , 1 , 0 , 0 , 1 , 1};
    int numeroCinco[]  = {1 , 0 , 1 , 1 , 0 , 1 , 1};
    int numeroSeis[]   = {1 , 0 , 1 , 1 , 1 , 1 , 1};
    int numeroSiete[]  = {1 , 1 , 1 , 0 , 0 , 0 , 0};
    int numeroOcho[]   = {1 , 1 , 1 , 1 , 1 , 1 , 1};
  	int numeroNueve[]  = {1 , 1 , 1 , 0 , 0 , 1 , 1};
  
    int numeroA[]      = {1 , 1 , 1 , 0 , 1 , 1 , 1};
    int numeroB[]      = {0 , 0 , 1 , 1 , 1 , 1 , 1};
    int numeroC[]      = {1 , 0 , 0 , 1 , 1 , 1 , 0};
  	int numeroD[]      = {0 , 1 , 1 , 1 , 1 , 0 , 1};
    int numeroE[]      = {1 , 0 , 0 , 1 , 1 , 1 , 1};
    int numeroF[]      = {1 , 0 , 0 , 0 , 1 , 1 , 1};


	int* numerosAmostrar[] = {numeroCero, numeroUno, numeroDos, numeroTres, numeroCuatro, numeroCinco, numeroSeis, numeroSiete, numeroOcho, numeroNueve, numeroA, numeroB ,numeroC, numeroD ,numeroE , numeroF};
  	
  	int binario[4];
    // 0010 ->  2  binario[] = {0,0,1,0}
  	binario[0] = digitalRead(4);
  	binario[1] = digitalRead(5);
  	binario[2] = digitalRead(6);
  	binario[3] = digitalRead(7);
	int peso[] = {8,4,2,1};
  	//            1,0,1,0  = 15  <-> F
  	
  	Serial.print(   binario[0] );
  	Serial.print(   binario[1] );
  	Serial.print(   binario[2] );
  	Serial.print(   binario[3] );
  
	int dec =0;
  	//( sizeof(binario)/sizeof(int) )
  	for(int i=0 ; i < 4 ; i++ )
    {
  		dec += ( peso[i] * binario[i] ); 
    }
  	Serial.print(" - ");
  	Serial.println(dec);
  
	for( int i = 0 ; i < 7 ; i++ )
    {
      digitalWrite( pines[i] , numerosAmostrar[dec][i] );
    }//for i
 
}