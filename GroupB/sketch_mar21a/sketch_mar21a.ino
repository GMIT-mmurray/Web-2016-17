int getCharacter(void);
int checkAndConvert(int d);
void setLEDS(int b3, int b2, int b1, int b0);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  int rawValue = 0;
  if (Serial.available() > 0) {
    rawValue = getCharacter();
    if (rawValue != -1) {
      Serial.print("Value  = ");
      Serial.println(rawValue);
      switch (rawValue) {
        case 0: setLEDS(LOW, LOW, LOW, LOW);
          break;
        case 1: setLEDS(LOW, LOW, LOW, HIGH);
          break;
        case 2: setLEDS(LOW, LOW, HIGH, LOW);
          break;
        case 3: setLEDS(LOW, LOW, HIGH, HIGH);
          break;
        case 4: setLEDS(LOW, HIGH, LOW, LOW);
          break;
        case 5: setLEDS(LOW, HIGH, LOW, HIGH);
          break;
        case 6: setLEDS(LOW, HIGH, HIGH, LOW);
          break;
        case 7: setLEDS(LOW, HIGH, HIGH, HIGH);
          break;
        case 8: setLEDS(HIGH, LOW, LOW, LOW);
          break;
        case 9: setLEDS(HIGH, LOW, LOW, HIGH);
          break;
        case 0x0a: setLEDS(HIGH, LOW, HIGH, LOW);
          break;
        case 11: setLEDS(HIGH, LOW, HIGH, HIGH);
          break;
        case 12: setLEDS(HIGH, HIGH, LOW, LOW);
          break;
        case 13: setLEDS(HIGH, HIGH, LOW, HIGH);
          break;
        case 14: setLEDS(HIGH, HIGH, HIGH, LOW);
          break;
        case 15: setLEDS(HIGH, HIGH, HIGH, HIGH);
          break;
        default: setLEDS(LOW, LOW, LOW, LOW); 
      }
    }
    else {
      Serial.println("ERROR");
    } // if else end
  } // if end
} // loop end

int getCharacter() {
  int data = -1;
  data = Serial.read();
  data = checkAndConvert(data);
  if (data != -1) {
    data = data;
  }
  return data;
}
int checkAndConvert(int d) {
  int tempD = -1;
  if (d > 47 && d < 56) {
    tempD = d - 48;
  }
  return tempD;
}

void setLEDS(int b3, int b2, int b1, int b0) {
  digitalWrite(13, b3);
  digitalWrite(12, b2);
  digitalWrite(11, b1);
  digitalWrite(10, b0);
}


