
int timer = 1000;           // The higher the number, the slower the timing.
int ledPins[] =    {3,   7,     4,    2,    6,   5,   8,   10,   12,  11,   9,   13};
int blinkRates[] = {500, 1000, 2000, 2000, 200, 5000, 300, 600, 3000, 4000, 100, 500};
int pinCount = 12;

void setup() {
  // use a for loop to initialize each pin as an output:
  for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    pinMode(ledPins[thisPin], OUTPUT);
  }
}

void loop() {
  // loop from the lowest pin to the highest:
  for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    // turn the pin on:
    blinkLed(ledPins[thisPin],blinkRates[thisPin]);
  }

  // loop from the highest pin to the lowest:
  for (int thisPin = pinCount - 1; thisPin >= 0; thisPin--) {
    // turn the pin on:
    blinkLed(ledPins[thisPin],blinkRates[thisPin]);
  }
}


void blinkLed( int pin, int t) {
  digitalWrite(pin, HIGH);
  delay(t);
  // turn the pin off:
  digitalWrite(pin, LOW);
}

