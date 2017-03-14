int getCharacter(void);
int checkAndConvert(int d);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  int rawValue = 0;
  if (Serial.available() > 0) {
    rawValue = getCharacter();
    if (rawValue != -1) {
    Serial.print("Value Squares = ");
    Serial.println(rawValue);
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
    data = data*data;
    }
   return data; 
}
int checkAndConvert(int d) {
  int tempD = -1;
  if (d > 47 && d < 58) {
     tempD = d-48;
  }
  return tempD;
}


