//this version of pitches.h is modified, so don't use the default arduino pitches.h
#include "pitches.h"

  boolean isPlay1 = false;
  boolean isPlay2 = false;
  boolean isPlay3 = false;
  boolean isPlay4 = false;
  boolean isPlay5 = false;
  boolean isPlay6 = false;
  char note1;
  char note2;
  char note3;
  char note4;
  char note5;
  char note6;

  int logic(char note){
    if(isPlay1){
      if(isPlay2){
        if(isPlay3){
          if(isPlay4){
            if(isPlay5){
                note6 = note;
                isPlay6 = true;
            }else{
              note5 = note;
              isPlay5 = true;
            }
          }else{
            note4 = note;
            isPlay4 = true;
          }
        }else{
          note3 = note;
          isPlay3 = true;
        }
      }else{
        note2 = note;
        isPlay2 = true;
      }
    }else{
      note1 = note;
      isPlay1 = true;
      }
  }
  //this song plays after a correct song combination is played
  int correctSong(){
     noTone(11);
     tone(11, _D5, 325);
     delay(100);
     tone(11, _F5, 325);
     delay(100);
     tone(11, _A5, 325);
     delay(100);
     tone(11, _C6, 325);
     delay(100);
     tone(11, _D6, 850);
  }
  int songChecker(){
    //check for Saria's Song
    if((note1=='d')&&(note2=='r')&&(note3=='l')&&(note4=='d')&&(note5=='r')&&(note6=='l')){
      //play correct sound effect
      correctSong();
      delay(500);
      
      //play song
      tone(11, _F4);
      delay(250);
      tone(11, _A4);
      delay(250);
      tone(11, _B4);
      delay(500);
      tone(11, _F4);
      delay(250);
      tone(11, _A4);
      delay(250);
      tone(11, _B4);
      delay(500);
      tone(11, _F4);
      delay(250);
      tone(11, _A4);
      delay(250);
      tone(11, _B4);
      delay(250);
      tone(11, _E5);
      delay(250);
      tone(11, _D5);
      delay(500);
      tone(11, _B4);
      delay(250);
      tone(11, _C5);
      delay(250);
      tone(11, _B4);
      delay(250);
      tone(11, _G4);
      delay(250);
      tone(11, _E4);
      delay(625);
      tone(11, _D4);
      delay(250);
      tone(11, _E4);
      delay(250);
      tone(11, _G4);
      delay(250);
      tone(11, _E4, 750);
      delay(750);
      
    }
    //check for Zelda's Lullaby
   else if((note1=='l')&&(note2=='u')&&(note3=='r')&&(note4=='l')&&(note5=='u')&&(note6=='r')){
      //play correct sound effect
      correctSong();
      delay(500);
      
      //play song
      tone(11, _B4);
      delay(875);
      tone(11, _D5);
      delay(500);
      tone(11, _A4);
      delay(1000);
      tone(11, _B4);
      delay(875);
      tone(11, _D5);
      delay(500);
      tone(11, _A4);
      delay(1000);
      tone(11, _B4);
      delay(875);
      tone(11, _D5);
      delay(500);
      tone(11, _A5);
      delay(1000);
      tone(11, _G5);
      delay(500);
      tone(11, _D5);
      delay(750);
      tone(11, _C5);
      delay(250);
      tone(11, _B4);
      delay(250);
      tone(11, _A4, 750);
      delay(1250);
    }
    //check for the Sun's Song
   else if((note1=='r')&&(note2=='d')&&(note3=='u')&&(note4=='r')&&(note5=='d')&&(note6=='u')){
      //play correct sound effect
      correctSong();
      delay(500);
      
      //play song
      tone(11, _A4);
      delay(250);
      tone(11, _F4);
      delay(125);
      tone(11, _D5);
      delay(625);
      tone(11, _A4);
      delay(250);
      tone(11, _F4);
      delay(125);
      tone(11, _D5);
      delay(500);
      tone(11, _A4);
      delay(125);
      tone(11, _B4);
      delay(125);
      tone(11, _C5);
      delay(125);
      tone(11, _D5);
      delay(125);
      tone(11, _E5);
      delay(125);
      tone(11, _F5);
      delay(125);
      tone(11, _G5,750);
      delay(750);
    }
    //check for the Song of Storms
   else if((note1=='a')&&(note2=='d')&&(note3=='u')&&(note4=='a')&&(note5=='d')&&(note6=='u')){
      //play correct sound effect
      correctSong();
      delay(500);
      
      //play song
      tone(11, _D4);
      delay(250);
      tone(11, _F4);
      delay(125);
      tone(11, _D5);
      delay(625);
      tone(11, _D4);
      delay(250);
      tone(11, _F4);
      delay(125);
      tone(11, _D5);
      delay(625);
      tone(11, _E5);
      delay(500);
      tone(11, _F5);
      delay(125);
      tone(11, _E5);
      delay(125);
      tone(11, _F5);
      delay(125);
      tone(11, _E5);
      delay(125);
      tone(11, _C5);
      delay(125);
      tone(11, _A4);
      delay(625);
      noTone(11);
      tone(11, _A4);
      delay(250);
      tone(11, _D4);
      delay(250);
      tone(11, _F4);
      delay(125);
      tone(11, _G4);
      delay(125);
      tone(11, _A4);
      delay(625);
      noTone(11);
      tone(11, _A4);
      delay(250);
      tone(11, _D4);
      delay(375);
      tone(11, _F4);
      delay(125);
      tone(11, _G4);
      delay(250);
      tone(11, _E4,750);
      delay(750);
    }
    //check for the Song of Time
   else if((note1=='r')&&(note2=='a')&&(note3=='d')&&(note4=='r')&&(note5=='a')&&(note6=='d')){
      //play correct sound effect
      correctSong();
      delay(500);
      
      //play song
      tone(11, _A4);
      delay(500);
      tone(11, _D4);
      delay(1000);
      tone(11, _F4);
      delay(500);
      tone(11, _A4);
      delay(500);
      tone(11, _D4);
      delay(1000);
      tone(11, _F4);
      delay(500);
      tone(11, _A4);
      delay(250);
      tone(11, _C5);
      delay(250);
      tone(11, _B4);
      delay(500);
      tone(11, _G4);
      delay(500);
      tone(11, _F4);
      delay(250);
      tone(11, _G4);
      delay(250);
      tone(11, _A4);
      delay(500);
      tone(11, _D4);
      delay(500);
      tone(11, _C4);
      delay(250);
      tone(11, _E4);
      delay(250);
      tone(11, _D4,750);
      delay(750);
    }
    //check for Epona's Song
   else if((note1=='u')&&(note2=='l')&&(note3=='r')&&(note4=='u')&&(note5=='l')&&(note6=='r')){
      //play correct sound effect
      correctSong();
      delay(500);
      
      //play song
      tone(11, _D5);
      delay(250);
      tone(11, _B4);
      delay(250);
      tone(11, _A4);
      delay(1125);
      tone(11, _D5);
      delay(250);
      tone(11, _B4);
      delay(250);
      tone(11, _A4);
      delay(1125);
      tone(11, _D5);
      delay(250);
      tone(11, _B4);
      delay(250);
      tone(11, _A4);
      delay(625);
      tone(11, _B4);
      delay(625);
      tone(11, _A4,750);
      delay(750);
    }else{
      //plays error tone if no correct song combo is played
      tone(11, _D2, 750);
      delay(500);
    }
    isPlay1 = false;
    isPlay2 = false;
    isPlay3 = false;
    isPlay4 = false;
    isPlay5 = false;
    isPlay6 = false;
  }



void setup() {
  
  //Speaker pin
  pinMode(2,OUTPUT);

  //Button Pins
  pinMode(8,INPUT);
  pinMode(9,INPUT);
  pinMode(12,INPUT);
  pinMode(A1,INPUT);
  pinMode(A0,INPUT);  
}//end of setup

void loop() {
  //D,F,A,C,D
  if(digitalRead(8)==LOW){
    logic('u');
    while(digitalRead(8)==LOW){
      tone(11, _D5, 50);
    }
  }
  if(digitalRead(9)==LOW){
    logic('l');
    while(digitalRead(9)==LOW){
      tone(11, _B4, 50);
    }
  }
  if(digitalRead(12)==LOW){
    logic('r');
    while(digitalRead(12)==LOW){
      tone(11, _A4, 50);
    }
  }
  if(digitalRead(A1)==LOW){
    logic('d');
    while(digitalRead(A1)==LOW){
      tone(11, _F4, 50);
    }
  }
  if(digitalRead(A0)==LOW ){
    logic('a');
    while(digitalRead(A0)==LOW){
      tone(11, _D4, 50);
    }
  }
  if(isPlay6){
  songChecker();
  }
}//end of loop
