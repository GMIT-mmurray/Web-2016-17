int getCharacter(void);
int checkAndConvert(int d);
void setLEDS(int b2, int b1, int b0);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  int rawValue = 0;
  if (Serial.available() > 0) {
    rawValue = getCharacter();
    if (rawValue != -1) {
      Serial.print("Value  = ");
      Serial.println(rawValue);
      switch (rawValue) {
        case 0: setLEDS(LOW,LOW,LOW);
          break;
        case 1: setLEDS(LOW,LOW,HIGH);
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

void setLEDS(int b2, int b1, int b0) {
  if (b0 == LOW){
    digitalWrite(11,LOW);
  }else {
    digitalWrite(11,HIGH);
  }
  
}


