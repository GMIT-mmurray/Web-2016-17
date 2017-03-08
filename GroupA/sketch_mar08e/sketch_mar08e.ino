int pinNumber[] = { 4, 8, 7, 10, 3, 9, 6, 5, 11, 2};
int pinTime[] = {1000, 2000, 500, 200, 500, 1000, 1500, 3000, 100, 400};
const int sensorMin = 0;      // sensor minimum, discovered through experiment
const int sensorMax = 600;    // sensor maximum, discovered through experiment

void setup() {
  // initialize serial communication:
 for (int i = 2; i < 12;i++) {
  pinMode(i,OUTPUT);
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
      digitalWrite(pinNumber[0],HIGH);
      delay(pinTime[0]);
      digitalWrite(pinNumber[0],LOW);
      break;
    case 1:    // your hand is close to the sensor
      digitalWrite(pinNumber[1],HIGH);
      delay(pinTime[1]);
      digitalWrite(pinNumber[1],LOW);
      break;
    case 2:    // your hand is a few inches from the sensor
      digitalWrite(pinNumber[2],HIGH);
      delay(pinTime[2]);
      digitalWrite(pinNumber[2],LOW);
      break;
    case 3:    // your hand is nowhere near the sensor
      digitalWrite(pinNumber[3],HIGH);
      delay(pinTime[3]);
      digitalWrite(pinNumber[3],LOW);
      break;
    case 4:
      digitalWrite(pinNumber[4],HIGH);
      delay(pinTime[4]);
      digitalWrite(pinNumber[4],LOW);
      break;
    case 5:
      digitalWrite(pinNumber[5],HIGH);
      delay(pinTime[5]);
      digitalWrite(pinNumber[5],LOW);
      break;
    case 6:    // your hand is a few inches from the sensor
      digitalWrite(pinNumber[6],HIGH);
      delay(pinTime[6]);
      digitalWrite(pinNumber[6],LOW);
      break;
    case 7:    // your hand is nowhere near the sensor
      digitalWrite(pinNumber[7],HIGH);
      delay(pinTime[7]);
      digitalWrite(pinNumber[7],LOW);
      break;
    case 8:
      digitalWrite(pinNumber[8],HIGH);
      delay(pinTime[8]);
      digitalWrite(pinNumber[8],LOW);
      break;
    case 9:
      digitalWrite(pinNumber[9],HIGH);
      delay(pinTime[9]);
      digitalWrite(pinNumber[9],LOW);
      break;
  }
  delay(1);        // delay in between reads for stability
}
