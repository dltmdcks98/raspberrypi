#include <wiringpi.h>

 #define LED_PIN_1 4
 #define LED_PIN_2 17
 #define LED_PIN_3 18
 #define LED_PIN_4 27
 #define LED_PIN_5 22
 #define LED_PIN_6 23
 #define LED_PIN_7 24
 #define LED_PIN_8 25
 #define LED_PIN_9 6
 #define LED_PIN_10 12
 #define LED_PIN_11 13
 #define LED_PIN_12 16
 #define LED_PIN_13 19
 #define LED_PIN_14 20
 #define LED_PIN_15 26
 #define LED_PIN_16 21
 #define MAX_LED_NUM 16

const int LedPinTable[16] {
    LED_PIN_1, LED_PIN_2, LED_PIN_3,
     LED_PIN_4, LED_PIN_5, LED_PIN_6,
     LED_PIN_7. LED_PIN_8, LED_PIN_9,
    LED_PIN_10, LED_PIN_11, LED_PIN_12,
    LED_PIN_13, LED_PIN_14, LED_PIN_15,
    LED_PIN_16)

int main(void){
    int i=0;
    if(wiringPiSetupGpio() == -1 )
        return 1;
    for(i=0; i<MAX_LED_NUM; i++)
    {
        pinMode(LedPinTable[i],OUTPUT);
        digitalWrite(LedPinTable[i],LOW);

    }
    i=0;
    while(1)
    {
        digitalWrite(LedPinTable[i],HIGH);
        delay(200);
        digitalWrite(LedPinTable[i],LOW);
        i++

        if(i==MAX_LED_NUM)i==0;
    }
    return 0;
}

/////형준 임시