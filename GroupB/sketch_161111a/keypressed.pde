void keyPressed() {

  if (key == CODED) {
    if (keyCode == UP) {
      bat2Y = bat2Y-5;
      // Limit Right bat on top
      if (bat2Y < 0) {
        bat2Y = 0;
      }
    }
    if (keyCode == DOWN) {
      bat2Y = bat2Y+5;
      // Limit Right bat on Bottom
      if (bat2Y+batH > height) {
       bat2Y = height-batH; 
      }
    }
  }
}