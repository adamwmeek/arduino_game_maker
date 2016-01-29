#include <SPI.h>
#include <TFTv2.h>

#include "selector.h"

bool foundGames[6] = {true, true, true, true, false, false};

unsigned int colors[6] = {RED, ORANGE, YELLOW, GREEN, BLUE, RED & BLUE};

unsigned char selected =0;
bool initSel = false;
bool lastSel;


void drawSelector(bool bg){

  //TODO: check if files exist

  initSel = false;

  if(bg == false){
    Tft.fillRectangle(0,0,240,320,WHITE);
  }

  unsigned char x = 205;

  for(int i =0; i < 6; i++){

    if(foundGames[i] == true){
      Tft.fillRectangle(x,0,30,320,colors[i]);
    }
    else{
      Tft.fillRectangle(x,0,30,320,GRAY1);
    }

    x -= 40;
  }

  Tft.fillCircle(220,15,10,WHITE);
  selected = 0;

  drawButtons();

  initSel = true;
  lastSel = foundGames[selected];
}

void drawButtons(){

  if(initSel == false){
    Tft.fillCircle(42,277,35,BLACK);
    Tft.fillCircle(122,277,35,BLACK);
  }
    Tft.fillCircle(44,275,35,GRAY2);
    Tft.fillCircle(124,275,35,GRAY2);

  if(foundGames[selected] == true){

    
    //delete icon
    Tft.fillCircle(124,275,20,WHITE);
    Tft.fillCircle(124,275,15,GRAY2);
    Tft.fillRectangle(121,260,5,30,WHITE);

    //play icon
    int x1 = 24;
    int x2 = 64;
    int y1 = 260;
    int y2 = 300;
    
    for(int i=0; i<20; i++){
     Tft.drawTriangle(x1,y1,x2,y1,44,y2,WHITE);
     x1++;
     x2--;
     y1++;
     y2--; 
    }
     
  }
  else{

    // top-down (2d arrow)
    Tft.fillRectangle(121,255,10,40,WHITE);
    Tft.fillRectangle(104,271,40,10,WHITE);

    // scroller (1d arrow)
    Tft.fillRectangle(40,255,10,40,WHITE);
    
  }
}

void updateSel(bool up, bool dn, bool lf, bool rg, bool but1, bool but2){

  if (up){

    unsigned char x = 220 - (selected * 40);

    if(lastSel){
      Tft.fillCircle(x,15,10,colors[selected]); 
    }
    else{
      Tft.fillCircle(x,15,10,GRAY1);
    }
    
    
    if(selected == 0){
      selected = 5;
      x=20;
    }
    else{
      selected--;
      x+=40;
    }
    
    Tft.fillCircle(x,15,10,WHITE);

    if(lastSel != foundGames[selected]){
      lastSel = foundGames[selected];
      drawButtons();
    }
  }

  if (dn){

    unsigned char x = 220 - (selected * 40);

    if(lastSel){
      Tft.fillCircle(x,15,10,colors[selected]); 
    }
    else{
      Tft.fillCircle(x,15,10,GRAY1);
    }

    if(selected == 5){
      selected = 0;
      x=220;
    }
    else{
      selected++;
      x-=40;
    }
    
    Tft.fillCircle(x,15,10,WHITE);

    if(lastSel != foundGames[selected]){
      lastSel = foundGames[selected];
      drawButtons();
    }
  }

  if(but1){

    if(lastSel){

      //play level
    }
    else{
      //create scroller
    }
  }

   if(but2){

    if(lastSel){

      //delete level
    }
    else{
      //create top-down
    }
  }
}

