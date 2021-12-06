#include "sensor.h"

volatile float temp;
volatile float humi;

void Sensor(void);

void Sensor{
    if(wiringPiSetupGpio() == -1)
        return 1;
    SHT11_INIT();

    while(1)
    {
        Transmission_start();
        temp=get_SHT11_data (TEMP);
        delay(100);

        Transmission_start();
        humi=get_SHT11_data (HUMI);
        delay(100);

        printf("Temp=%2.2f [C], Humi = %2.2f [%]\n",temp,humi);
    }
}