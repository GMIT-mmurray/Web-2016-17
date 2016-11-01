PImage maze;
int x;
int y;

void setup() {
  size(484, 484);
  maze = loadImage("maze.png");
  x = width/2;
  y = height/2;
  frameRate(30);
}

void draw() {
  image(maze, 0, 0);
  fill(255, 0, 0); //Red
  noStroke();
  float r = red(get(x,y));
   if (r < 255) {
     x = width/2;
     y = height/2;
   }
 
  ellipse(x, y, 5, 5);
  println( " Mouse X = ",mouseX, "Mouse Y = ", mouseY);
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