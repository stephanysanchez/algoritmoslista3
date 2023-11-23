#include <stdio.h>

int main()
{
    int Atual=0,Anterior=1,Proximo,i;
    printf("Sequencia numerica de Fibonacci: \n %i ",Atual);
    for(i=0;i<=15;i++)
    {
        Proximo= Atual + Anterior;
        printf("%i ",Proximo);
        Anterior = Atual;
        Atual = Proximo;
    }

}
