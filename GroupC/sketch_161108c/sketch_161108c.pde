int batX1 = 30;
int batY1 = 50;
int batX2 = 350;
int batY2 = 50;
int batW = 20;
int batL = 70;
int ballX;
int ballY;
int ballD = 20;
int speedX = 3;
int speedY = 1;

void setup() {
  size(400,400);
  ballX = width/2;
  ballY = height/2;
}

void draw() {
  background(0);
  batY1 = mouseY;
  rect(batX1,batY1,batW,batL);
  rect(batX2,batY2,batW,batL);
  ellipse(ballX,ballY,ballD,ballD);
}