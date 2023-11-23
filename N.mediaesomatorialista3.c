#include <stdio.h>

int main()
{
    float a, b, c, d;
    b=0;
    d=0;
    printf("Digite um valor: (Digite um valor negativo para parar a leitura): \n");

    do
    {
        printf("Digite um valor: ");
        scanf("%f", &a);
        if (a >= 0) {
            b = b + a;
            d  = d + 1;
        }
    } while (a >= 0);

    if (d> 0)
    {
        c = b / d;
        printf("Soma: %f\n", b);
        printf("Media : %f\n", c);
        printf("O numero de valores lidos foi de: %f\n", d);
    }
    else
    {
        printf("Nenhum valor positivo foi lido.\n");
    }
}
