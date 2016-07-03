/********************************************************
** Download from:                                      **
** http://www.alhin.de/arduino/index.php?n=53          **
********************************************************/

#include <AH_74HC595.h>

#define SER_Pin 4   //Serial data input
#define RCLK_Pin 3  //Register clock
#define SRCLK_Pin 2 //Shift register clock

//Initialisation
AH_74HC595 shifter(SER_Pin, RCLK_Pin, SRCLK_Pin); 

void setup(){
// Serial.begin(9600);
 shifter.clear();
 shifter.setValue(B10000000);
 delay(1000);

}

void loop(){
 shifter.rotate();   //shift one time
 delay(500);

}

