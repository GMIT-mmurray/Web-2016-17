/*
  For Loop Iteration

  Demonstrates the use of a for() loop.
  Lights multiple LEDs in sequence, then in reverse.

  The circuit:
   LEDs from pins 2 through 7 to ground

  created 2006
  by David A. Mellis
  modified 30 Aug 2011
  by Tom Igoe

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/ForLoop
*/
// Function Prototype
void ledONOFF(int pinNumber, long t);

// The higher the number, the slower the timing.

void setup() {
  // use a for loop to initialize each pin as an output:
  for (int thisPin = 2; thisPin < 10; thisPin++) {
    pinMode(thisPin, OUTPUT);
  }
}

void loop() {
  // loop from the lowest pin to the highest:
  for (int thisPin = 2; thisPin < 10; thisPin++) {
    if (thisPin % 2 == 0) {
      long r = random(1, 4);
      ledONOFF(thisPin, r);
    }
  }

  // loop from the highest pin to the lowest:
  for (int thisPin = 9; thisPin >= 2; thisPin--) {
    if (thisPin % 2 == 1) {
      long r = random(1, 4);
      ledONOFF(thisPin, r);
    }
  }
}

// Switchs ON/OFF any pin for a number of seconds
void ledONOFF(int pinNumber, long t) {
  digitalWrite(pinNumber, HIGH);
  delay(t * 1000);
  // turn the pin off:
  digitalWrite(pinNumber, LOW);
}


