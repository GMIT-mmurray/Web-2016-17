int x = 25;
int d = 4;
float r, g, b;
float r1, g1, b1;

void setup() {
  size(600, 400);
}

void draw() {
  background(r1, g1, b1);
  ellipse(x, height/2, 50, 50);

  if (mousePressed == false) {
    x = x + d;
  }
  if (x > width-25) {
    d = d * -1;
    r = random(255);
    g = random(255);
    b = random(255);
    fill(r, g, b);
  }

  if ( x < 25) {
    d =d * -1;
    r = random(255);
    g = random(255);
    b = random(255);
    fill(r, g, b);
  }

  //  if (mousePressed == true) {
  //    r1 = random(255);
  //    g1 = random(255);
  //    b1 = random(255);
  //  }
}