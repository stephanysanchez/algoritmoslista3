#include<stdio.h>

int main()
{
    int a, maior,menor;
    printf("Digite um valor: (Digite um valor negativo para parar a leitura): ");
    scanf("%i",&a);
    while(a>=0)
    {
        if(maior==-1 || a > maior)
        {
            maior=a;
        }
        if(menor==-1 || a < menor)
        {
            menor=a;
        }
        scanf("%i",&a);
    }
    if(maior>=0 && menor>=0)
    {
        printf("maior: %i\n",maior);
        printf("menor: %i\n",menor);
    }
    else
    {
        printf("Nenhum valor positivo digitado");
    }
}
