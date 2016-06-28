/********************************************************
** Download from:                                      **
** http://www.alhin.de/arduino/index.php?n=53          **
********************************************************/

#include <AH_74HC595.h>

#define SER_Pin   4   //Serial data input
#define RCLK_Pin  3   //Register clock
#define SRCLK_Pin 2   //Shift register clock

//Initialisation
AH_74HC595 seven_segment(SER_Pin, RCLK_Pin, SRCLK_Pin); 

void setup(){
// Serial.begin(9600);
 seven_segment.clear();
}

void loop(){
 for (int i=0;i<10;i++){
   seven_segment.showNumber(i);
   delay(500);
 }
 seven_segment.clear();
 delay(1000);
 seven_segment.setPoint(true);
 delay(1000);
 seven_segment.setPoint(false);    
}

