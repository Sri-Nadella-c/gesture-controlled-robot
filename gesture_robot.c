/*
 * Wireless Gesture Controlled Robot
 * 8051 Microcontroller Code
 *
 * RF-based gesture control using accelerometer data.
 * Motor driver control via L293D.
 */

#include<reg51.h>

#define rf_data P1

sbit buzzer = P2^7;

/** l293d connectionc***///

sbit in1 = P2^2;

sbit in2 = P2^3;

sbit in3 = P2^4;

sbit in4 = P2^5;

sbit en1 = P2^0;

sbit en2 = P2^1;

void delay(unsigned int value) /* This function produces a delay in msec.*/

{

unsigned int i,j; /* Delay var */

for(i=0;i<=value;i++)

for(j=0;j<=200;j++); /* Delay for 500 Counts */

}

void main()

{

delay(20);

en1=en2=0;

in1=in3=0;

in2=in4=0;

delay(200);

while(rf_data==0);

buzzer = 0;

delay(100);

buzzer = 1;

while(1)

{

if(rf_data==0xfe) /// front

{

en1=en2=1;

in1=in3=1;

in2=in4=0;

}