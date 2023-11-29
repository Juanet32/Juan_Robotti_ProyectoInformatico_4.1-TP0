#define buzzer 9
 
#define NOTE_C4  262
#define NOTE_D4  294
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_A5  455
#define NOTE_AS4 466
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880

int melodia[] = {NOTE_A4, NOTE_A4, NOTE_A4, NOTE_F4, NOTE_C5, NOTE_A4, NOTE_F4, NOTE_C5, 
NOTE_A4, NOTE_E5, NOTE_E5, NOTE_F5, NOTE_C5, NOTE_GS4, NOTE_F4, NOTE_C5, 
NOTE_A4, NOTE_A5, NOTE_A4, NOTE_A4, NOTE_A5, NOTE_GS5, NOTE_G5, NOTE_FS5, 
NOTE_A5, NOTE_DS5, NOTE_D5, NOTE_CS5, NOTE_C5, NOTE_AS4, NOTE_C5, NOTE_F4, 
NOTE_GS4, NOTE_F4, NOTE_A4, NOTE_C5, NOTE_A4, NOTE_C5, NOTE_E5, NOTE_A5, 
NOTE_A4, NOTE_A4, NOTE_A5, NOTE_GS5, NOTE_G5, NOTE_FS5, NOTE_F5, NOTE_FS5, 
NOTE_A5, NOTE_DS5, NOTE_D5, NOTE_CS5, NOTE_C5, NOTE_F4, NOTE_GS4, NOTE_F4, 
NOTE_C5, NOTE_A4, NOTE_F4, NOTE_C4, NOTE_A4, 

    
};
 int figura[] = {
  8, 8, 8, 4, 4, 8,
  8, 8, 8, 4, 4, 8,
  8, 8, 8, 4, 4, 8,
  8, 8, 8, 4, 4, 8,
  8, 8, 8, 4, 4, 8,
  8, 8, 8, 4, 4, 8,
  8, 8, 8, 4, 4, 8,
  8, 8, 8, 4, 4, 8,
  8, 8, 8, 4, 4, 8,
  8, 8, 8, 4, 4, 8,
  8, 8, 8, 4, 4, 8,
  8, 8, 8, 4, 4, 8,
  8, 8, 8, 4, 4, 8,
  8, 8, 8, 4, 4, 8,
  8, 8, 8, 4, 4, 8,
  8, 8, 8, 4, 4, 8,
};

float tempo = 2.0;

void setup()
{
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  for(int v = 0 ; v < sizeof(melodia)/sizeof(int) ; v++){
    tone(buzzer, melodia[v], 1000/figura[v]);
    delay(1000/figura[v] * tempo);
  }

  noTone(buzzer);
  delay(5000);
}

