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
    // turn the pin on/off:
    long r = random(1000, 3001);
    blinkLED(thisPin, r);
  }

  // loop from the highest pin to the lowest:
  for (int thisPin = 9; thisPin >= 2; thisPin--) {
    // turn the pin on/off:
    long r = random(1000, 3001);
    blinkLED(thisPin, r);
  }
}

void blinkLED(int pin, int t) {
  digitalWrite(pin, HIGH);
  delay(t);
  // turn the pin off:
  digitalWrite(pin, LOW);
}


