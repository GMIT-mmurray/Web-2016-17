void ifs() {
    if (ballX < batX && ballY > batY && ballY < batY+batH) {
    print(" On the Left");
    distance = dist(ballX, ballY, batX, ballY);
    println(" Dist = ", distance);
    if (distance < ballR){
      textSize(45);
      text("Hit ",200,100);
    }
  } else if (ballX > batX+batW && ballY >batY && ballY  <batY+batH ) {
    print(" On the Right");
    distance = dist(ballX, ballY, batX+batW, ballY);
    println(" Dist = ", distance);
    if (distance < ballR){
      textSize(45);
      text("Hit ",200,100);
    }
  }else if (ballY < batY && ballX > batX && ballX < batX+batW) {
    print(" On the Top");
    distance = dist(ballX, ballY, ballX, batY);
    println(" Dist = ", distance);
    if (distance < ballR){
      textSize(45);
      text("Hit ",200,100);
    }
  }else if (ballY > batY+batH && ballX > batX && ballX <batX+batW) {
    print(" On the Bottom");
    distance = dist(ballX, ballY, ballX, batY+batH);
    println(" Dist = ", distance);
    if (distance < ballR){
      textSize(45);
      text("Hit ",200,100);
    }
  }
}