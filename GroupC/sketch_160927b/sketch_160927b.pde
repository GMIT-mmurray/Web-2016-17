size(600,600);
fill(#F02424);
rect(50,200,500,350);   // outside border of house
fill(#245CF0);
rect(360,50,30,100);               //chimmney
triangle(50,200,300,50,550,200);   // roof
fill(#14A52D);
rect(85,250,100,225);   // outside of left window
rect(415,250,100,225);  // outside of right window
strokeWeight(6);
line(85,363,185,363);   // horizontal line in left window
line(135,250,135,475);  // vertical line in left window
line(415,363,515,363);  // horizontal line in right window
line(465,250,465,475);  // vertical line of right window
rect(250,250,100,300);  // border of door
ellipse(270,393,15,15); // door knob
arc(300, 155, 60, 60,0, PI);