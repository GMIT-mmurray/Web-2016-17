//Prototypes
int getCharacter();
int checkAndConvert(int v);

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    // read the incoming byte:
    int squaredValue = getCharacter();
    if (squaredValue != -1) {
      Serial.print(" Squared Value ");
      Serial.println(squaredValue);
    } else {
      Serial.println(" INVALID CHARACTER");
    }

  }
}

int getCharacter() {
  int incomingByte;
  incomingByte = Serial.read();
  int convertedValue = checkAndConvert(incomingByte);
  if (convertedValue != -1) {
    convertedValue = convertedValue * convertedValue;
  }
  return (convertedValue);
}

int checkAndConvert(int v) {
  int tempV = -1;
  if (v > 47 && v < 58) {
    tempV = v - 48;
  }
  return (tempV);
}

