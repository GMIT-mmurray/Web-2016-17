/*
  Button

  Turns on and off a light emitting diode(LED) connected to digital
  pin 13, when pressing a pushbutton attached to pin 2.


  The circuit:
   LED attached from pin 13 to ground
   pushbutton attached to pin 2 from +5V
   10K resistor attached to pin 2 from ground

   Note: on most Arduinos there is already an LED on the board
  attached to pin 13.


  created 2005
  by DojoDave <http://www.0j0.org>
  modified 30 Aug 2011
  by Tom Igoe

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Button
*/

// constants won't change. They're used here to
// set pin numbers:
const int buttonPin2 = 2;     // the number of the pushbutton pin
const int buttonPin3 = 3;     // the number of the pushbutton pin
const int buttonPin4 = 4;     // the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin

// variables will change:
int buttonState2 = 0;         // variable for reading the pushbutton status
int buttonState3 = 0;         // variable for reading the pushbutton status
int buttonState4 = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  pinMode(buttonPin4, INPUT);
  Serial.begin(115200);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3);
  buttonState4 = digitalRead(buttonPin4);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState2 == HIGH && buttonState3 == HIGH && buttonState4 == HIGH ) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
    Serial.println("LED IS ON");
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
    Serial.println("LED IS OFF");
  }
}
