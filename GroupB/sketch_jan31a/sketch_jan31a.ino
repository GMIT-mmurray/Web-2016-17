void blinkLED(int pin, int t); // Function Prototype

const int ledPin = 13;
long randNumber = 0;
void setup() {
  // put your setup code here, to run once:
  for (int thisPin = 2; thisPin < 10; thisPin++) {
    pinMode(thisPin, OUTPUT);
  }
}

void loop() {
  for (int thisPin = 2; thisPin < 10; thisPin++) {
    randNumber = random(1, 5);
    blinkLED(thisPin, randNumber * 1000);
  }
}

void blinkLED(int pin, int t) {

  //function body
  digitalWrite(pin, HIGH);   // sets the LED on
  delay(t);                  // waits for a second
  digitalWrite(pin, LOW);    // sets the LED off
  delay(t);                  // waits for a second

  //return returntype;
  //implied by closing curly bracked
}
