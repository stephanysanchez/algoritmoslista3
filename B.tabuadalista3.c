#include<stdio.h>

int main ()
{
int N,i,T;
printf("Digite um valor: \n");
scanf("%d",&N);
for (i=0;i<=10;i=i+1){
    T=i*N;
    printf("%d X %d = %d \n",i,N,T);
    }
}