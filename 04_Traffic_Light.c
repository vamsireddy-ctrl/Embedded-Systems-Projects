#include <reg51.h>

void delay()
{
    int i, j;
    for(i = 0; i < 100; i++)
        for(j = 0; j < 1275; j++);
}

void main()
{
    while(1)
    {
        P1 = 0x01;   // Red ON
        delay();

        P1 = 0x02;   // Yellow ON
        delay();

        P1 = 0x04;   // Green ON
        delay();
    }
}
