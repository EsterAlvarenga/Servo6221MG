#include <Servo.h>

Servo servo;

void escreveAn(double angulo)
{
  if (angulo > 40) angulo = 40;
  if (angulo < -40) angulo = -40;
  servo.writeMicroseconds(angulo*12+1510);
}

void setup() {
  servo.attach(9, 500, 2500);
  Serial.begin(9600);
}

void loop() {

for (int i=-40; i<40; i++)
{
escreveAn(i);
delay (100);
}

}
