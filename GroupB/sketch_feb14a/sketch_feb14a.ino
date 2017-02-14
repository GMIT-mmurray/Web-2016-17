
int timer = 1000;           // The higher the number, the slower the timing.
int ledPins1[] =    {2, 2}; //Enable Motor 1 //Enable Motor 1
int ledPins2[] =    {3, 4}; // Forward 1     // Rev
int ledPins3[] =    {5, 5}; //Enable Motor 2 //Enable Motor 2
int ledPins4[] =    {6, 7}; // Forward 2     // Rev
int blinkRates[] =  {1000, 2000};
int pinCount = 2;

void setup() {
  // use a for loop to initialize each pin as an output:
  for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    pinMode(ledPins1[thisPin], OUTPUT);
    pinMode(ledPins2[thisPin], OUTPUT);
    pinMode(ledPins3[thisPin], OUTPUT);
    pinMode(ledPins4[thisPin], OUTPUT);
  }
}

void loop() {
  // loop from the lowest pin to the highest:
  for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    // turn the pin on:
    digitalWrite(ledPins1[thisPin], HIGH);
    digitalWrite(ledPins2[thisPin], HIGH);
    digitalWrite(ledPins3[thisPin], HIGH);
    digitalWrite(ledPins4[thisPin], HIGH);
    delay(blinkRates[thisPin]);
    digitalWrite(ledPins1[thisPin], LOW);
    digitalWrite(ledPins2[thisPin], LOW);
    digitalWrite(ledPins3[thisPin], LOW);
    digitalWrite(ledPins4[thisPin], LOW);
    delay(blinkRates[thisPin]);
  }
}


void blinkLed( int pin, int t) {
  digitalWrite(pin, HIGH);
  delay(t);
  // turn the pin off:
  digitalWrite(pin, LOW);
  delay(t);
}


