#include <Servo.h>
Servo myServo;

void setup() {
  myServo.attach(8);
}

void loop() {
  
  for(int angle = 90; angle <= 180; angle++){
    myServo.write(angle);
    delay(20);
  }
  
  
  for(int angle =180 ; angle >=90; angle--){
    myServo.write(angle);
    delay(20);
  }
}