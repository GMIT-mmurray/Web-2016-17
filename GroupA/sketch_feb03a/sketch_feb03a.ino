// The higher the number, the slower the timing.

// Function Prototype
void blinkLED(int pin, long t);
long r;
void setup() {
  // use a for loop to initialize each pin as an output:
  for (int thisPin = 2; thisPin < 10; thisPin++) {
    pinMode(thisPin, OUTPUT);
  }
}

void loop() {
  // loop from the lowest pin to the highest:
   r = random(1000, 3001);
  for (int thisPin = 2; thisPin < 10; thisPin++) {
    // turn the pin on/off:
    //   long r = random(1000, 3001);
    //   blinkLED(thisPin, random(1000, 3001));
    blinkLED(thisPin, r);
  }

  // loop from the highest pin to the lowest:
  r = random(1000, 3001);
  for (int thisPin = 9; thisPin >= 2; thisPin--) {
    // turn the pin on/off:
    //  long r = random(1000, 3001);
    //  blinkLED(thisPin, random(1000, 3001));
    blinkLED(thisPin, r);
  }
}

void blinkLED(int pin, long t) {
  digitalWrite(pin, HIGH);
  delay(t);
  // turn the pin off:
  digitalWrite(pin, LOW);
}


