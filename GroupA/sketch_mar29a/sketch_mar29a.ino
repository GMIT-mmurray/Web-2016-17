void displayBinary(int Value);
void setLEDS(int b3, int b2, int b1, int b0);
// this constant won't change:
const int  buttonPin = 2;    // the pin that the pushbutton is attached to
const int  buttonPin1 = 3;    // the pin that the pushbutton is attached to

// Variables will change:
int buttonPushCounter = 0;   // counter for the number of button presses
int buttonState = 0;         // current state of the button
int lastButtonState = 0;     // previous state of the button

int buttonState1 = 1;         // current state of the button
int lastButtonState1 = 1;     // previous state of the button

void setup() {
  // initialize the button pin as a input:
  pinMode(buttonPin, INPUT);
  pinMode(buttonPin1, INPUT);
  // initialize the LED as an output:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  // initialize serial communication:
  Serial.begin(9600);
}


void loop() {
  // read the pushbutton input pin:
  buttonState = digitalRead(buttonPin);
  buttonState1 = digitalRead(buttonPin1);

  // compare the buttonState to its previous state
  if (buttonState != lastButtonState) {
    // if the state has changed, increment the counter
    if (buttonState == HIGH) {
      // if the current state is HIGH then the button
      // went from low to high:
      buttonPushCounter++;
      if (buttonPushCounter > 15) {
        buttonPushCounter = 15;
      }
      Serial.print("Counter Incremented by Pin 2: value =  ");
      Serial.println(buttonPushCounter);
    }
    // Delay a little bit to avoid bouncing
    delay(50);
  }

  if (buttonState1 != lastButtonState1) {
    // if the state has changed, increment the counter
    if (buttonState1 == LOW) {
      // if the current state is LOW then the button
      // went from HIGH to LOW:
      buttonPushCounter--;
      if (buttonPushCounter < 0) {
        buttonPushCounter = 0;
      }

      Serial.print("Counter Decremented by Pin 3: value =  ");
      Serial.println(buttonPushCounter);
    }
    // Delay a little bit to avoid bouncing
    delay(50);
  }
  // save the current state as the last state,
  //for next time through the loop
  lastButtonState = buttonState;
  lastButtonState1 = buttonState1;

  displayBinary(buttonPushCounter); // outputs binary to LEDS
}

void displayBinary(int Value) {
  switch (Value) {
    case 0 : setLEDS(LOW, LOW, LOW, LOW); break;
    case 1 : setLEDS(LOW, LOW, LOW, HIGH); break;
    case 2 : setLEDS(LOW, LOW, HIGH, LOW); break;
    case 3 : setLEDS(LOW, LOW, HIGH, HIGH); break;
    case 4 : setLEDS(LOW, HIGH, LOW, LOW); break;
    case 5 : setLEDS(LOW, HIGH, LOW, HIGH); break;
    case 6 : setLEDS(LOW, HIGH, HIGH, LOW); break;
    case 7 : setLEDS(LOW, HIGH, HIGH, HIGH); break;
    case 8 : setLEDS(HIGH, LOW, LOW, LOW); break;
    case 9 : setLEDS(HIGH, LOW, LOW, HIGH); break;
    case 0xa : setLEDS(HIGH, LOW, HIGH, LOW); break;
    case 11 : setLEDS(HIGH, LOW, HIGH, HIGH); break;
    case 12 : setLEDS(HIGH, HIGH, LOW, LOW); break;
    case 13 : setLEDS(HIGH, HIGH, LOW, HIGH); break;
    case 14 : setLEDS(HIGH, HIGH, HIGH, LOW); break;
    case 15 : setLEDS(HIGH, HIGH, HIGH, HIGH); break;
  }
}

void setLEDS(int b3, int b2, int b1, int b0) {
  digitalWrite(10, b0);
  digitalWrite(11, b1);
  digitalWrite(12, b2);
  digitalWrite(13, b3);
}

    Contact GitHub API Training Shop Blog About 

    © 2017 GitHub, Inc. Terms Privacy Security
