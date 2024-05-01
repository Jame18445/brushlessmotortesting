#include<Servo.h>
Servo ESC;
void setup() {
  ESC.attach(3,1000,2000);
  ESC.write(180);
  delay(5000);
  ESC.write(0);
  delay(2000);
  ESC.write(10);
}

void loop() {

}
