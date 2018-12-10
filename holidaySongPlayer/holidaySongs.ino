#include "pitches.h"

#define buzzerPin 22

// Jingle Bells

int melody[] = {
  _E5, _E5, _E5,
  _E5, _E5, _E5,
  _E5, _G5, _C5, _D5,
  _E5,
  _F5, _F5, _F5, _F5,
  _F5, _E5, _E5, _E5, _E5,
  _E5, _D5, _D5, _E5,
  _D5, _G5
};

int tempo[] = {
  8, 8, 4,
  8, 8, 4,
  8, 8, 8, 8,
  2,
  8, 8, 8, 8,
  8, 8, 8, 16, 16,
  8, 8, 8, 8,
  4, 4
};

// We wish you a merry Christmas

int wish_melody[] = {
  _B3, 
  _F4, _F4, _G4, _F4, _E4,
  _D4, _D4, _D4,
  _G4, _G4, _A4, _G4, _F4,
  _E4, _E4, _E4,
  _A4, _A4, _B4, _A4, _G4,
  _F4, _D4, _B3, _B3,
  _D4, _G4, _E4,
  _F4
};

int wish_tempo[] = {
  4,
  4, 8, 8, 8, 8,
  4, 4, 4,
  4, 8, 8, 8, 8,
  4, 4, 4,
  4, 8, 8, 8, 8,
  4, 4, 8, 8,
  4, 4, 4,
  2
};

// Santa Claus is coming to town

int santa_melody[] = {
  _G4,
  _E4, _F4, _G4, _G4, _G4,
  _A4, _B4, _C5, _C5, _C5,
  _E4, _F4, _G4, _G4, _G4,
  _A4, _G4, _F4, _F4,
  _E4, _G4, _C4, _E4,
  _D4, _F4, _B3,
  _C4
};

int santa_tempo[] = {
  8,
  8, 8, 4, 4, 4,
  8, 8, 4, 4, 4,
  8, 8, 4, 4, 4,
  8, 8, 4, 2,
  4, 4, 4, 4,
  4, 2, 4,
  1
};

int buttonOne;
int buttonTwo;
int buttonThree;
int buttonFour;

int keyOne;
int keyTwo;
int keyThree;
int keyFour;
int keyFive;
int keySix;

void setup(void) {
  
  pinMode(22, OUTPUT); // Buzzer
  pinMode(2, OUTPUT);// Led indicator for _B3
  pinMode(3, OUTPUT);// Led indicator for _C4
  pinMode(4, OUTPUT);// Led indicator for _D4
  pinMode(5, OUTPUT);// Led indicator for _E4
  pinMode(6, OUTPUT);// Led indicator for _F4
  pinMode(7, OUTPUT);// Led indicator for _G4
  pinMode(8, OUTPUT);// Led indicator for _A4
  pinMode(9, OUTPUT);// Led indicator for _B4
  pinMode(10, OUTPUT);// Led indicator for _C5
  pinMode(11, OUTPUT);// Led indicator for _D5
  pinMode(12, OUTPUT);// Led indicator for _E5
  pinMode(13, OUTPUT);// Led indicator for _F5
  pinMode(34, OUTPUT);// Led indicator for _G5
//piano keys
  pinMode(24, INPUT_PULLUP);
  pinMode(25, INPUT_PULLUP);
  pinMode(26, INPUT_PULLUP);
  pinMode(27, INPUT_PULLUP);
  pinMode(28, INPUT_PULLUP);
  pinMode(29, INPUT_PULLUP);
//songs selection buttons
  pinMode(30, INPUT_PULLUP);
  pinMode(31, INPUT_PULLUP);
  pinMode(32, INPUT_PULLUP);
  pinMode(33, INPUT_PULLUP);
}

void loop() {
  buttonOne = digitalRead(30);
  buttonTwo = digitalRead(31);
  buttonThree = digitalRead(32);
  buttonFour = digitalRead(33);
  
  keyOne = digitalRead(24);
  keyTwo = digitalRead(25);
  keyThree = digitalRead(26);
  keyFour = digitalRead(27);
  keyFive = digitalRead(28);
  keySix = digitalRead(29);
  
  if (buttonOne == LOW) {
    freeplayMode = false;
    sing(1);
  } else if (buttonTwo == LOW) {
    freeplayMode = false;
    sing(2);
  } else if (buttonThree == LOW) {
    freeplayMode = false;
    sing(3);
  } else if (buttonFour == LOW) {
    //write your own song
  } else  {
    if(keyOne == LOW)
      buzz(buzzerPin,_G5,8);
    if(keyTwo == LOW)
      buzz(buzzerPin,_F5,8);
    if(keyThree == LOW)
      buzz(buzzerPin,_E5,8);  
    if(keyFour == LOW)
      buzz(buzzerPin,_D5,8);
    if(keyFive == LOW)
      buzz(buzzerPin,_C5,8);
    if(keySix == LOW)
      buzz(buzzerPin,_B4,8);  
  }
  
}

