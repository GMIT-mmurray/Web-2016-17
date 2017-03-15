int getCharacters();
int checkAndConvert(int v);
void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sValue;
  if (Serial.available() > 0){
    sValue=getCharacters();
    if (sValue != -1) {
      Serial.print(" Squared Value ");
      Serial.println(sValue);
 //     Serial.write(sValue);
 //     Serial.write(13);
    }
    else {
      Serial.println(" Not a valid character ");
    }
  }
}

int getCharacters() {
    int returnedValue;
    int data;
    returnedValue=Serial.read();
    data=checkAndConvert(returnedValue);
    if (data != -1) {
      data = data*data;
    }
    return(data);
}
int checkAndConvert(int v) {
  int tempV = -1;
  if (v > 47 && v < 58) {
    tempV = v-0x30;
  }
  return (tempV);
}

