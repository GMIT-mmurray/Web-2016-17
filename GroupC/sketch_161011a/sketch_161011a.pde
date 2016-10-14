int x = 25;
int d = 1;
float R, G, B;

void setup() { 
  size(400, 200);
}

void draw() {
  background(255);
  ellipse(x, height/2, 50, 50);
  
  if (mousePressed == false) {
    x = x + d;    // moves the ball
  }
  
  if (x > width-25) {
    d = d * -1;
    R = random(255);
    G = random(255);
    B = random(255);
    fill(R, G, B);
  }
  if (x < 25) {
    d = d * -1;
    R = random(255);
    G = random(255);
    B = random(255);
    fill(R, G, B);
  }
}