#include <stdio.h>

int main()
{
    float S,T,U;
    T=0;
    for (U = 50; U <= 70; U++)
    {
        T = T + U;
    }

    printf("Soma: %.2f\n",T);
    printf("Media: %.2f\n", T/ 20);

}
