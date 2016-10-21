
PImage photo;
PImage photo1;
PFont font;

int xSize = 10;
int ySize = 10;

void setup() {
  size(780, 462);
  photo = loadImage("GroupBImage1.jpg");
  photo1 = loadImage("GroupBImage2.jpg");
  font = loadFont("CommercialScriptBT-Regular-48.vlw");
  textFont(font);
}

void draw() {
  background(photo);
  text(" Processing ..... ", 100,100);
  image(photo1, mouseX+40, mouseY+60,xSize,ySize);
  if (mousePressed == true) {
  xSize = xSize + 5;
  ySize = ySize + 3; 
  }
}