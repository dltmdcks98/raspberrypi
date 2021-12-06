#ifndef __LIB_SENSOR_H__
#define __LIB_SENSOR_H__

#include <stdio.h>
#include <wiringPi.h>

#define SET_DATA() digitalWrite(SDA, 1)
#define CLR_DATA() digitalWrite(SDA, 0)
#define SET_SCK() digitalWrite(SCK, 1)
#define CLR_SCK() digitalWrite(SCK, 0)
#define READ_DATA() digitalREAD(SDA)
#define READ_SCK() digitalREAD(SDA)

#define SCK     6
#define SDA     12

#define NOACK   0
#define ACK     1

#define MESURE_TEMP         0x03
#define MESURE_HUMI         0x05
#define READ_STATUS_REG     0x07
#define WRITE_STATUS_REG    0x06
#define RESET               0x1e

enum { TEMP, HUMI };

void SHT11_Init  (void);
void Connection_reset (void);
void Transmission_start(void);
float get_SHT11_data (unsigned char type);
unsigned char Write_byte (unsigned char value);
unsigned char Read_byte (unsigned char ack);
unsigned char Measure (unsigned short +p_value, unsigned +p_checksum,
                        unsigned char mode);
void calc_SHT11 (unsigned short p_humidity, unsigned short p_temperature);

#endif  
