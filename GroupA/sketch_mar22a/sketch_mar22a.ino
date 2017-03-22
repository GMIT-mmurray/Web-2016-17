//Prototypes
int getCharacter();
int checkAndConvert(int v);
void setLEDS(int b3, int b2, int b1, int b0);

void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    // read the incoming byte:
    int Value = getCharacter();
    if (Value != -1) {
      Serial.print("  Value ");
      Serial.println(Value);
      switch (Value) {
        case 0 : setLEDS(LOW, LOW, LOW, LOW); break;
        case 1 : setLEDS(LOW, LOW, LOW, HIGH); break;
        case 2 : setLEDS(LOW, LOW, HIGH, LOW); break;
        case 3 : setLEDS(LOW, LOW, HIGH, HIGH); break;
        case 4 : setLEDS(LOW, HIGH, LOW, LOW); break;
        case 5 : setLEDS(LOW, HIGH, LOW, HIGH); break;
        case 6 : setLEDS(LOW, HIGH, HIGH, LOW); break;
        case 7 : setLEDS(LOW, HIGH, HIGH, HIGH); break;
        case 8 : setLEDS(HIGH, LOW, LOW, LOW); break;
        case 9 : setLEDS(HIGH, LOW, LOW, HIGH); break;
        case 0xa : setLEDS(HIGH, LOW, HIGH, LOW); break;
        case 11 : setLEDS(HIGH, LOW, HIGH, HIGH); break;
        case 12 : setLEDS(HIGH, HIGH, LOW, LOW); break;
        case 13 : setLEDS(HIGH, HIGH, LOW, HIGH); break;
        case 14 : setLEDS(HIGH, HIGH, HIGH, LOW); break;
        case 15 : setLEDS(HIGH, HIGH, HIGH, HIGH); break;
      }

    } else {
      Serial.println(" INVALID CHARACTER");
    }

  }
}

int getCharacter() {
  int incomingByte;
  incomingByte = Serial.read();
  int convertedValue = checkAndConvert(incomingByte);
  return (convertedValue);
}

int checkAndConvert(int v) {
  int tempV = -1;
  if (v > 47 && v < 58) {
    tempV = v - 48;
  } else if (v > 64 && v < 71) {
    tempV = v - 55;
  } else if (v > 96 && v < 103) {
    tempV = v - 87;
  }
  return (tempV);
}
void setLEDS(int b3, int b2, int b1, int b0) {
  digitalWrite(10, b0);
  digitalWrite(11, b1);
  digitalWrite(12, b2);
  digitalWrite(13, b3);
}
