PImage maze;
int x;
int y;
int oldx;
int oldy;
void setup() {
  size(484, 484);
  maze = loadImage("30maze.png");
  x = width/2;
  y = height/2;
  frameRate(10);
}

void draw() {
  //background(255);
  image(maze, 0, 0);
  fill(255, 0, 0);
  noStroke();
  
  float colorValue =red(get(x, y));
  ellipse(x, y, 2, 2);
 
  if (keyPressed == true) {
    if (key == CODED) {
      if (keyCode == UP) {
        y = y-1;
      }
      if (keyCode == DOWN) {
        y = y+1;
      }
      if (keyCode == RIGHT) {
        x = x+1;
      }
      if (keyCode == LEFT) {
        x = x-1;
      }
    }
  } 
 
  if (colorValue < 255) {
    x = width/2;
    y = height/2;
  }
  println( " X = ", mouseX, "y = ", mouseY);
}