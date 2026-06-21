#include <reg51.h>

sbit FIRE = P2^0;
sbit BUZZER = P1^0;

void main()
{
    while(1)
    {
        if(FIRE == 0)
            BUZZER = 1;
        else
            BUZZER = 0;
    }
}
