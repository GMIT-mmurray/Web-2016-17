int timer = 300;           // The higher the number, the slower the timing.
int pinNumbers[] = {5,  10,  2,    7,   8,   3,    9,    6,   4,    11};
int timeBlink[] = {200,2000,1000, 200, 500, 3000, 1000, 100, 1000,1000};
const int pinCount = 10;
// Function Prototype
void ledONOFF(int pin, int t);

void setup() {
  // use a for loop to initialize each pin as an output:
  for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    pinMode(pinNumbers[thisPin], OUTPUT);
  }
}

void loop() {
  // loop from the lowest pin to the highest:
  for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    // turn the pin on:
    ledONOFF(pinNumbers[thisPin], timeBlink[thisPin]);
  }

  // loop from the highest pin to the lowest:
  for (int thisPin = pinCount - 1; thisPin >= 0; thisPin--) {
    // turn the pin on:
    ledONOFF(pinNumbers[thisPin], timeBlink[thisPin]);
  }
}

void ledONOFF(int pin, int t) {
  digitalWrite(pin, HIGH);
  delay(t);
  // turn the pin off:
  digitalWrite(pin, LOW);
}

