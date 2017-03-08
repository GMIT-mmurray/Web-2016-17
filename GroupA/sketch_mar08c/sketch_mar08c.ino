int pinNumbers[] = {5, 10, 2, 7, 8, 3, 9, 6, 4, 11};
int timeBlink[] = {200, 2000, 1000, 200, 500, 3000, 1000, 100, 1000, 1000};
void setup() {
  // initialize serial communication:
  Serial.begin(9600);
  // initialize the LED pins:
  for (int thisPin = 2; thisPin < 10; thisPin++) {
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
        myBlink(pinNumbers[0],timeBlink[0]);
        break;
      case '1':
        myBlink(pinNumbers[1],timeBlink[1]);
        break;
      case '2':
        myBlink(pinNumbers[2],timeBlink[2]);
        break;
      case '3':
        myBlink(pinNumbers[3],timeBlink[3]);
        break;
      case '4':
        myBlink(pinNumbers[4],timeBlink[4]);
        break;
      case '5':
        myBlink(pinNumbers[5],timeBlink[5]);
        break;
      case '6':
        myBlink(pinNumbers[6],timeBlink[6]);
        break;
      case '7':
        myBlink(pinNumbers[7],timeBlink[7]);
        break;
      case '8':
        myBlink(pinNumbers[8],timeBlink[8]);
        break;
      case '9':
        myBlink(pinNumbers[9],timeBlink[9]);
        break;
      default:
        // turn all the LEDs off:
        for (int thisPin = 2; thisPin < 10; thisPin++) {
          digitalWrite(thisPin, LOW);
        }
    }
  }
}

void myBlink( int p, int d) {
  digitalWrite(p, HIGH);
  delay(d);
  digitalWrite(p, LOW);
  delay(d);
}
