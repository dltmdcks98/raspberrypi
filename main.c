#include<wiringPi.h>
#include<softPwm.h>

#define LED_PIN_1 4
#define LED_PIN_2 17
#define LED_PIN_3 18
#define MAX_LED_NUM 3
#define MOTOR_MT_N_PIN 12
#define MOTOR_MT_P_PIN 6
#define LEFT_ROTATE 1
#define RIGHT_ROTATE 2

const int LedPinTable[3] {
    LED_PIN_1, LED_PIN_2, LED_PIN_3,
}

void LEDRun(void);
void MotorRun(void);
void MotorStop(void);
void MotorControl(unsigned char speed, unsigned char rotate);

int main(){
    MotorRun();
    LEDRun();
}