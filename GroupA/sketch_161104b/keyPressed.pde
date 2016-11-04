void keyPressed() {
  if (key == CODED) {
    if (keyCode == UP) {
      bat2Y = bat2Y-5;
    }
    if (keyCode == DOWN) {
      bat2Y = bat2Y+5;
    }
  }
}