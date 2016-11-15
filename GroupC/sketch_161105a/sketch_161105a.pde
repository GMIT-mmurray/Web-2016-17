int batX1 = 30;
int batY1 = 50;
int batX2 = 350;
int batY2 = 50;
int batW = 20;
int batL = 70;
int ballX;
int ballY;
int ballD = 20;
int ballR = ballD/2;
int speedX = 3;
int speedY = 1;

void setup() {
  size(400, 400);
  ballX = width/2;
  ballY = height/2;
}

void draw() {
  background(0);
  batY1 = mouseY;
  // keep bat 1 within range
  if (batY1+batL > height) {
    batY1 = height-batL;
  }
  // Draw bats and ball
  rect(batX1, batY1, batW, batL);
  rect(batX2, batY2, batW, batL);
  ellipse(ballX, ballY, ballD, ballD);
  // move the ball
  ballX = ballX + speedX;
  ballY = ballY + speedY;
  // detect ball hitting right bat
  if (ballY > batY2 && ballY < batY2+batL && ballX+ballR > batX2) {
    speedX = speedX*-1;
  }
  // detect ball hitting left bat
  if (ballY > batY1 && ballY < batY1+batL && ballX-ballR < batX1+batW) {
    speedX = speedX * -1;
  }
  // bouncing ball off left and right walls
  if (ballX > width-ballR || ballX < ballR) {
    speedX = speedX*-1;
  }
  // bouncing ball off top and bottom walls
  if (ballY > height-ballR || ballY < ballR) {
    speedY = speedY*-1;
  }
  if (keyPressed == true && key == CODED) {
    if (keyCode == UP) {
      batY2 = batY2-4;
      if (batY2 < 0) {
        batY2 = 0;
      }
    }
    if (keyCode == DOWN) {
      batY2 = batY2+4;
      if (batY2+batL > height) {
        batY2 = height-batL;
      }
    }
  }
}