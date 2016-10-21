int x;
int y;
int dx = 1;
int dy = 4;

void setup() {
  size(500, 500);
  x = width/4;
  y = height/2;
}

void draw() {
  background (255);
  ellipse(x, y, 50, 50);

  if (keyPressed == true) {
    if (key =='d') {
      x = x + dx;
      y = y + dy;
      println("x = ", x, "y = ", y);
    }
  }
  if (x > width -25) {
    dx = dx * -1;
  }
  if (x < 25) {
    dx = dx * -1;
  }
  if (y > height-25) {
    dy = dy *-1;
  }
  if (y < 25) {
    dy = dy * -1;
  }
}