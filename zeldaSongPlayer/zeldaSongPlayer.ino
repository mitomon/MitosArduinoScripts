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

      int correctSongArray[5] = {_D5, _F5, _A5, _C6, _D6};
      for(int i = 0;i < sizeof(correctSongArray);i++){
          tone(11, correctSongArray[i], 325);
          delay(100);
      }
  }

  int playSariaSong(){
      //play correct sound effect
      correctSong();
      delay(500);

      //play song
      int sariaSongArray[] = {_F4, _A4, _B4, _F4, _A4, _B4, _F4, _A4, _B4, _E5, _D5, _B4, _C5, _B4, _G4, _E4, _D4, _E4, _G4};
      int sariaSongDelay[] = {250, 250, 500, 250, 250, 500, 250, 250, 250, 250, 500, 250, 250, 250, 250, 625, 250, 250, 250};
      for(int i = 0;i < sizeof(sariaSongArray);i++){
          tone(11, sariaSongArray[i]);
          delay(sariaSongDelay[i]);
      }
      tone(11, _E4, 750);
      delay(750);
  }

  int playZeldaLullaby(){
      //play correct sound effect
      correctSong();
      delay(500);

      //play song
      int zeldaLullabyArray[] = {_B4, _D5, _A4, _B4, _D5, _A4, _B4, _D5, _A5, _G5, _D5, _C5, _B4};
      int zeldaLullabyDelay[] = {875, 500, 1000, 875, 500, 1000, 875, 500, 1000, 500, 750, 250, 250};
      for(int i = 0;i < sizeof(zeldaLullabyArray);i++){
          tone(11, zeldaLullabyArray[i]);
          delay(zeldaLullabyDelay[i]);
      }
      tone(11, _E4, 750);
      delay(750);
  }

  int playSunSong(){
      //play correct sound effect
      correctSong();
      delay(500);

      //play song
      int sunSongArray[] = {_A4, _F4, _D5, _A4, _F4, _D5, _A4, _B4, _C5, _D5, _E5, _F5};
      int sunSongDelay[] = {250, 250, 625, 250, 125, 500, 125, 125, 125, 125, 125, 125};
      for(int i = 0;i < sizeof(sunSongArray);i++){
          tone(11, sunSongArray[i]);
          delay(sunSongDelay[i]);
      }
      tone(11, _G5, 750);
      delay(750);
  }

  int playSongOfStorms(){
      //play correct sound effect
      correctSong();
      delay(500);

      //play song
      int songOfStromArray[] = {_D4, _F4, _D5, _D4, _F4, _D5, _E5, _F5, _E5, _F5, _E5, _C5, _A4, _A4, _D4, _F4, _G4, _A4, _A4, _D4, _F4, _G4};
      int songOfStormDelay[] = {250, 125, 600, 250, 125, 600, 500, 125, 125, 125, 125, 125, 625, 250, 250, 125, 125, 625, 250, 375, 125, 250};
      for(int i = 0;i < sizeof(songOfStromArray);i++){
          tone(11, songOfStromArray[i]);
          delay(songOfStormDelay[i]);
          if(i == 12 || i == 17){
            noTone(11);
          }
      }
      tone(11, _E4,750);
      delay(750);
  }

  int playSongOfTime(){
      //play correct sound effect
      correctSong();
      delay(500);

      //play song
      int songOfTimeArray[] = {_A4, _D4, _F4, _A4, _D4, _F4, _A4, _C5, _B4, _G4, _F4, _G4, _A4, _D4, _C4, _E4};
      int songOfTimeDelay[] = {500, 1000, 500, 500, 1000, 500, 250, 250, 500, 500, 250, 250, 500, 500, 250, 250};
      for(int i = 0;i < sizeof(songOfTimeArray);i++){
          tone(11, songOfTimeArray[i]);
          delay(songOfTimeDelay[i]);
      }
      tone(11, _D4, 750);
      delay(750);
  }

  int playEponaSong(){
      //play correct sound effect
      correctSong();
      delay(500);

      //play song
      int EponaSongArray[] = {_D5, _B4, _A4, _D5, _B4, _A4, _D5, _B4, _A4, _B4};
      int EponaSongDelay[] = {250, 250, 1125, 250, 250, 1125, 250, 250, 625, 625};
      for(int i = 0;i < sizeof(EponaSongArray);i++){
          tone(11, EponaSongArray[i]);
          delay(EponaSongDelay[i]);
      }
      tone(11, _A4, 750);
      delay(750);
  }

  int songChecker(){
    //check for Saria's Song
    if(note1=='d' && note2=='r' && note3=='l' && note4=='d' && note5=='r' && note6=='l' ){
      playSariaSong();
    }
    //check for Zelda's Lullaby
    else if((note1=='l')&&(note2=='u')&&(note3=='r')&&(note4=='l')&&(note5=='u')&&(note6=='r')){
      playZeldaLullaby();
    }
    //check for the Sun's Song
    else if((note1=='r')&&(note2=='d')&&(note3=='u')&&(note4=='r')&&(note5=='d')&&(note6=='u')){
      playSunSong();
    }
    //check for the Song of Storms
    else if((note1=='a')&&(note2=='d')&&(note3=='u')&&(note4=='a')&&(note5=='d')&&(note6=='u')){
      playSongOfStorms();
    }
    //check for the Song of Time
    else if((note1=='r')&&(note2=='a')&&(note3=='d')&&(note4=='r')&&(note5=='a')&&(note6=='d')){
      playSongOfStorms();
    }
    //check for Epona's Song
    else if((note1=='u')&&(note2=='l')&&(note3=='r')&&(note4=='u')&&(note5=='l')&&(note6=='r')){
      playEponaSong();
    } else{
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
}

void loop() {
  //D,F,A,C,D
  int read[] = {8, 9, 12, A0, A1};
  char logicChars[] = {'u', 'l', 'r', 'd', 'a'};
  int tones[] = {_D5, _B4, _A4, _F4, _D4};
  for (int i = 0;i < 5;i++){
    if(digitalRead(read[i])==LOW){
      logic(logicChars[i]);
      while(digitalRead(read[i])==LOW){
        tone(11, tones[i], 50);
      }
    }
  }

  if(isPlay6){
    songChecker();
  }
}
