int pinNumbers[] = {5, 10, 2, 7, 8, 3, 9, 6, 4, 11};
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

    switch (inByte) {
      case '0':
        digitalWrite(pinNumbers[0], HIGH);
        delay(timeBlink[0]);
        digitalWrite(pinNumbers[0], LOW);
        break;
      case '1':
        digitalWrite(pinNumbers[1], HIGH);
        delay(timeBlink[1]);
        digitalWrite(pinNumbers[1], LOW);
        break;
      case '2':
        digitalWrite(pinNumbers[2], HIGH);
        delay(timeBlink[2]);
        digitalWrite(pinNumbers[2], LOW);
        break;
      case '3':
        digitalWrite(pinNumbers[3], HIGH);
        delay(timeBlink[3]);
        digitalWrite(pinNumbers[3], LOW);
        break;
      case '4':
        digitalWrite(pinNumbers[4], HIGH);
        delay(timeBlink[4]);
        digitalWrite(pinNumbers[4], LOW);
        break;
      case '5':
        digitalWrite(pinNumbers[5], HIGH);
        delay(timeBlink[5]);
        digitalWrite(pinNumbers[5], LOW);
        break;
      case '6':
        digitalWrite(pinNumbers[6], HIGH);
        delay(timeBlink[6]);
        digitalWrite(pinNumbers[6], LOW);
        break;
      case '7':
        digitalWrite(pinNumbers[7], HIGH);
        delay(timeBlink[7]);
        digitalWrite(pinNumbers[7], LOW);
        break;
      case '8':
        digitalWrite(pinNumbers[8], HIGH);
        delay(timeBlink[8]);
        digitalWrite(pinNumbers[8], LOW);
        break;
      case '9':
        digitalWrite(pinNumbers[9], HIGH);
        delay(timeBlink[9]);
        digitalWrite(pinNumbers[9], LOW);
        break;
            
    }
  }
}

