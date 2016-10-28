void setup() {
  size(400, 400);
}
void draw() {
  background(#DE14D1);
  fill(#D62727);
  ellipse(200, 250, 50, 50);
  fill(#26F218);
  rect(40, 40, 70, 80);
  fill(#1B3FF0);
  rect(290, 40, 70, 80); 
  stroke(#F2EB0C);
  line(75, 80, 325, 80);
  line(75, 80, 200, 250);
  line(325, 80, 200, 250);
  print("Red = ",red(get(mouseX,mouseY)));
  print(" Green = ",green(get(mouseX,mouseY)));
  println(" Blue = ",blue(get(mouseX,mouseY)));
}