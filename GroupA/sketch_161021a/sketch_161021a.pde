PImage photo;
PImage photo1;
PFont font;

int xSize = 10;
int ySize = 10;

void setup() {
  size(1280, 853);
  photo = loadImage("GroupAProcessing.jpg");
  photo1 = loadImage("GroupASmall.jpg");
  font = loadFont("BlackadderITC-Regular-48.vlw");
  textFont(font);
}

void draw() {
  background(photo);
  text("hello processing",150,80);
  image(photo1, mouseX, mouseY, xSize, ySize);
  if (mousePressed == true) {
    xSize = xSize+5;
    ySize = ySize+5;
  }
}