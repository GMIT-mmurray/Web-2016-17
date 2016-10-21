int x;
int y;
int dx = 2;
int dy = 1;

void setup() {
  size(400, 400);
  x = width/2;
  y = height/2;
}

void draw() {
  background(255);
  ellipse(x, y, 50, 50);
  if (keyPressed == true) {
    if (key == 'd'){
    x = x + dx;
    y = y + dy;
    }
  }
  println("The value X = ", x, " ---", "The value of Y = ", y);
  if (x > width-25) {
    dx = dx * -1;
  }
  if (x < 25) {
    dx = dx * -1;
  }


  if (y > height-25) {
    dy = dy * -1;
  }
  if (y < 25) {
    dy = dy * -1;
  }
}