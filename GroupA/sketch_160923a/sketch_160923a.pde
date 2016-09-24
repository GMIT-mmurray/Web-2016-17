
size(400,400);
rectMode(CORNER);
rect(30, 20, 155, 155, 6, 10, 19, 28);
rectMode(CORNERS);
rect(200,200,350,350);
rectMode(RADIUS);
rect(300,100,50,70,6, 10, 19, 28);
rectMode(CENTER);
rect(100,300,100,140,6, 10, 19, 28);
triangle(275,200,200,350,350,350);
noFill();
triangle(200,200,275,350,350,200);
arc(150, 155, 180, 180, PI+QUARTER_PI,TWO_PI+HALF_PI);