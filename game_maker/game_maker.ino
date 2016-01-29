#include <SPI.h>
#include <TFTv2.h>

#include "splash.h"
#include "selector.h"
#include "editor.h"

#define SPK_PIN 52

void setup() {

  pinMode(SPK_PIN, OUTPUT);

  Tft.TFTinit();
  splashScreen();
  drawSelector(false);

//  delay(1000);
//  updateSel(false,true,false,false,false,false);
//
//  delay(1000);
//  updateSel(true,false,false,false,false,false);
//  
//  delay(1000);
//  updateSel(true,false,false,false,false,false);
//
//  delay(1000);
//  updateSel(false,true,false,false,false,false);
//
//  delay(1000);
//  updateSel(true,false,false,false,false,false);

//  delay(500);
//  //updateSel(false,false,false,false,true,false);
//  drawEditor();
}

void loop() {

//  int frequency = 40;
//
//  for(int i=0;i<1000;i++){
//    tone(SPK_PIN,frequency,30);
//    frequency+=4;
//    delay(30);
//  }

}
