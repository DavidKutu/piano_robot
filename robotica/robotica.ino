#include <Servo.h>
#define DIR_PIN A5
#define STEP_PIN 8
int tono=-1150;
int semi=-575;
Servo m1;
Servo m2;
Servo m3;
Servo m4;
Servo m5;
bool limit=true;

void setup()
{  
  m1.attach(2);
  m2.attach(3);
  m3.attach(4);
  m4.attach(5);
  m5.attach(6);
  m1.write(45);
  m2.write(45);
  m3.write(45);
  m4.write(45);
  m5.write(45);
  pinMode(DIR_PIN, OUTPUT); 
  pinMode(STEP_PIN, OUTPUT);
  pinMode(7,INPUT_PULLUP);
}

void loop()
{
  findZero();
    iron();
  findZero();
  stay();
  findZero();
  Beethoven();

}

void stay()
{
  rotate(4*tono,1);
  m1.write(0);
  delay(1500);
  m1.write(45);
  m2.write(17);
  delay(1000);
  m2.write(45);
  m1.write(0);
  delay(1500);
   m1.write(45);
   delay(50);
   m1.write(0);
   delay(1000);
   m1.write(45);
   m2.write(17);
   delay(1000);
   m1.write(0);
   m2.write(45);
   delay(1500);
   m1.write(45);
   //parte doremi
   rotate(3*tono,1);
   m1.write(0);
   delay(250);
   m1.write(45);
   m2.write(17);
   delay(250);
   m3.write(0);
   m2.write(45);
   delay(250);
    m1.write(0);
   m3.write(45);
   
   delay(250);
   m1.write(45);
   m2.write(17);
   delay(250);
   m3.write(0);
   m2.write(45);
   delay(250);
    m1.write(0);
   m3.write(45);
   
   delay(250);
   m1.write(45);
   m2.write(17);
   delay(250);
   m3.write(0);
   m2.write(45);
   delay(250);
    m1.write(0);
   m3.write(45);
   delay(200);
       m1.write(45);
       delay(50);
       m1.write(0);
       delay(500);
       m1.write(45);
   //
   delay(250);
      m1.write(0);
   delay(250);
   m1.write(45);
   m2.write(17);
   
   delay(250);
   m3.write(0);
   m2.write(45);
   delay(250);
    m1.write(0);
   m3.write(45);
   
   delay(250);
   m1.write(45);
   m2.write(17);
   delay(250);
   m3.write(0);
   m2.write(45);
   delay(250);
    m1.write(0);
   m3.write(45);
   
   delay(250);
   m1.write(45);
   m2.write(17);
   delay(250);
   m3.write(0);
   m2.write(45);
   delay(250);
   m3.write(45);
   m5.write(0);
   delay(250);
       m5.write(45);
       m3.write(0);
       delay(1000);
       //
       m1.write(0);
       m3.write(0);
       m5.write(0);
       delay(2000);
       m1.write(45);
       m3.write(45);
       m5.write(45);
      
   

}

void iron()
{
  int i=3;
  rotate(5*tono,.5);
  while(i>0)
  {
      m1.write(0);
      delay(1000);
      m1.write(45);
      delay(50);
      rotate(2*tono,1);
      m1.write(0);
      delay(1000);
      m1.write(45);
      delay(50);
      m1.write(0);
      delay(500);
      m1.write(45);
      m2.write(17);
      delay(500);
      m2.write(45);
      delay(50);
      m2.write(17);
      delay(1000);
      m2.write(45);
      m4.write(17);
      delay(250);
      m4.write(45);
      m3.write(0);
      delay(250);
      m3.write(45);
      m4.write(17);
      delay(250);
      m4.write(45);
      m3.write(0);
      delay(250);
      m3.write(45);
      m4.write(17);
      delay(250);
      m4.write(45);
      m3.write(0);
      delay(250);
      m3.write(45);
      m1.write(0);
      delay(500);
      m1.write(45);
      delay(50);
      m1.write(0);
      delay(500);
      m1.write(45);
      m2.write(17);
      delay(500);
      m2.write(45);
      delay(50);
      m2.write(17);
      delay(500);
      m2.write(45);
      rotate(-2*tono,1);
      i--;
  }
}

void Beethoven()
{
  m3.write(0);
  delay(500);
  m3.write(45);
  delay(50);
  m3.write(0);
  delay(500);
  m3.write(45);
  m4.write(17);
  delay(500);
  m4.write(45);
  m5.write(10);
  delay(500);
  m5.write(25);
  delay(100);
  m5.write(10);
  delay(500);
  m5.write(25);
  //primer compas
  m4.write(17);
  delay(500);
  m4.write(45);
  m3.write(0);
  delay(500);
  m3.write(45);
  m2.write(17);
  delay(500);
  m2.write(45);
  //segundo compas
  m1.write(0);
  delay(500);
  m1.write(45);
  delay(50);
  m1.write(0);
  delay(500);
  m1.write(45);
  m2.write(17);
  delay(500);
  m2.write(45);
  m3.write(0);
  delay(500);
  m3.write(45);
  //tercer compas
  delay(50);
  m3.write(0);
  delay(800);

  m2.write(17);
  delay(250);
  m2.write(45);
  delay(250);
  m2.write(17);
  delay(1000);
  m2.write(45);
//segundo siatem
  m3.write(0);
  delay(500);
  m3.write(45);
  delay(50);
  m3.write(0);
  delay(500);
  m3.write(45);
  m4.write(17);
  delay(500);
  m4.write(45);
  m5.write(10);
  delay(500);
  m5.write(25);
  delay(100);
  m5.write(10);
  delay(500);
  m5.write(25);
  //primer compas
  m4.write(17);
  delay(500);
  m4.write(45);
  m3.write(0);
  delay(500);
  m3.write(45);
  m2.write(17);
  delay(500);
  m2.write(45);
  //segundo compas
  m1.write(0);
  delay(500);
  m1.write(45);
  delay(50);
  m1.write(0);
  delay(500);
  m1.write(45);
  m2.write(17);
  delay(500);
  m2.write(45);
  m3.write(0);
  delay(500);
  m3.write(45);
  m2.write(17);
  delay(500);
m2.write(45);
m1.write(0);
  delay(500);
  m1.write(45);
    delay(50);
 m1.write(0);
delay(500);
  m1.write(45);
//  rotate(10*tono,1);
}

void findZero()
{
  limit= true;
  while(limit)
  {
    rotate(50, .1); 

    if(digitalRead(7)==0)
       limit=false;
  }
}

void rotate(int steps, float speed){ 
  //rotate a specific number of microsteps (8 microsteps per step) - (negitive for reverse movement)
  //speed is any number from .01 -> 1 with 1 being fastest - Slower is stronger
  int dir = (steps > 0)? HIGH:LOW;
  steps = abs(steps);

  digitalWrite(DIR_PIN,dir); 

  float usDelay = (1/speed) * 70;

  for(int i=0; i < steps; i++){ 
    digitalWrite(STEP_PIN, HIGH); 
    delayMicroseconds(usDelay); 

    digitalWrite(STEP_PIN, LOW); 
    delayMicroseconds(usDelay); 
  } 
} 
