int x = 50;
int y = 200;

void setup() {
  size(800, 600);
}

void draw() {
  background(255);
  fill(#F02424);
  rect(x, y, 500, 350);                     // outside border of house
  fill(#245CF0);
  rect(x+310, y-150, 30, 100);              //chimmney
  triangle(x, y, x+250, y-150, x+500, y);   // roof
  fill(#14A52D);
  rect(x+35, y+50, 100, 225);        // outside of left window
  rect(x+365, y+50, 100, 225);       // outside of right window
  strokeWeight(6);
  line(x+35, y+163, x+135, y+163);   // horizontal line in left window
  line(x+85, y+50, x+85,y+275 );     // vertical line in left window
  line(x+365, y+163, x+465, y+163);  // horizontal line in right window
  line(x+415, y+50, x+415, y+275);   // vertical line of right window
  rect(x+200, y+50, 100, 300);       // border of door
  ellipse(x+220, y+193, 15, 15);     // door knob
  arc(x+250, y-45, 60, 60, 0, PI);
  //y = y - 1;                        
  // x = x + 1;                      // Moves house to the right and stops
  //if (x+500 >= 800) {
  //  noLoop();
  //} */
  x = x -1;                          // Moves house to the left and stops
  if (x <= 0) {
    noLoop();
  }
  println(" The value of x is ",x, " and the y value is ",y);
}