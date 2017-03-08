int pinNumbers[] = {5, 10, 2, 7, 8, 3, 9, 6, 4, 11};
int timeBlink[] = {200, 2000, 1000, 200, 500, 3000, 1000, 100, 1000, 1000};

void setup() {

  // initialize the LED pins:
  for (int thisPin = 2; thisPin < 12; thisPin++) {
    pinMode(thisPin, OUTPUT);
  }
}

void loop() {
  // read the sensor:
  int sensorReading = analogRead(A0);
  int range = map(sensorReading, 0, 600, 0, 9);
  blink(pinNumbers[range], timeBlink[range]);
}
void blink(int pin, int timeDelay) {
  digitalWrite(pin, HIGH);
  delay(timeDelay);
  digitalWrite(pin, LOW);
}



