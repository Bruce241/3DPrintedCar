//Controller
#ifndef _VARIABLES_HPP
#define _VARIABLES_HPP

#define PROS_USE_SIMPLE_NAMES
#define PROS_USE_LITERALS

#include "api.h"

using namespace pros;

//Controller
extern Controller master;

//Ports
extern const int8_t LEFT_FRONT_DRIVE_PORT;
extern const int8_t LEFT_BACK_DRIVE_PORT;
extern const int8_t RIGHT_FRONT_DRIVE_PORT;
extern const int8_t RIGHT_BACK_DRIVE_PORT;

//Drive motors
extern Motor driveFL;
extern Motor driveBL;
extern Motor driveFR;
extern Motor driveBR;

#endif
