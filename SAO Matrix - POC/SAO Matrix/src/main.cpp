#include <Arduino.h>

void sequentialLEDs() {
  // Turn on LEDs sequentially in a 3x3 matrix
  // Row 1 (pin 9)
  digitalWrite(9, LOW);
  digitalWrite(5, HIGH);
  delay(1000);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  delay(1000);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  delay(1000);
  digitalWrite(7, LOW);
  digitalWrite(9, HIGH);
  
  // Row 2 (pin 10)
  digitalWrite(10, LOW);
  digitalWrite(5, HIGH);
  delay(1000);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  delay(1000);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  delay(1000);
  digitalWrite(7, LOW);
  digitalWrite(10, HIGH);
  
  // Row 3 (pin 11)
  digitalWrite(11, LOW);
  digitalWrite(5, HIGH);
  delay(1000);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  delay(1000);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  delay(1000);
  digitalWrite(7, LOW);
  digitalWrite(11, HIGH);
}

void randomLED() {
  // Turn off all LEDs first
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  
  // Select random column (5-7) and row (9-11)
  int randomCol = random(5, 8);  // Random column pin (5, 6, or 7)
  int randomRow = random(9, 12); // Random row pin (9, 10, or 11)
  
  // Light up the random LED
  digitalWrite(randomRow, LOW);
  digitalWrite(randomCol, HIGH);
  delay(1000);
  
  // Turn off the LED
  digitalWrite(randomCol, LOW);
  digitalWrite(randomRow, HIGH);
}

void setup() {
  // Set the columns as outputs
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);

  // Set the rows as outputs
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  
  // Initialize random seed
  randomSeed(analogRead(0));
}

void loop() {
  // Call the sequential LED function
  sequentialLEDs();
  
  // Add a short pause between patterns
  delay(500);
  
  // Light random LEDs for demonstration
  for (int i = 0; i < 5; i++) {
    randomLED();
    delay(500);
  }
}
