#include <wiringPi.h>

#define LED_PIN_1 11
#define LED_PIN_2 10
#define MAX_LED_NUM 2

const int LedPinTable[2] = {
    LED_PIN_1, LED_PIN_2
};

void LEDRun(volatile float temp){
    int i=0;

    for(i=0; i<MAX_LED_NUM; i++)
    {
        pinMode(LedPinTable[i],OUTPUT);
        digitalWrite(LedPinTable[i],LOW);
    }
    i=0;

    if(temp<23)
    {
        digitalWrite(LedPinTable[0],HIGH);
        digitalWrite(LedPinTable[1],LOW);
    }
    else
    {
        digitalWrite(LedPinTable[0],LOW);
        digitalWrite(LedPinTable[1],HIGH);
        
    }
}

