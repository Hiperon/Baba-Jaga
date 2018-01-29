#include <Adafruit_Sensor.h>
#include <Adafruit_ADXL345_U.h>

#include <SD.h>
#define SD_ChipSelectPin 4
#define BUTTON_PIN 2
#include "TMRpcm.h"
#include <SPI.h>
#include <Wire.h>

TMRpcm tmrpcm;

long randNumber;
int pirPIN = BUTTON_PIN;
int pirState = LOW;             // we start, assuming no motion detected
int val = 0;                    // variable for reading the pin status


void playMusc(){
  
  //Serial.println("playing from button!");
  tmrpcm.setVolume(6);
  char buffer[10];
   Serial.println("zero!");
 sprintf(buffer, "test.wav");
  tmrpcm.play(buffer);
  Serial.println("dwa  !");
  delay(10000);
}

void setup(){

 randomSeed(analogRead(0));
 g
  tmrpcm.speakerPin = 9;  
  Serial.begin(9600);
  delay(500);   
  if (!SD.begin(SD_ChipSelectPin)) {
    Serial.println("SD fail");
   return;
  playMusc();
  }


}
void loop(){
  //Serial.println("playing from button!");
    //Serial.println("playing from button!");
  val = digitalRead(pirPIN);  // read input value
      if (val == HIGH) {            // check if the input is HIGH
           tmrpcm.setVolume(6);
          char buffer[10];
  Serial.println("zero!");
  sprintf(buffer, "test.wav");
  tmrpcm.play(buffer);
  Serial.println("dwa  !");
  delay(10000);
      }
  //delay(1000);               // wait for a second  
}  


