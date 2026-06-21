#include <reg51.h>

sbit LDR = P2^0;
sbit LED = P1^0;

void main()
{
    while(1)
    {
        if(LDR == 0)
            LED = 1;
        else
            LED = 0;
    }
}
