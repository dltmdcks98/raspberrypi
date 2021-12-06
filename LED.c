#include <wiringpi.h>

 #define LED_PIN_1 4
 #define LED_PIN_2 17
 #define LED_PIN_3 18
 #define MAX_LED_NUM 3

const int LedPinTable[3] {
    LED_PIN_1, LED_PIN_2, LED_PIN_3,
}

void LEDRun(void);

void LEDRun{
    int i=0;
    if(wiringPiSetupGpio() == -1 )
        return 1;
    for(i=0; i<MAX_LED_NUM; i++)
    {
        pinMode(LedPinTable[i],OUTPUT);
        digitalWrite(LedPinTable[i],LOW);
    }
    i=0;
    if(temp<=10)
    {
        digitalwrite(LedPinTable[0],HIGH)
    }
    else if(temp>10 && temp<20);
    {
        digitalwrite(LedPinTable[1],HIGH)
    }
    else
    {
        digitalwrite(LedPinTable[2],HIGH)
    }
    return 0;
}