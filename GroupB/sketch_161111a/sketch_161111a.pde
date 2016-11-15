int bat1X = 30;
int bat1Y = 50;
int bat2X = 350;
int bat2Y = 50;
int batW = 20;
int batH = 60;
int ballX;
int ballY;
int ballD = 20;
int ballR = ballD/2;
int velX = 3;
int velY = 1;

void setup() {
  size(400, 400);
  ballX = width/2;
  ballY = height/2;
}

void draw() {
  background(0);

  // Display the bats
  bat1Y = mouseY;
  if (bat1Y+batH > height) {
    bat1Y = height-batH;
  }
  rect(bat1X, bat1Y, batW, batH);
  rect(bat2X, bat2Y, batW, batH);
  ellipse(ballX, ballY, ballD, ballD);

  // Move the ball
  ballX = ballX + velX;
  ballY = ballY + velY;

  // Bounce the ball of the screen
  if (ballX < ballR || ballX > width-ballR) {
    velX = velX * -1;
  }
  if (ballY < ballR || ballY > height-ballR) {
    velY = velY * -1;
  }

  // Bounce ball of the Right bat -- simple version
  if (ballY >bat2Y && ballY < bat2Y+batH && ballX+ballR > bat2X) {
    velX = velX *-1;
  }
  // Bounce the ball of the Left bat -- simple version
  if (ballY > bat1Y && ballY < bat1Y+batH && ballX-ballR < bat1X+batW) {
    velX = velX *-1;
  }
}