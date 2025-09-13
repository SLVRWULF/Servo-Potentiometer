#include <Servo.h>

int pPin=A0;
int pVal=0;

Servo servo;

void setup() {
  servo.attach(9);

}

void loop() {
int pVal = analogRead(pPin);
int angle = map(pVal, 0,1023,0,180);

servo.write(angle);


}
