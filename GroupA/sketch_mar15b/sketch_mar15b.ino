void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(getAnalogAverage());
}

float getAnalogAverage() {
  float val1 = analogRead(A0);
  float val2 = analogRead(A1);
  float val3 = analogRead(A2);
  float val4 = analogRead(A3);
  return ((val1+val2+val3+val4)/4);
}

