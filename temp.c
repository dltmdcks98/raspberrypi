#include "sensor.h"
#include "motor.c"
volatile float temp;
volatile float humi;


int main (void)
{
    if(wiringPiSetupGpio() == -1)
        return 1;

    SHT11_Init();

    while(1)
    {
        Transmission_start();
        temp = get_SHT11_data (TEMP);
        delay(100);

        Transmission_start();
        humi = get_SHT11_data (HUMI);
        delay(100);

        printf("Temp= %2.2f [C], Humi = %2.2f [%]\n", temp, humi);
        
        MotorRun(temp);
    }
    
    return 0;
}