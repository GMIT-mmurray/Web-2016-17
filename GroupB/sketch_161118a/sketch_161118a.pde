float ballX = 0;
float ballY = 0;
float ballD = 30;
float ballR = ballD/2;

float batX = 200;
float batY = 100;
float batW = 200;
float batH = 300;
float distance; 

void setup() {
  size(600, 600);
  noStroke();
}
void draw() {
  background(255);
  ballX = mouseX;
  ballY = mouseY;
  if (ballX < batX) {
    print(" On the Left");
    distance = dist(ballX, ballY, batX, ballY);
    println(" Dist = ", distance);
  } else if (ballX > batX+batW) {
    print(" On the Right");
    distance = dist(ballX, ballY, batX+batW, ballY);
    println(" Dist = ", distance);
  }else if (ballY < batY) {
    print(" On the Top");
    distance = dist(ballX, ballY, ballX, batY);
    println(" Dist = ", distance);
  }else if (ballY > batY+batH) {
    print(" On the Bottom");
    distance = dist(ballX, ballY, ballX, batY+batH);
    println(" Dist = ", distance);
  }

  fill(0);
  ellipse(ballX, ballY, ballD, ballD);
  fill(127, 150);
  rect (batX, batY, batW, batH);
}