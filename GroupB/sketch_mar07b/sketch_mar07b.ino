


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

    switch (inByte) {
      case '0':
        digitalWrite(pinNumber[0], HIGH);
        delay(timeBlink[0]);
        digitalWrite(pinNumber[0], LOW);
        break;
      case '1':
       digitalWrite(pinNumber[1], HIGH);
        delay(timeBlink[1]);
        digitalWrite(pinNumber[1], LOW);
        break;
      case '2':
        digitalWrite(pinNumber[2], HIGH);
        delay(timeBlink[2]);
        digitalWrite(pinNumber[2], LOW);
        break;
      case '3':
         digitalWrite(pinNumber[3], HIGH);
        delay(timeBlink[3]);
        digitalWrite(pinNumber[3], LOW);
        break;
      case '4':
        digitalWrite(pinNumber[4], HIGH);
        delay(timeBlink[4]);
        digitalWrite(pinNumber[4], LOW);
        break;
      case '5':
        digitalWrite(pinNumber[5], HIGH);
        delay(timeBlink[5]);
        digitalWrite(pinNumber[5], LOW);
        break;
      case '6':
        digitalWrite(pinNumber[6], HIGH);
        delay(timeBlink[6]);
        digitalWrite(pinNumber[6], LOW);
        break;
      case '7':
         digitalWrite(pinNumber[7], HIGH);
        delay(timeBlink[7]);
        digitalWrite(pinNumber[7], LOW);
        break;
      case '8':
         digitalWrite(pinNumber[8], HIGH);
        delay(timeBlink[8]);
        digitalWrite(pinNumber[8], LOW);
        break;
      case '9':
         digitalWrite(pinNumber[9], HIGH);
        delay(timeBlink[9]);
        digitalWrite(pinNumber[9], LOW);
        break;
      default:
        // turn all the LEDs off:
        for (int thisPin = 2; thisPin < 10; thisPin++) {
          digitalWrite(thisPin, LOW);
        }
    }
  }
}


