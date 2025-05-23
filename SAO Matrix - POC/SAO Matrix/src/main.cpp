#include <Arduino.h>
void setup() {
  // Set the columns as outputs
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);

  // Set the rows as outputs
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  // Turn on LEDs sequentially in a 4x4 matrix
  // for (int col = 5; col <= 8; col++) {
  //  for (int row = 9; row <= 12; row++) {
  //    digitalWrite(col, HIGH);
  //    digitalWrite(row, LOW);
  //    delay(1000);
  //    digitalWrite(col, LOW);
  //    digitalWrite(row, LOW);
  //  }

  digitalWrite(5, HIGH);
  digitalWrite(9, LOW);
  delay(1000);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  delay(1000);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  delay(1000);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  delay(1000);
  digitalWrite(8, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  delay(1000);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  delay(1000);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  delay(1000);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  delay(1000);
  digitalWrite(8, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  delay(1000);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  delay(1000);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  delay(1000);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  delay(1000);
  digitalWrite(8, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  delay(1000);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  delay(1000);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  delay(1000);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  delay(1000);
  digitalWrite(8, LOW);
  }
