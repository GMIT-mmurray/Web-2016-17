import ddf.minim.*;
Minim minim;
AudioPlayer song1;
AudioPlayer song2;
AudioSample song3;

float ballX = 0;
float ballY = 0;
float batX = 200;
float batY = 100;
float batW = 200;
float batH = 250;
float ballD = 40;
float ballR = ballD/2;

boolean onLeft = false;
boolean onRight = false;
boolean onTop = false;
boolean onBottom = false;



void setup() {
  size(600, 600);
  minim = new Minim(this);
  song1 = minim.loadFile("song1.wav");
  song2 = minim.loadFile("song2.wav");
  song3 = minim.loadSample("song3.wav");
  // The following code goes into draw
  song1.play(); // play the song once
  song2.loop(); // Repeats the song
  song3.trigger(); // Plays a sample once
  song1.pause();   // Pauses song
}

void draw() {
   background(255);
  fill(189);
  rect(batX,batY,batW,batH);
  
  onLeft = false;
  onRight = false;
  onTop = false;
  onBottom = false;
  ballX = mouseX;
  ballY = mouseY;

  fill(255,0,0);
  ellipse(ballX,ballY,ballD,ballD);
  
  float testX = ballX;
  float testY = ballY;

  if (ballX < batX) {
    // On the left 
    testX = batX;
    onLeft = true;
  } else if (ballX > batX+batW) {
    // ON the right
    testX = batX+batW;
    onRight = true;
  }
  if (ballY < batY) {
    // On the top
    testY = batY;
    onTop = true;
  } else if (ballY > batY+batH) {
    // on the bottom
    testY = batY+batH;
    onBottom = true;
  }
  // Calculate the distance 
  float distance = dist(ballX, ballY, testX, testY);
 
  if (distance <= ballR && onLeft == true) {
    text("on the left ", 0, 300);
  }
  if (distance <= ballR && onRight == true) {
    text("on the Right ", 500, 300);
  }
  if (distance <= ballR && onTop == true) {
    text("on the Top ", 300, 30);
  }
  if (distance <= ballR && onBottom == true) {
    text("on the Bottom ", 300, 500);
  }
} 