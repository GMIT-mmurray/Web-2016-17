int timer = 1000;           // The higher the number, the slower the timing.
int pinNumber1[] = {2, 2, 2};
int pinNumber2[] = {3, 4, 3};
int pinNumber3[] = {5, 5, 0};
int pinNumber4[] = {6, 7, 0};
int pinTime[] = {5000, 5000, 2000};
int pinTimeOFF[] = {100,4000,6000};
int seq = 3;
int switchInput = 8;

void setup() {
  pinMode(switchInput, INPUT);
  // use a for loop to initialize each pin as an output:
  for (int thisPin = 2; thisPin < 8; thisPin++) {
    pinMode(thisPin, OUTPUT);
  }
}

void loop() {
  if (digitalRead(switchInput) == HIGH) {
    // loop from the lowest pin to the highest:
    for (int thisPin = 0; thisPin < seq; thisPin++) {
      // turn the pin on:

      myDigitalWrite(pinNumber1[thisPin], HIGH);
      myDigitalWrite(pinNumber2[thisPin], HIGH);
      myDigitalWrite(pinNumber3[thisPin], HIGH);
      myDigitalWrite(pinNumber4[thisPin], HIGH);
      
      delay(pinTime[thisPin]);

      myDigitalWrite(pinNumber1[thisPin], LOW);
      myDigitalWrite(pinNumber2[thisPin], LOW);
      myDigitalWrite(pinNumber3[thisPin], LOW);
      myDigitalWrite(pinNumber4[thisPin], LOW);
     delay(pinTimeOFF[thisPin]);

    }
  }
}
void myDigitalWrite(int pin, int state) {
  if (pin != 0) {
    digitalWrite(pin, state);
  }
}
