#include <Servo.h>

Servo myservo;  

int pos = 9;    // variable to store the servo position

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  pos=8;
  myservo.write(pos);
    delay(1000);
  pos=86;
  myservo.write(pos);
    delay(1000);
  pos=148;
  myservo.write(pos);
    delay(1000);
}
