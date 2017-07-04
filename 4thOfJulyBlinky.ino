/*
  4th of July Blink

  Flash red, white, and blue LEDs.

  Tested on Arduino Nano v3.
  
  Happy 4th of July!!

  modified 4 July 2017
  by Alfredo Yebra Jr.
*/

// LEDs
#define red 3
#define white 4
#define blue 5

// Setup LEDS for output mode.
void setup() {
  pinMode(red, OUTPUT);
  pinMode(white, OUTPUT);
  pinMode(blue, OUTPUT);
}

// Just keep blinkin 'em.
// Happy 4th of July!!
void loop() {
  digitalWrite(red, HIGH);
  delay(23);
  digitalWrite(red, LOW);
  delay(44);
  digitalWrite(white, HIGH);
  delay(88);
  digitalWrite(white, LOW);
  delay(100);
  digitalWrite(blue, HIGH);
  delay(330);
  digitalWrite(blue, LOW);
  delay(1000);
}
