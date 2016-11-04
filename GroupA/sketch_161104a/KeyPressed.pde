void keyPressed() {
  if (key == CODED) {
    if (keyCode == UP) {
      y = y-1;
    }
    if (keyCode == DOWN) {
      y = y+1;
    }
    if (keyCode == RIGHT) {
      x = x+1;
    }
    if (keyCode == LEFT) {
      x = x-1;
    }
  }
}