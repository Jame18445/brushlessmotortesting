#include<Servo.h>
Servo ESC;
int speed;
void setup() {
  // put your setup code here, to run once:
  ESC.attach(3,1000,2000);
}

void loop() {
  speed = analogRead(A0);
  speed = map(speed, 0, 1023, 0, 180);
  ESC.write(speed);

}