void ledOn(int t){
  //turns an LED indicator ON when a certain note is played
  if(t==_B3)
    digitalWrite(2,HIGH);
  if(t==_C4)
    digitalWrite(3,HIGH);
  if(t==_D4)
    digitalWrite(4,HIGH);
  if(t==_E4)
    digitalWrite(5,HIGH);
  if(t==_F4)
    digitalWrite(6,HIGH);
  if(t==_G4)
    digitalWrite(7,HIGH);
  if(t==_A4)
    digitalWrite(8,HIGH);
  if(t==_B4)
    digitalWrite(9,HIGH);
  if(t==_C5)
    digitalWrite(10,HIGH);
  if(t==_D5)
    digitalWrite(11,HIGH);
  if(t==_E5)
    digitalWrite(12,HIGH);
  if(t==_F5)
    digitalWrite(13,HIGH);
  if(t==_G5)
    digitalWrite(34,HIGH);
}

void ledOff(int t){
  //turns an LED indicator ON when a certain note is played
  if(t==_B3)
    digitalWrite(2,LOW);
  if(t==_C4)
    digitalWrite(3,LOW);
  if(t==_D4)
    digitalWrite(4,LOW);
  if(t==_E4)
    digitalWrite(5,LOW);
  if(t==_F4)
    digitalWrite(6,LOW);
  if(t==_G4)
    digitalWrite(7,LOW);
  if(t==_A4)
    digitalWrite(8,LOW);
  if(t==_B4)
    digitalWrite(9,LOW);
  if(t==_C5)
    digitalWrite(10,LOW);
  if(t==_D5)
    digitalWrite(11,LOW);
  if(t==_E5)
    digitalWrite(12,LOW);
  if(t==_F5)
    digitalWrite(13,LOW);
  if(t==_G5)
    digitalWrite(34,LOW);
}

int song = 0;
void sing(int s) {
  // iterate over the notes of the melody:
  song = s;
  if (song == 3) {
    Serial.println(" 'We wish you a Merry Christmas'");
    int size = sizeof(wish_melody) / sizeof(int);
    for (int thisNote = 0; thisNote < size; thisNote++) {

      // to calculate the note duration, take one second
      // divided by the note type.
      //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
      int noteDuration = 1000 / wish_tempo[thisNote];

      buzz(buzzerPin, wish_melody[thisNote], noteDuration);

      // to distinguish the notes, set a minimum time between them.
      // the note's duration + 30% seems to work well:
      int pauseBetweenNotes = noteDuration * 1.30;
      delay(pauseBetweenNotes);

      // stop the tone playing:
      buzz(buzzerPin, 0, noteDuration);

    }
  } else if (song == 2) {
    Serial.println(" 'Santa Claus is coming to town'");
    int size = sizeof(santa_melody) / sizeof(int);
    for (int thisNote = 0; thisNote < size; thisNote++) {

      // to calculate the note duration, take one second
      // divided by the note type.
      //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
      int noteDuration = 900 / santa_tempo[thisNote];

      buzz(buzzerPin, santa_melody[thisNote], noteDuration);

      // to distinguish the notes, set a minimum time between them.
      // the note's duration + 30% seems to work well:
      int pauseBetweenNotes = noteDuration * 1.30;
      delay(pauseBetweenNotes);

      // stop the tone playing:
      buzz(buzzerPin, 0, noteDuration);

    }
  } else {

    Serial.println(" 'Jingle Bells'");
    int size = sizeof(melody) / sizeof(int);
    for (int thisNote = 0; thisNote < size; thisNote++) {

      // to calculate the note duration, take one second
      // divided by the note type.
      //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
      int noteDuration = 1000 / tempo[thisNote];

      buzz(buzzerPin, melody[thisNote], noteDuration);

      // to distinguish the notes, set a minimum time between them.
      // the note's duration + 30% seems to work well:
      int pauseBetweenNotes = noteDuration * 1.30;
      delay(pauseBetweenNotes);

      // stop the tone playing:
      buzz(buzzerPin, 0, noteDuration);

    }
  }
}

void buzz(int targetPin, long frequency, long length) {
  ledOn(frequency);
  long delayValue = 1000000 / frequency / 2; // calculate the delay value between transitions
  //// 1 second's worth of microseconds, divided by the frequency, then split in half since
  //// there are two phases to each cycle
  long numCycles = frequency * length / 1000; // calculate the number of cycles for proper timing
  //// multiply frequency, which is really cycles per second, by the number of seconds to
  //// get the total number of cycles to produce
  for (long i = 0; i < numCycles; i++) { // for the calculated length of time...
    digitalWrite(targetPin, HIGH); // write the buzzer pin high to push out the diaphram
    delayMicroseconds(delayValue); // wait for the calculated delay value
    digitalWrite(targetPin, LOW); // write the buzzer pin low to pull back the diaphram
    delayMicroseconds(delayValue); // wait again or the calculated delay value
  }
  ledOff(frequency);
}
