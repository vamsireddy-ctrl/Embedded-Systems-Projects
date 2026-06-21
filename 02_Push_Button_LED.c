#include <reg51.h>

sbit SW  = P2^0;
sbit LED = P1^0;

void main()
{
    while(1)
    {
        if(SW == 0)
            LED = 1;
        else
            LED = 0;
    }
}
