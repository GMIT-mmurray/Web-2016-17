const int  buttonPin = 2;    // the pin that the pushbutton is attached to
const int  buttonPin1 = 3;    // the pin that the pushbutton is attached to

// Variables will change:
int buttonPushCounter = 0;   // counter for the number of button presses
int buttonState = 0;         // current state of the button
int lastButtonState = 0;     // previous state of the button
// Pin 3
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
      // wend from off to on:
      buttonPushCounter++;
      Serial.print("Incrementing counter Pin 2 :  ");
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
      Serial.println(" Decrementing counter Pin 3  ");
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
