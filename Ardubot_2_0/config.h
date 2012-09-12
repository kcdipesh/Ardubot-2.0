/*
  config.h - Library for configure the Ardubot.
  Created by M. KOCH, September 2012.
  Version 2, rev 1
  OPEN SOURCE
*/

#ifndef config_h
#define config_h

//PID Control
#define KP .18
#define KD 5

//Engine System
#define MOTOR1_NORMAL_SPEED 50
#define MOTOR2_NORMAL_SPEED 50
#define MOTOR1_MAXIMAL_SPEED 70
#define MOTOR2_MAXIMAL_SPEED 70

//Engine Navigation
#define FWD 0 //Vorwärts
#define REV 1 //Rückwärts

//Engine Connection and PWM
#define PwmPinMotorA 3
#define PwmPinMotorB 11
#define DirectionPinMotorA 12
#define DirectionPinMotorB 13

//IR Sensor
#define NUM_SENSORS 4 // Anpassen !! Anzahl an verwendeten Sensoren
#define TIMEOUT 1500
#define EMITTER_PIN 2

//PID System
#define SETPOINT 1500 // Anpassen !!  = MAXIMUM_POINT / 2
#define MINIMUM_POINT 0
#define MAXIMUM_POINT 3000 // Anpassen !! = (Anzahl Sensoren -1) * 1000

//Debug Mode
#define DEBUG 0 //  Debug Modus 0 = Aus, 1 = Ein
#define DEBUG_OUPUT_SPEED 700 // Debug Ausgabe Geschwindigkeit
#define PROGRAMCABLE 4
#define STATUS_LED 2

#endif

