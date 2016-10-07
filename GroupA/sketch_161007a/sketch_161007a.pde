int x = 25;
int d = 4;
float r, g, b;
float rB, gB, bB;

void setup() {
  size(600, 400);
}

void  draw() {
  background(rB, gB, bB);
  ellipse(x, height/2, 50, 50);
 
  if (mousePressed == false) {
    x = x + d;
  }

  if (x >= width-25) {
    d = d * -1;
    r = random(255);
    g = random(255);
    b = random(255);
    fill(r, g, b);
  }
  if ( x < 25) {
    d = d * -1;
    r = random(255);
    g = random(255);
    b = random(255);
    fill(r, g, b);
  }
  //if (mousePressed == true) {
  // rB = random(255);
  // gB = random(255);
  //bB = random(255);
  //  if(d == 0) {
  //    d = 4;
  //  } else
  //  if (d != 0) {
  //    d = 0;
  //  }
}