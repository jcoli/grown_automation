/**
Version: 0a
Tecnocoli - 04/2024
jcoli - Jeferson Coli - jcoli@tecnocoli.com.br
STM32F407VET6 - Grown
**/

#include <Arduino.h>
#include <ArduinoHA.h> //MQTT
#include <Bounce2.h>

#include "defines.h"
#include "io_defines.h"
#include "display.h"
#include "sounds.h"
#include "program.h"
#include "mqtt_controll.h"


void io_input_begin();


// #define NUM_BUTTONS 3
// const uint8_t BUTTON_PINS[NUM_BUTTONS] = {BT_POWER, BT_PROGRAM, BT_CYCLE};
// Bounce * buttons = new Bounce[NUM_BUTTONS];

void io_input_begin(){
    

}



