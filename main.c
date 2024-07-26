/*
    project: BBB_User_LED_Controller
    Author: Mohammed THABET
    HW: BBB REV C
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "user_led_interface.h"

int main(int argc, char *argv[])
{
    /*variable to hold operation status*/
    int operationStatus;

    if(argc != 3)
    {
        printf("invalid number of arguments\n");
        printf("arguments shall be only two arguments \"trigger (trigger type)\" or \"brightness brightness level\"\n");
        printf("brightness can have values from 0-100\n");
        return 0;
    }
    else
    {   
        if(strcmp(argv[1], "trigger") == 0)
        {
            operationStatus = trigger_control(argv[2]);
            if(operationStatus != OPERATION_PASSED)
            {
                return 0;
            }
        }
        else if (strcmp(argv[1], "brightness") == 0)
        {
            operationStatus = brightness_control(atoi(argv[2]));
            if(operationStatus != OPERATION_PASSED)
            {
                return 0;
            }
        }
        else
        {
            printf("invalid arguments\n");
            printf("first argument can be trigger or brightness\n");
        }
    }
    return 0;
}