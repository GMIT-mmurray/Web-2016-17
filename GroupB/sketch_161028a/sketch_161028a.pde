void setup() {
  size(400, 400);
}
void draw() {
  background(#E03030);
  fill(#E030E0);
  rect(50, 80, 80, 100);
  fill(#3069E0);
  rect(270, 80, 80, 100);
  fill(#25E315);
  ellipse(200, 250, 80, 100);
  stroke(#34F5F0);
  line(90, 130, 310, 130);
  stroke(#F793AC);
  line(90, 130, 200, 250);
  stroke(#DDE340);
  line(310, 130, 200, 250);
  print ( " RED = ", red(get(mouseX, mouseY)));
  print ( " GREEN  = ", green(get(mouseX, mouseY)));
  println ( " BLUE = ", blue(get(mouseX, mouseY)));
}