void setup() {
  size(400, 400);
}
void draw() {
  background(#2F10E5);
  fill(#49C2CE);
  rect(0, 0, 50, 50);
  fill(#CE49C8);
  ellipse(200, 200, 50, 50);
  fill(#3D7C11);
  rect(250, 250, 70, 70);
  print(" Red ", red(get(mouseX, mouseY)));
  print(" Green ", green(get(mouseX, mouseY)));
  println(" Blue ", blue(get(mouseX, mouseY)));
}