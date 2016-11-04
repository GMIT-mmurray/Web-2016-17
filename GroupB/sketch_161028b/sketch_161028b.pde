PImage maze;
int x;
int y;
void setup() {
  size(484, 484);
  maze = loadImage("maze.png");
  x = width/2;
  y = height/2;
  background(255);
}

void draw() {
  image(maze, 0, 0);
  fill(255, 0, 0);
  noStroke();
  float bValue = blue(get(x, y));
//  println(" Blue Value", bValue);
  println ("MouseX = ",mouseX," MouseY = ", mouseY);
  if (bValue < 255) {
    x = width/2;
    y = height/2;
  }
  ellipse(x, y, 5, 5);
  
  if(x>244 && x<264 && y>0 && y<17) {
    text(" I am free ", width/2,height/2);
    noLoop();
  }
}