#include<stdio.h>

int main ()
{
int i,s;
s=0;
for (i=1;i<=100;i=i+1){
    s=i+s;
    printf("O valor da soma e: %d \n",s);
    }
}