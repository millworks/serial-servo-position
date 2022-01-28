 // Serial to Servo Position
#include <Servo.h>
Servo servo;
int pos;
void setup()
{
  servo.attach(6);
  Serial.begin(9600);
  servo.write(90);
}
void loop()
{
  if (Serial.available() > 0)
  {
    pos = Serial.parseInt();
    Serial.println(pos);
    servo.write(pos);
    delay(100);
  }
}
