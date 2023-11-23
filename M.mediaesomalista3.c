#include <stdio.h>

int main()
{
    float a, b , c;
    b=0;
    printf("Digite 10 valores: \n");
    for (c = 1; c <= 10; c++)
    {
        printf("valor %.0f: ",c);
        scanf("%f", &a);
        b = b+ a;
    }

    printf("Soma : %.2f\n", b);
    printf("Media: %.2f\n", b / 10);

}
