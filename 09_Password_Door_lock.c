#include <reg51.h>

sbit LOCK = P1^0;

void main()
{
    unsigned int password = 1234;
    unsigned int entered  = 1234;

    if(password == entered)
        LOCK = 1;
    else
        LOCK = 0;

    while(1);
}
