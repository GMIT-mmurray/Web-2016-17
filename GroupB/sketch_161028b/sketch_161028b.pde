PImage maze;
int x;
int y;
void setup() {
  size(484, 484);
  maze = loadImage("maze.png");
  x = width/2;
  y = height/2;
}

void draw() {
  background(255);
  image(maze, 0, 0);
  fill(255, 0, 0);
  noStroke();
  ellipse(x, y, 5, 5);
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
}