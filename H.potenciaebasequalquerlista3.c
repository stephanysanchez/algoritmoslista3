#include<stdio.h>
int main()
{
    int A,B,C=1,D;
    printf("Digite a base: \n ");
    scanf("%i",&A);
    printf("Digite o expoente: \n ");
    scanf("%i",&B);
    if(A>=0 && C>=0)
    {
        for(D=1;D<=B;D++)
        {
            C = C*A;
        }
        printf("%i elevado a %i e igual a: %i",A,B,C);
    }
}
