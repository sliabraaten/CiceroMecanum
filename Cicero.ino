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
#define PWM2 2
//INPUT X AXIS (STRAFE)
#define PWM3 3
//INPUT Z AXIS (ROTATE)
#define PWM4 4

//OUTPUT TO RIGHT FRONT MOTOR
#define PWM10 10
//OUTPUT TO RIGHT REAR MOTOR
#define PWM11 11
//OUTPUT TO LEFT FRONT MOTOR
#define PMW12 12
//OUTPUT TO LEFT REAR MOTOR
#define PWM13 13

//PWM VALUES FOR ASSOCIATED POSITIONS
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
 */
void setup()
{

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

}

/**
 * setup for controller inputs into microcontroller
 */
void setupController ()
{

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