/*
  For Loop Iteration

 Demonstrates the use of a for() loop.
 Lights multiple LEDs in sequence, then in reverse.

 The circuit:
 * LEDs from pins 2 through 7 to ground

 created 2006
 by David A. Mellis
 modified 30 Aug 2011
 by Tom Igoe

This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/ForLoop
 */

int timer = 1000;           // The higher the number, the slower the timing.
int pinNumber[]={ 4,    8,    7,   10,  3,   9,    6,    5,   11,   2};
int pinTime[] = {1000, 2000, 500, 200, 500, 1000, 1500, 3000, 100, 400};
int pinCount = 10;

void setup() {
  // use a for loop to initialize each pin as an output:
  for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    pinMode(pinNumber[thisPin], OUTPUT);
  }
}

void loop() {
  // loop from the lowest pin to the highest:
  for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    // turn the pin on:
   blinkLED(pinNumber[thisPin],pinTime[thisPin]);
  }

  // loop from the highest pin to the lowest:
  for (int thisPin = pinCount-1; thisPin >= 0; thisPin--) {
    // turn the pin on:
   blinkLED(pinNumber[thisPin],pinTime[thisPin]);
  }
}

void blinkLED(int pin, long t) {
  digitalWrite(pin, HIGH);
  delay(t);
  // turn the pin off:
  digitalWrite(pin, LOW);
}

