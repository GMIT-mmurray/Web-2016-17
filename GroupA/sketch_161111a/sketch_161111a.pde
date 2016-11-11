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
int speedX = 3;
int speedY = 1;

void setup() {
  size(400,400);
  ballX = width/2;
  ballY = height/2;
}

void draw() {
  background(0);
  
  //Displaying the bats
  bat1Y=mouseY;
  rect(bat1X,bat1Y,batW,batH);
  rect(bat2X,bat2Y,batW,batH);
  ellipse(ballX,ballY,ballD,ballD);
  
  // Moving the ball
  ballX = ballX + speedX;
  ballY = ballY + speedY;
  
  // Bouncing the ball of the X & Y walls
  if (ballX < ballR || ballX > width-ballR) {
    speedX = speedX * -1;
  }
  if (ballY < ballR || ballY > height-ballR) {
     speedY = speedY * -1;
  }
  


}