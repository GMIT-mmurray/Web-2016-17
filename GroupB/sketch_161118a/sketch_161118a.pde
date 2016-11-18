import ddf.minim.*;
Minim minim;
AudioPlayer song; // songs
AudioSample song1; // short sound

float ballX = 0;
float ballY = 0;
float ballD = 30;
float ballR = ballD/2;

float batX = 200;
float batY = 100;
float batW = 200;
float batH = 300;
float distance; 

void setup() {
  size(600, 600);
  noStroke();
  minim = new Minim(this);
  song = minim.loadFile("mysong.wav"); //Add the song using sketck/add file
  // these function calls go into draw
  song.play();
  song.loop();
  song.pause();
  //Goes into setup
  song1 = minim.loadSample("short wav file");//Add the song using sketck/add file
  // goes into draw 
  song1.trigger();
}
void draw() {
  background(255);
  ballX = mouseX;
  ballY = mouseY;
  ifs();
  drawShapes();

}