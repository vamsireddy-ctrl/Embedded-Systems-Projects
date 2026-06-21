#include <reg51.h>

void main()
{
    while(1)
    {
        if(P2 == 0x01)
            P1 = 0x01;

        else if(P2 == 0x03)
            P1 = 0x03;

        else if(P2 == 0x07)
            P1 = 0x07;

        else if(P2 == 0x0F)
            P1 = 0x0F;
    }
}
