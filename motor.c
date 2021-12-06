#include<wiringPi.h>
#include<softPwm.h>

#define MOTOR_MT_N_PIN 12
#define MOTOR_MT_P_PIN 6
#define LEFT_ROTATE 1
#define RIGHT_ROTATE 2

void MotorRun(void);
void MotorStop(void);
void MotorControl(unsigned char speed, unsigned char rotate);
void MotorRun()
{
    if(wiringPiSetupGpio()==-1)
        return 1;
    pinMode(MOTOR_MT_N_PIN,OUTPUT);
    pinMode(MOTOR_MT_P_PIN,OUTPUT);
    softPwmCreate(MOTOR_MT_N_PIN,0,100);
    softPwmCreate(MOTOR_MT_P_PIN,0,100);

    if(temp>=)
    {
        MotorControl(30,LEFT_ROTATE);
    }
    else
    {
        MotorStop();
    }
    return 0;
}
void MotorStop()
{
    softPwmWrite(MOTOR_MT_N_PIN,0);
    softPwmWrite(MOTOR_MT_P_PIN,0);
}
void MotorControl(unsigned char speed, unsigned char rotate)
{
    if(rotate==LEFT_ROTATE)
    {
        digitalWrite(MOTOR_MT_P_PIN,LOW);
        softPwmWrite(MOTOR_MT_N_PIN,speed);
    }
    else if(rotate==RIGHT_ROTATE)
    {
        digitalWrite(MOTOR_MT_N_PIN,LOW);
        softPwmWrite(MOTOR_MT_P_PIN,speed);
    }
} 