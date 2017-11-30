/*
** CE 4000/ ME 490
** Q1-3 2017-18
** ASSIGNMENT: ASME Student Design Competition
** AUTHOR: Seth LiaBraaten
** DATE: 10/26/17
** PROVIDES: an arduino output module for four PWM drive motors within a
** mecanum drivetrain, parsing inputs from a three axis gimbal via PWM
** FHT VERSION: 1.2 09/05/17
*/

#include <Arduino.h>
#include <Servo.h>

//INPUT Y AXIS (STRAIGHT)
#define ControllerY 2
//INPUT X AXIS (STRAFE)
#define ControllerX 3
//INPUT Z AXIS (ROTATE)
#define ControllerZ 4

//OUTPUT TO RIGHT FRONT MOTOR
#define RightFrontMotor 10
//OUTPUT TO RIGHT REAR MOTOR
#define RightRearMotor 11
//OUTPUT TO LEFT FRONT MOTOR
#define LeftFrontMotor 12
//OUTPUT TO LEFT REAR MOTOR
#define LeftRearMotor 13

#define FULL_FORWARD 255
#define NEUTRAL 127
#define FULL_REVERSE 0

//SERVO OBJECTS ASSOCIATED WITH MOTOR CONTROLLERS
Servo frontRight;
Servo frontLeft;
Servo rearRight;
Servo rearLeft;

/**
 * default RO code prior to loop
//PWM VALUES FOR ASSOCIATED POSITIONS
#define FULL_FORWARD 255
 */
void setup()
{
  setupController();
  setupServos();
  
}

/**
 * default RN code
 */
void loop()
{

}

/**
 * runs setup routines for servo controllers such that they can be used
 */
void setupServos ()
{
  frontRight.attach(RightFrontMotor);
  rearRight.attach(RightRearMotor);
  frontLeft.attach(LeftFrontMotor);
  rearLeft.attach(LeftRearMotor);
}

/**
 * setup for controller inputs and motor controller outputs of the microcontroller
 */
void setupController ()
{
  pinMode(ControllerY, INPUT);
  pinMode(ControllerY, INPUT);
  pinMode(ControllerZ, INPUT);
  pinMode(RightFrontMotor, OUTPUT);
  pinMode(RightRearMotor, OUTPUT);
  pinMode(LeftFrontMotor, OUTPUT);
  pinMode(LeftRearMotor, OUTPUT);
}

/**
 * setup of lockout timer values for a given servo
 * @param temp the servo to set lockout timers for
 */
void calibrateESCs (Servo * temp)
{

}

/**
 * ensures that the value of any input falls between 0 and 255 such that it is
 * appropriate for 8 bit PWM output
 * @param param the input value that is to be verified
 * @return a value closest to param that is within the acceptable 8 bit PWM
 * range
 */
int rangeVal (int param)
{
  if (param < 0)
    param = 0;
  else if (param > 255)
    param = 255;

    return param;
}

/**
 * * updates the input values from the controller
 * @return an array of x, y and z values
 */
int updateControllerValues()
{
 int temp[3]; 
 temp [0] = pulseIn(ControllerX, HIGH, 25000);
 temp [1] = pulseIn(ControllerY, HIGH, 25000);
 temp [2] = pulseIn(ControllerZ, HIGH, 25000);
 return temp;
 }

/**
 * calculates and sets the output of the drive motors given the joystick input
 *
 * @param norm the normal drive value (Y) of the joystick from 0 to 255
 * @param strafe the strafe value (X) of the joystick from 0 to 255
 * @param rotate the rotational value (Z) of the joystick from 0 to 255
 */
void setMotorOutputs (int norm, int strafe, int rotate)
{

}
