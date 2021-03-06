
/*
 Stepper Motor Control - one revolution

 This program drives a unipolar or bipolar stepper motor.
 The motor is attached to digital pins 8 - 11 of the Arduino.

 The motor should revolve one revolution in one direction, then
 one revolution in the other direction.


 Created 11 Mar. 2007
 Modified 30 Nov. 2009
 by Tom Igoe

 */

#include <Stepper.h>

const int stepsPerRevolution = 200;  // change this to fit the number of steps per revolution
// for your motor
int i=0;
int counter=0;
// initialize the stepper library on pins 8 through 11:
Stepper myStepper(stepsPerRevolution, 7, 8, 12, 13);

void setup() {
  // set the speed at 60 rpm:
  myStepper.setSpeed(5);
  // initialize the serial port:
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
}

void loop() {
  // step one revolution  in one direction:
  if(counter==0){
  Serial.println("clockwise");
  myStepper.step(stepsPerRevolution);
  //delay(500);
  Serial.println("counterclockwise");
  myStepper.step(-stepsPerRevolution);
  //delay(500);
 digitalWrite(2,1);
                    digitalWrite(3,0);

                    
  if(Serial.available())
{
  switch(Serial.read())
     {
      case'0': {  //for(i=0;i<=3;i++)
                   {
                    //Serial.println("clockwise");
                    //myStepper.step(stepsPerRevolution);
                    //delay(500);
                    //Serial.println("counterclockwise");
                    //myStepper.step(-stepsPerRevolution);
                    Serial.println("it works");
                    delay(200000);
                    counter=1;
                    digitalWrite(2,1);
                    digitalWrite(3,1);
                   }
                  break;
                }
      default: break;
      }
     }}
  

  // step one revolution in the other direction:
  
}

