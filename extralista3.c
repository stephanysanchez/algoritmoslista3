#include <stdio.h>
#include <math.h>

int main()
{
    int A,B;
    printf("Digite um numero qualquer: \n");
    scanf("%i",&B);
    printf("Os divisores do numero digitado: ", B);
    for(A=1;A<=B;A++)
    {
        if(B%A==0)
        {
            printf("%i ",A);
        }
    }
}
