float ballX = 0;
float ballY = 0;
float ballD = 30;
float ballR = ballD/2;

float batX = 200;
float batY = 100;
float batW = 200;
float batH = 300;

boolean onLeft = false;
boolean onRight = false;
boolean onTop = false;
boolean onBottom = false;
float distance = 0;

void setup() {
  size(600, 600);
  noStroke();
}

void draw() {
  background(255);
  ballX = mouseX;
  ballY = mouseY;
  if (ballX < batX) {
    onLeft = true;  
    print("onLeft");
    distance = dist(ballX, ballY, batX, ballY);
    println(" Distance = ", distance);
  }
  if (ballX > batX+batW) {
    onRight = true; 
    print("onRight");
    distance = dist(ballX, ballY, batX+batW, ballY);
    println(" Distance = ", distance);
  }
  if (ballY < batY) {
    onTop = true; 
    print("onTop");
    distance = dist(ballX, ballY, ballX, batY);
    println(" Distance = ", distance);
  }
  if (ballY > batY+batH) {
    onBottom = true; 
    print("onBottom");
    distance = dist(ballX, ballY, ballX, batY+batH);
    println(" Distance = ", distance);
  }

  fill(0, 150);
  ellipse(ballX, ballY, ballD, ballD);
  rect(batX, batY, batW, batH);
}