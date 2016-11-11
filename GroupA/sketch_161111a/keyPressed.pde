void keyPressed() {
  if (key == CODED) {
    if (keyCode == UP) {
      bat2Y = bat2Y-5;
      // Limit the right bat - Top
      if (bat2Y < 0) {
        bat2Y = 0;
      }
    }
    if (keyCode == DOWN) {
      bat2Y = bat2Y+5;
      // Limit the right bat - Bottom
      if (bat2Y+batH > height) {
       bat2Y = height-batH; 
      }
    }
  }
}