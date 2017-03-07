


int pinNumber[] = {5,  10,  2,    7,   8,   3,    9,    6,   4,    11};
int timeBlink[] = {200, 2000, 1000, 200, 500, 3000, 1000, 100, 1000, 1000};

void setup() {
  // initialize serial communication:
  Serial.begin(9600);
  // initialize the LED pins:
  for (int thisPin = 2; thisPin < 12; thisPin++) {
    pinMode(thisPin, OUTPUT);
  }
}

void loop() {
  // read the sensor:
  if (Serial.available() > 0) {
    int inByte = Serial.read();
    // do something different depending on the character received.
    // The switch statement expects single number values for each case;
    // in this exmaple, though, you're using single quotes to tell
    // the controller to get the ASCII value for the character.  For
    // example 'a' = 97, 'b' = 98, and so forth:

    inByte = inByte - '0';
    //    inByte = inByte - 0x30;
    //    inByte = inByte - 48;
    digitalWrite(pinNumber[inByte], HIGH);
    delay(timeBlink[inByte]);
    digitalWrite(pinNumber[inByte], LOW);

  }
}


