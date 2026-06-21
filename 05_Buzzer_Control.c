#include <reg51.h>

sbit BUZZER = P1^0;

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
        BUZZER = 1;
        delay();

        BUZZER = 0;
        delay();
    }
}
