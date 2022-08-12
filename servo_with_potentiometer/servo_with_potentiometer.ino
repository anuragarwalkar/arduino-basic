#include <Servo.h>

Servo myServo;

int val;

void setup() {
  Serial.begin(9600);
  myServo.attach(10);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(A0);
  val = map(val, 0, 1023, 0, 180);
  myServo.write(val);
  Serial.println(val);
  delay(15);
}
