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
        P1 = 0x01; delay();
        P1 = 0x02; delay();
        P1 = 0x04; delay();
        P1 = 0x08; delay();
        P1 = 0x10; delay();
        P1 = 0x20; delay();
        P1 = 0x40; delay();
        P1 = 0x80; delay();
    }
}
