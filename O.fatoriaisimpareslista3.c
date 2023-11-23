#include <stdio.h>

int main()
{
    int a,b,c;
    for(a=1;a<=10;a=a+2)
    {
        b=1;
        for(c=1;c<=a;c++)
        {
            b = b * c;
        }
        printf("O fatorial de %i: %i\n",a,b);
    }
}
