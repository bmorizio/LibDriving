#ifndef LibDrive_h             // if it has not yet been defined 
#define LibDrive_h            //define it!
#include "Arduino.h"         //includes Arduino commands 

class LibDrive
{
  public:

      LibDrive(int rightForward, int rightBackward, int leftForward, 
                int leftBackward, int pwmRight, int pwmLeft);           //setting up pins 

      void speedy();
      void slow();
      void turnright();
      void turnleft();

      int rtF, rtB, ltF, ltB, pwmR, pwmL;       //making new names for the variables 
      

  private:
  
};

#endif
