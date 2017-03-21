// this constant won't change:
const int  buttonPin = 2;    // the pin that the pushbutton is attached to+
const int  buttonPin1 = 3;    // the pin that the pushbutton is attached to-


// Variables will change:
int buttonPushCounter = 0;   // counter for the number of button presses
int buttonState = 0;         // current state of the button
int lastButtonState = 0;     // previous state of the button
int buttonState1 = 0;         // current state of the button
int lastButtonState1 = 0;     // previous state of the button

void setup() {
  // initialize the buttons pin as a input:
  pinMode(buttonPin, INPUT);
  pinMode(buttonPin1, INPUT);
  // initialize the LEDs as an output:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  // initialize serial communication:
  Serial.begin(9600);
}


void loop() {
  // read the pushbuttons input pin:
  buttonState = digitalRead(buttonPin);
  buttonState1 = digitalRead(buttonPin1);

  // compare the buttonState to its previous state
  if (buttonState != lastButtonState) {
    // if the state has changed, increment the counter
    if (buttonState == HIGH) {
      // if the current state is HIGH then the button
      // wend from off to on:
      buttonPushCounter++;
      Serial.print("Incrementing on pin 2:  ");
      Serial.println(buttonPushCounter);
    } 
    // Delay a little bit to avoid bouncing
    delay(50);
  }
  if (buttonState1 != lastButtonState1) {
    // if the state has changed, increment the counter
    if (buttonState1 == LOW) {
      // if the current state is HIGH then the button
      // wend from off to on:
      buttonPushCounter--;
      Serial.print("Decrementing on pin 3:  ");
      Serial.println(buttonPushCounter);
    } 
    // Delay a little bit to avoid bouncing
    delay(50);
  }

  // save the current state as the last state,
  //for next time through the loop
  lastButtonState = buttonState;
  lastButtonState1 = buttonState1;

 
  
}
