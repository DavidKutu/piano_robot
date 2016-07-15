#include <Servo.h>
Servo m1;
Servo m2;
Servo m3;
Servo m4;
Servo m5;

void setup() {
  // put your setup code here, to run once:
  m1.attach(2);
  m2.attach(3);
  m3.attach(4);
  m4.attach(5);
  m5.attach(6);
}

void loop() {
  // put your main code here, to run repeatedly:
    //mot.write(90);
    //delay(1000);
    //mot.write(180);
    //delay(1000);
      m1.write(45);
  m2.write(45);
  m3.write(45);
  m4.write(45);
  m5.write(45);
}
