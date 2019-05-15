#include "Arduino.h"
#include "LibDrive.h"

LibDrive::LibDrive(int rightForward, int rightBackward, int leftForward, 
                   int leftBackward, int pwmRight, int pwmLeft)
              {
                 pinMode(rightBackward, OUTPUT) ;        
                 pinMode(leftBackward, OUTPUT) ;
                 pinMode(rightForward, OUTPUT) ;
                 pinMode(leftForward, OUTPUT) ;     
                 pinMode(pwmRight, OUTPUT);
                 pinMode(pwmLeft, OUTPUT); 
                 rtF = rightForward;
                 rtB = rightBackward;
                 ltF = leftForward;
                 ltB = leftBackward;
                 pwmR = pwmRight;
                 pwmL = pwmLeft;
              }

   void LibDrive::speedy()
   {
    digitalWrite(rtF, HIGH) ;
    digitalWrite(ltF, HIGH) ;
    digitalWrite(rtB, LOW) ;
    digitalWrite(ltB, LOW) ;
    analogWrite(pwmR, 200) ; 
    analogWrite(pwmL, 200) ;
   }

   void LibDrive::slow()
   {
    digitalWrite(rtF, HIGH) ;
    digitalWrite(ltF, HIGH) ;
    digitalWrite(rtB, LOW) ;
    digitalWrite(ltB, LOW) ;
    analogWrite(pwmR, 70) ; 
    analogWrite(pwmL, 70) ;
   }

   void LibDrive::turnright()
   {
    digitalWrite(rtF, HIGH) ;
    digitalWrite(ltF, HIGH) ;
    digitalWrite(rtB, LOW) ;
    digitalWrite(ltB, LOW) ;
    analogWrite(pwmR, 200) ; 
    analogWrite(pwmL, 100) ;
   }

   void LibDrive::turnleft()
   {
    digitalWrite(rtF, HIGH) ;
    digitalWrite(ltF, HIGH) ;
    digitalWrite(rtB, LOW) ;
    digitalWrite(ltB, LOW) ;
    analogWrite(pwmR, 100) ; 
    analogWrite(pwmL, 200) ;
   }

   
