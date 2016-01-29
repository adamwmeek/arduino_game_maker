#include <SPI.h>
#include <TFTv2.h>

#include "splash.h"

void splashScreen(void){

//  noTone(52);
  Tft.fillRectangle(0,0,240,320,WHITE);
  Tft.drawString(":",110,110,15,CYAN);
  Tft.drawString("(",60,110,15,CYAN);
  delay(600);
    
  Tft.drawString(":",110,110,15,WHITE);
  Tft.drawString(";",110,95,15,CYAN);
  
  delay(300);
  
  Tft.drawString(";",110,95,15,WHITE);
  Tft.drawString(":",110,110,15,CYAN);
  
  tone(52,220,500);
//  delay(300);
//  tone(52,220,300);
  delay(600);
}
