int timer = 300;           // The higher the number, the slower the timing.
int pinNumbers1[] = {2, 2, 2}; //M1 Enable
int pinNumbers2[] = {3, 4, 3}; //M1 F
int pinNumbers3[] = {5, 5, 0}; //M2 Enable
int pinNumbers4[] = {6, 7, 0}; //M2 F

int timeBlink[] = {2000, 3000, 4000};
const int pinCount = 3;
const int switchInput = 8;

void setup() {
  // use a for loop to initialize each pin as an output:
  pinMode(switchInput, INPUT);
  for (int thisPin = 2; thisPin < 8; thisPin++) {
    pinMode(thisPin, OUTPUT);
  }
}

void loop() {
  // loop from the lowest pin to the highest:
  if (digitalRead(switchInput) == HIGH) {
    for (int thisPin = 0; thisPin < pinCount; thisPin++) {
      // turn the pin on:
      if (pinNumbers1[thisPin] != 0) {
        digitalWrite(pinNumbers1[thisPin], HIGH);
      }
      if (pinNumbers2[thisPin] != 0) {
        digitalWrite(pinNumbers2[thisPin], HIGH);
      }
      if (pinNumbers3[thisPin] != 0) {
        digitalWrite(pinNumbers3[thisPin], HIGH);
      }
      if (pinNumbers4[thisPin] != 0) {
        digitalWrite(pinNumbers4[thisPin], HIGH);
      }
    
      delay(timeBlink[thisPin]);
      
      if (pinNumbers1[thisPin] != 0) {
        digitalWrite(pinNumbers1[thisPin], LOW);
      }
     if (pinNumbers2[thisPin] != 0) {
        digitalWrite(pinNumbers2[thisPin], LOW);
      }
      if (pinNumbers3[thisPin] != 0) {
        digitalWrite(pinNumbers3[thisPin], LOW);
      }
      if (pinNumbers4[thisPin] != 0) {
        digitalWrite(pinNumbers4[thisPin], LOW);
      }
      delay(200);
    }
  }
}



