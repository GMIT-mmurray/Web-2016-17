void keyPressed() {
  if (key == CODED) {
    if (keyCode == UP) {
     batY2 = batY2-4;
     if(batY2 < 0) {
      batY2 = 0; 
     }
    }
    if (keyCode == DOWN) {
      batY2 = batY2+4;
      if (batY2+batL > height) {
       batY2 = height-batL;
      }
    }
  }
}