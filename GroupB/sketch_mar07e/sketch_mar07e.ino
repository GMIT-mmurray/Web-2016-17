int pinNumber[] = {5,  10,  2,    7,   8,   3,    9,    6,   4,    11};
int timeBlink[] = {200, 2000, 1000, 200, 500, 3000, 1000, 100, 1000, 1000};
const int sensorMin = 0;      // sensor minimum, discovered through experiment
const int sensorMax = 600; // sensor maximum, discovered through experiment
void setup() {
  // initialize the LED pins:
  for (int thisPin = 2; thisPin < 12; thisPin++) {
    pinMode(thisPin, OUTPUT);
  }
}

void loop() {
  // read the sensor:
  int sensorReading = analogRead(A0);
  int range = map(sensorReading, sensorMin, sensorMax, 0, 9);
  if (range < 10) {
    digitalWrite(pinNumber[range], HIGH);
    delay(timeBlink[range]);
    digitalWrite(pinNumber[range], LOW);
    delay(timeBlink[range]);
  }
}
