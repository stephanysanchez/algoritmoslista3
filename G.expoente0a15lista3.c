#include<stdio.h>

int main ()
{
int i,b,p;
b=3;
p=1;
for (i=0;i<=15;i=i+1){
printf("O valor da potencia de base tres e: %d \n",p);
p=(b*p);
}
}