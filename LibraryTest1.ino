#include "LibDrive.h"

LibDrive LD(6, 9, 3, 5, 11, 10);

void setup() {}

void loop() 
{
  
  LD.speedy();
  delay(2000);
  
  LD.slow();
  delay(2000);
  
  LD.turnright();
  delay(2000);
  
  LD.turnleft();
  delay(2000);
  
}
