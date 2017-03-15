//Prototypes
int getCharacter();
int checkAndConvert(int v);
void setLEDS(int b2, int b1, int b0);

void setup() {
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
        case 0 : setLEDS(LOW,LOW,LOW);break;
        case 1 : setLEDS(LOW,LOW,HIGH);break; 


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
  if (v > 47 && v < 56) {
    tempV = v - 48;
  }
  return (tempV);
}
void setLEDS(int b2, int b1, int b0){
  digitalWrite(11,b0);
  digitalWrite(12,b1);
  digitalWrite(13,b2);
}

