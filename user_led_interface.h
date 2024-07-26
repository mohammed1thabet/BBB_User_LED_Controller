/*
    project: BBB_User_LED_Controller
    Author: Mohammed THABET
    HW: BBB REV C
    
    this file includes all the functions used by main.c to interface
    with user leds files and update its configrations
*/

#ifndef __USR_LED_IF__
#define __USR_LED_IF__

/*these macros are used to define control operation status if it passed or failed*/
#define OPERATION_PASSED                    1
#define OPERATION_FAILED                    0         
/*
    funtion used to control user led trigger type
    parameter: char* triggerType, holds the new trigger type to be applied
    return: operation status, status off the operation if it succeeded or failed
*/
int trigger_control(char* triggerType);

/*
    funtion used to control user led brightness level
    parameter: int birghtnessLevel, holds the new brightness percentage to be applied 
    return: operation status, status off the operation if it succeeded or failed
*/
int brightness_control(int birghtnessLevel );

#endif