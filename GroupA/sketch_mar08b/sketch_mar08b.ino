int pinNumber[] = { 4, 8, 7, 10, 3, 9, 6, 5, 11, 2};
int pinTime[] = {1000, 2000, 500, 200, 500, 1000, 1500, 3000, 100, 400};
const int sensorMin = 0;      // sensor minimum, discovered through experiment
const int sensorMax = 600;    // sensor maximum, discovered through experiment

void setup() {
  // initialize serial communication:
  for (int i = 2; i < 12; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  // read the sensor:
  int sensorReading = analogRead(A0);
  // map the sensor range to a range of four options:
  int range = map(sensorReading, sensorMin, sensorMax, 0, 9);
  if (range < 10) {
    myBlink(pinNumber[range], pinTime[range]);
  }
  delay(1);        // delay in between reads for stability
}

void myBlink( int p, int d) {
  digitalWrite(p, HIGH);
  delay(d);
  digitalWrite(p, LOW);
  delay(d);
}
