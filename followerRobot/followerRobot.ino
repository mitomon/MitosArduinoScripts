
#include <Servo.h>  //servo library
Servo myservo;      // create servo object to control servo

//Ultrasonic sensor variables
int Echo = A4;  
int Trig = A5; 

//motor controller pins
#define ENA 5
#define ENB 6
#define IN1 7
#define IN2 8
#define IN3 9
#define IN4 11
#define carSpeed 150
#define carSpeed2 150
int rightDistance = 0, leftDistance = 0, middleDistance = 0;

void forward(){ 
  analogWrite(ENA, carSpeed);
  analogWrite(ENB, carSpeed);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  Serial.println("Forward");
}

void back() {
  analogWrite(ENA, carSpeed);
  analogWrite(ENB, carSpeed);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  Serial.println("Back");
}
void left() {
  analogWrite(ENA, carSpeed2);
  analogWrite(ENB, carSpeed2);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH); 
  Serial.println("Left");
}
void right() {
  analogWrite(ENA, carSpeed2);
  analogWrite(ENB, carSpeed2);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  Serial.println("Right");
}
void stop() {
  digitalWrite(ENA, LOW);
  digitalWrite(ENB, LOW);
  Serial.println("Stop!");
} 

//Ultrasonic distance measurement method
int Distance_test() {
  digitalWrite(Trig, LOW);   
  delayMicroseconds(2);
  digitalWrite(Trig, HIGH);  
  delayMicroseconds(20);
  digitalWrite(Trig, LOW);   
  float Fdistance = pulseIn(Echo, HIGH);  
  Fdistance= Fdistance / 58;       
  return (int)Fdistance;
}  

void setup() { 
  myservo.attach(3);  // attach servo on pin 3 to servo object
  Serial.begin(9600);     
  pinMode(Echo, INPUT);    
  pinMode(Trig, OUTPUT);  
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  stop();
} 

void loop() { 
  
    myservo.write(60);  //setservo position to right side
    delay(200); 
    rightDistance = Distance_test();
    /*
    myservo.write(90);  //setservo position to center
    delay(1000);
    middleDistance = Distance_test();
    */
    myservo.write(120);  //setservo position to left side
    delay(200); 
    leftDistance = Distance_test();


    if((rightDistance > 70)&&(leftDistance > 70)){
      stop();
    }else if((rightDistance >= 20) && (leftDistance >= 20)) {     
      forward();
    }else if((rightDistance <= 10) && (leftDistance <= 10)) {
        back();
        delay(100);//was 180
    }else if(rightDistance - 3 > leftDistance) {
        left();
        delay(100);//was 360
    }else if(rightDistance + 3 < leftDistance) {
        right();
        delay(100);//was 360
    }else{
      stop();
    }
    
}                    
