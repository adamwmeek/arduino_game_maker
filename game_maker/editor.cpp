#include <SPI.h>
#include <TFTv2.h>

#include "editor.h"

#define GRID_SIZE 25

void drawEditor(){

  Tft.fillRectangle(0,0,240,320,WHITE);
  
  Tft.fillRectangle(200,0,40,320,GRAY1);
  
    //arrows icon
    int x1 = 215;
    int x2 = 235;
    int y1 = 290;
    int y2 = 310;
    
    for(int i=0; i<10; i++){
     Tft.drawTriangle(x1,y1,x2,y1,225,y2,WHITE);
     x1++;
     x2--;
     y1++;
     y2--; 
    }

    x1 = 215;
    x2 = 235;
    y1 = 30;
    y2 = 10;

    for(int i=0; i<10; i++){
      Tft.drawTriangle(225,y2,x1,y1,x2,y1,WHITE);
      x1++;
      x2--;
      y1--;
      y2++;
    }

    Tft.fillCircle(42,277,35,BLACK);
    Tft.fillCircle(122,277,35,BLACK);

    Tft.fillCircle(44,275,35,GRAY2);
    Tft.fillCircle(124,275,35,GRAY2);

    //play icon
    x1 = 24;
    x2 = 64;
    y1 = 260;
    y2 = 300;
    
    for(int i=0; i<20; i++){
     Tft.drawTriangle(x1,y1,x2,y1,44,y2,WHITE);
     x1++;
     x2--;
     y1++;
     y2--; 
    }

   //draw grid
   for(unsigned int y=0;y<240;y+=GRID_SIZE){
    Tft.drawLine(0,y,200,y,BLACK);
   }

   for(unsigned int x=0;x<200;x+=GRID_SIZE){
    Tft.drawLine(x,0,x,225,BLACK);
   }
}

void drawBar(){
//  Tft.fillRectangle(
}
void updateEdit(){
}
