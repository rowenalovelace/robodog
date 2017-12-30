#define LEG_FRONT_LEFT 11
#define LEG_BACK_LEFT 9
#define LEG_MIDDLE_LEFT 10
#define LEG_FRONT_RIGHT 6
#define LEG_BACK_RIGHT 4
#define LEG_MIDDLE_RIGHT 5
#define MOVE_FRONT_BACK_RIGHT 2
#define MOVE_MIDDLE_RIGHT 3
#define MOVE_FRONT_BACK_LEFT 7
#define MOVE_MIDDLE_LEFT 8
void wobble() {
  digitalWrite(LEG_MIDDLE_LEFT, HIGH);
  delay(300);
  digitalWrite(LEG_BACK_LEFT, HIGH);
  digitalWrite(LEG_FRONT_LEFT, HIGH);
  delay(300);
  digitalWrite(LEG_FRONT_LEFT, LOW);
  digitalWrite(LEG_BACK_LEFT, LOW);
  delay(300);
  digitalWrite(LEG_MIDDLE_LEFT, LOW);
  delay(300);
  digitalWrite(LEG_MIDDLE_RIGHT, HIGH);
  delay(300);
  digitalWrite(LEG_BACK_RIGHT, HIGH);
  digitalWrite(LEG_FRONT_RIGHT, HIGH);
  delay(300);
  digitalWrite(LEG_FRONT_RIGHT, LOW);
  digitalWrite(LEG_BACK_RIGHT, LOW);
  delay(300);
  digitalWrite(LEG_MIDDLE_RIGHT, LOW);
  delay(300);
}
void worm() {
  digitalWrite(LEG_FRONT_LEFT, HIGH);
  digitalWrite(LEG_FRONT_RIGHT, HIGH);
  delay(300);
  digitalWrite(LEG_MIDDLE_RIGHT, HIGH);
  digitalWrite(LEG_MIDDLE_LEFT, HIGH);
  delay(300);
  digitalWrite(LEG_BACK_LEFT, HIGH);
  digitalWrite(LEG_BACK_RIGHT, HIGH);
  delay(300);
  digitalWrite(LEG_FRONT_LEFT, LOW);
  digitalWrite(LEG_FRONT_RIGHT, LOW);
  delay(300);
  digitalWrite(LEG_MIDDLE_RIGHT, LOW);
  digitalWrite(LEG_MIDDLE_LEFT, LOW);
  delay(300);
  digitalWrite(LEG_BACK_LEFT, LOW);
  digitalWrite(LEG_BACK_RIGHT, LOW);
  delay(300);
}
void pop() {
  digitalWrite(LEG_MIDDLE_RIGHT, HIGH);
  digitalWrite(LEG_MIDDLE_LEFT, HIGH);
  digitalWrite(LEG_BACK_LEFT, HIGH);
  digitalWrite(LEG_BACK_RIGHT, HIGH);
  digitalWrite(LEG_FRONT_LEFT, HIGH);
  digitalWrite(LEG_FRONT_RIGHT, HIGH);
  delay(1000);
  digitalWrite(LEG_MIDDLE_RIGHT, LOW);
  digitalWrite(LEG_MIDDLE_LEFT, LOW);
  digitalWrite(LEG_BACK_LEFT, LOW);
  digitalWrite(LEG_BACK_RIGHT, LOW);
  digitalWrite(LEG_FRONT_LEFT, LOW);
  digitalWrite(LEG_FRONT_RIGHT, LOW);
  delay(2000);
}
void sit_lie() {
  delay(500);
  digitalWrite(MOVE_MIDDLE_RIGHT, HIGH);
  digitalWrite(MOVE_FRONT_BACK_LEFT, HIGH);// FORWARD
  digitalWrite(MOVE_MIDDLE_LEFT, HIGH); // FEET UP
  digitalWrite(MOVE_FRONT_BACK_RIGHT, HIGH);// FORWARD
  delay(500);
  digitalWrite(LEG_MIDDLE_RIGHT, HIGH);
  digitalWrite(LEG_MIDDLE_LEFT, HIGH);
  delay(500);
  digitalWrite(LEG_BACK_LEFT, HIGH);
  digitalWrite(LEG_BACK_RIGHT, HIGH);
  delay(1000); // sitting
  digitalWrite(LEG_FRONT_LEFT, HIGH);
  digitalWrite(LEG_FRONT_RIGHT, HIGH);
  delay(1000); // lying
  digitalWrite(LEG_FRONT_LEFT, LOW);
  digitalWrite(LEG_FRONT_RIGHT, LOW);
  delay(500); // sitting
  digitalWrite(LEG_FRONT_LEFT, HIGH);
  digitalWrite(LEG_FRONT_RIGHT, HIGH);
  delay(500); // lying
  digitalWrite(LEG_FRONT_LEFT, LOW);
  digitalWrite(LEG_FRONT_RIGHT, LOW);
  delay(2000); // sitting
  digitalWrite(MOVE_MIDDLE_RIGHT, LOW);
  digitalWrite(MOVE_FRONT_BACK_LEFT, LOW);// FORWARD
  digitalWrite(MOVE_MIDDLE_LEFT, LOW); // FEET UP
  digitalWrite(MOVE_FRONT_BACK_RIGHT, LOW);// FORWARD
  delay(500);
  digitalWrite(LEG_MIDDLE_LEFT, LOW);
  digitalWrite(LEG_MIDDLE_RIGHT, LOW);
  digitalWrite(LEG_BACK_LEFT, LOW);
  digitalWrite(LEG_BACK_RIGHT, LOW);
  delay(500); // standing
}
void sit() {
  delay(500);
  digitalWrite(MOVE_MIDDLE_RIGHT, HIGH);
  digitalWrite(MOVE_FRONT_BACK_LEFT, HIGH);// FORWARD
  digitalWrite(MOVE_MIDDLE_LEFT, HIGH); // FEET UP
  digitalWrite(MOVE_FRONT_BACK_RIGHT, HIGH);// FORWARD
  delay(500);
  digitalWrite(LEG_MIDDLE_RIGHT, HIGH);
  digitalWrite(LEG_MIDDLE_LEFT, HIGH);
  delay(500);
  digitalWrite(LEG_BACK_LEFT, HIGH);
  digitalWrite(LEG_BACK_RIGHT, HIGH);
  delay(1000); // sitting
  digitalWrite(MOVE_MIDDLE_RIGHT, LOW);
  digitalWrite(MOVE_FRONT_BACK_LEFT, LOW);// FORWARD
  digitalWrite(MOVE_MIDDLE_LEFT, LOW); // FEET UP
  digitalWrite(MOVE_FRONT_BACK_RIGHT, LOW);// FORWARD
  delay(1000); // sitting
  digitalWrite(LEG_MIDDLE_LEFT, LOW);
  digitalWrite(LEG_MIDDLE_RIGHT, LOW);
  digitalWrite(LEG_BACK_LEFT, LOW);
  digitalWrite(LEG_BACK_RIGHT, LOW);
  delay(500);
}
void walk() {
  digitalWrite(LEG_MIDDLE_RIGHT, HIGH); // FEET UP
  digitalWrite(LEG_BACK_LEFT, HIGH);
  digitalWrite(LEG_FRONT_LEFT, HIGH);
  delay(300);
  digitalWrite(MOVE_MIDDLE_RIGHT, HIGH);
  digitalWrite(MOVE_FRONT_BACK_LEFT, HIGH);// FORWARD
  delay(300);
  digitalWrite(LEG_MIDDLE_RIGHT, LOW); // FEET DOWn
  digitalWrite(LEG_BACK_LEFT, LOW);
  digitalWrite(LEG_FRONT_LEFT, LOW);
  delay(300);
  digitalWrite(MOVE_MIDDLE_RIGHT, LOW);
  digitalWrite(MOVE_FRONT_BACK_LEFT, LOW);// BACK
  delay(300);

  digitalWrite(LEG_MIDDLE_LEFT, HIGH); // FEET UP
  digitalWrite(LEG_BACK_RIGHT, HIGH);
  digitalWrite(LEG_FRONT_RIGHT, HIGH);
  delay(300);

  digitalWrite(MOVE_MIDDLE_LEFT, HIGH); // FEET UP
  digitalWrite(MOVE_FRONT_BACK_RIGHT, HIGH);// FORWARD
  delay(300);

  digitalWrite(LEG_MIDDLE_LEFT, LOW); // FEET DOWN
  digitalWrite(LEG_BACK_RIGHT, LOW);
  digitalWrite(LEG_FRONT_RIGHT, LOW);
  delay(300);
  digitalWrite(MOVE_MIDDLE_LEFT, LOW); // FEET
  digitalWrite(MOVE_FRONT_BACK_RIGHT, LOW);// BACK
  delay(300);

}
void setup() {
   pinMode(2, OUTPUT);
   pinMode(3, OUTPUT);
   pinMode(4, OUTPUT);
   pinMode(5, OUTPUT);
   pinMode(6, OUTPUT);
   pinMode(7, OUTPUT);
   pinMode(8, OUTPUT);
   pinMode(9, OUTPUT);
   pinMode(10, OUTPUT);
   pinMode(11, OUTPUT);

   digitalWrite(2, LOW);
   digitalWrite(3, LOW);
   digitalWrite(4, LOW);
   digitalWrite(5, LOW);
   digitalWrite(6, LOW);
   digitalWrite(7, LOW);
   digitalWrite(8, LOW);
   digitalWrite(9, LOW);
   digitalWrite(10, LOW);
   digitalWrite(11, LOW);

   delay(500);
}

void loop() {
}
