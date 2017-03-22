int getCharacters();
int checkAndConvert(int v);
void setLEDS(int b3, int b2, int b1, int b0);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  // make 13,12,11,10 outputs
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sValue;
  if (Serial.available() > 0) {
    sValue = getCharacters();
    if (sValue != -1) {
      Serial.print(" Value ");
      Serial.println(sValue);
      switch (sValue) {
        case  0: setLEDS(LOW, LOW, LOW, LOW);
          break;
        case  1: setLEDS(LOW, LOW, LOW, HIGH);
          break;
        case  2: setLEDS(LOW, LOW, HIGH, LOW);
          break;
        case  3: setLEDS(LOW, LOW, HIGH, HIGH);
          break;
        case  4: setLEDS(LOW, HIGH, LOW, LOW);
          break;
        case  5: setLEDS(LOW, HIGH, LOW, HIGH);
          break;
        case  6: setLEDS(LOW, HIGH, HIGH, LOW);
          break;
        case  7: setLEDS(LOW, HIGH, HIGH, HIGH);
          break;
        case  8: setLEDS(HIGH, LOW, LOW, LOW);
          break;
        case  9: setLEDS(HIGH, LOW, LOW, HIGH);
          break;
        case  0xa: setLEDS(HIGH, LOW, HIGH, LOW);
          break;
        case  0xb: setLEDS(HIGH, LOW, HIGH, HIGH);
          break;
        case  0xc: setLEDS(HIGH, HIGH, LOW, LOW);
          break;
        case  0xd: setLEDS(HIGH, HIGH, LOW, HIGH);
          break;
        case  0xe: setLEDS(HIGH, HIGH, HIGH, LOW);
          break;
        case  0xf: setLEDS(HIGH, HIGH, HIGH, HIGH);
          break;
      }

    }
    else {
      Serial.println(" Not a valid character ");
    }
  }
}

int getCharacters() {
  int returnedValue;
  int data;
  returnedValue = Serial.read();
  data = checkAndConvert(returnedValue);
  if (data != -1) {
    data = data;
  }
  return (data);
}
int checkAndConvert(int v) {
  int tempV = -1;
  if (v > 47 && v < 58) {  // number 0 .... 9
    tempV = v - 0x30;
  } else if (v > 0x40 && v < 71) { // A .... F
    tempV = v - 55;
  } else if (v > 96 && v < 103) {
    tempV = v - 87;
  }
  return (tempV);
}

void setLEDS(int b3,int b2, int b1, int b0) {
  digitalWrite(10, b0);
  digitalWrite(11, b1);
  digitalWrite(12, b2);
  digitalWrite(13, b3);
}
