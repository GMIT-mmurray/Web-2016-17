int timer = 1000;           // The higher the number, the slower the timing.
int pinNumber1[] = {2, 2, 2};
int pinNumber2[] = {3, 4, 3};
int pinNumber3[] = {5, 5, 0};
int pinNumber4[] = {6, 7, 0};
int pinTime[] = {5000, 5000, 2000};
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
      if (pinNumber1[thisPin] != 0) {
        digitalWrite(pinNumber1[thisPin], HIGH);
      }
      if (pinNumber2[thisPin] != 0 ) {
      digitalWrite(pinNumber2[thisPin], HIGH);
      }
      if (pinNumber3[thisPin] != 0) {
        digitalWrite(pinNumber3[thisPin], HIGH);
      }
      if (pinNumber4[thisPin] != 0 ) {
      digitalWrite(pinNumber4[thisPin], HIGH);
      }
      delay(pinTime[thisPin]);
      
  if (pinNumber1[thisPin] != 0) {
        digitalWrite(pinNumber1[thisPin], LOW);
      }
      if (pinNumber2[thisPin] != 0) {
      digitalWrite(pinNumber2[thisPin], LOW);
      }
      if (pinNumber3[thisPin] != 0) {
        digitalWrite(pinNumber3[thisPin], LOW);
      }
      if (pinNumber4[thisPin] != 0) {
      digitalWrite(pinNumber4[thisPin], LOW);
      }
      delay(300);

    }
  }
}


