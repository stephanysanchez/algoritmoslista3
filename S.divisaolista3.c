#include<stdio.h>
int main()
{
    int num1, num2, q;
    q=0;
    printf("Digite o dividendo: ");
    scanf("%i", &num1);
    printf("Digite o divisor: ");
    scanf("%i", &num2);
    while(num1>=num2)
    {
        num1 =num1-num2;
        q= q+1;
    }
    printf("O resultado da divisao e: %i",q);
}
