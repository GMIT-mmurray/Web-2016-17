int getCharacters();
int checkAndConvert(int v);
void setLEDS(int b2, int b1, int b0);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  // make 13,12,11 outputs
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
        case  0: setLEDS(LOW, LOW, LOW);
          break;
        case  1: setLEDS(LOW, LOW, HIGH);
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
  if (v > 47 && v < 56) {
    tempV = v - 0x30;
  }
  return (tempV);
}

void setLEDS(int b2, int b1, int b0) {
  digitalWrite(11, b0);
  digitalWrite(12, b1);
  digitalWrite(13, b2);
}



