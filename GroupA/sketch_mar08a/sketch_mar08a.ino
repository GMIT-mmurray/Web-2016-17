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

  // do something different depending on the
  // range value:
  switch (range) {
    case 0:    // your hand is on the sensor
      myBlink(pinNumber[0], pinTime[0]);
      break;
    case 1:    // your hand is close to the sensor
      myBlink(pinNumber[1], pinTime[1]);
      break;
    case 2:    // your hand is a few inches from the sensor
      myBlink(pinNumber[2], pinTime[2]);
      break;
    case 3:    // your hand is nowhere near the sensor
      myBlink(pinNumber[3], pinTime[3]);
      break;
    case 4:
      myBlink(pinNumber[4], pinTime[4]);
      break;
    case 5:
      myBlink(pinNumber[5], pinTime[5]);
      break;
    case 6:    // your hand is a few inches from the sensor
      myBlink(pinNumber[6], pinTime[6]);
      break;
    case 7:    // your hand is nowhere near the sensor
      myBlink(pinNumber[7], pinTime[7]);
      break;
    case 8:
      myBlink(pinNumber[8], pinTime[8]);
      break;
    case 9:
      myBlink(pinNumber[9], pinTime[9]);
      break;
  }
  delay(1);        // delay in between reads for stability
}

void myBlink( int p, int d) {
  digitalWrite(p, HIGH);
  delay(d);
  digitalWrite(p, LOW);
}
