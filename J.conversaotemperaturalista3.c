#include <stdio.h>
int main()
{
    float C,F;
    C = 10;
    while (C <= 100)
    {
        F = (C * 9/5) + 32; 
        printf("%.1f Celsius = %.1f Fahrenheit\n", C, F);
        C = C + 10;
    }
}