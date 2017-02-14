
int timer = 1000;           // The higher the number, the slower the timing.
int ledPins1[] =    {2, 2, 2}; //Enable Motor 1 //Enable Motor 1
int ledPins2[] =    {3, 4, 4}; // Forward 1     // Rev
int ledPins3[] =    {5, 5, 0}; //Enable Motor 2 //Enable Motor 2
int ledPins4[] =    {6, 7, 0}; // Forward 2     // Rev
int blinkRates[] =  {5000, 2000, 1000};
int pinCount = 3;
int startSwitch = 8;
int switchState = 0;
int motorSwitchingTime = 300;
void setup() {
  // use a for loop to initialize each pin as an output:
  pinMode(startSwitch, INPUT);
  for (int thisPin = 2; thisPin < 8; thisPin++) {
    pinMode(thisPin, OUTPUT);
  }
}

void loop() {
  // loop from the lowest pin to the highest:
  switchState = digitalRead(startSwitch);
  if (switchState == HIGH) {
    for (int thisPin = 0; thisPin < pinCount; thisPin++) {
      // turn the pin on:
      if (ledPins1[thisPin] != 0) {
        digitalWrite(ledPins1[thisPin], HIGH);
      }
      if (ledPins2[thisPin] != 0) {
        digitalWrite(ledPins2[thisPin], HIGH);
      }
      if (ledPins3[thisPin] != 0) {
        digitalWrite(ledPins3[thisPin], HIGH);
      }
      if (ledPins4[thisPin] != 0) {
        digitalWrite(ledPins4[thisPin], HIGH);
      }

      delay(blinkRates[thisPin]);
      if (ledPins1[thisPin] != 0) {
        digitalWrite(ledPins1[thisPin], LOW);
      }
      if (ledPins2[thisPin] != 0) {
        digitalWrite(ledPins2[thisPin], LOW);
      }
      if (ledPins3[thisPin] != 0) {
        digitalWrite(ledPins3[thisPin], LOW);
      }
      if (ledPins4[thisPin] != 0) {
        digitalWrite(ledPins4[thisPin], LOW);
      }
      delay(motorSwitchingTime);
    }
  }
}





