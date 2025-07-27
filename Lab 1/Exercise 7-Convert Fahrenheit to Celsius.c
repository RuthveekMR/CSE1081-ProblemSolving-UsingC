#include<stdio.h>
int main()
{
    float F,C;
    printf("Enter the temperature in Fahrenheit:\n");
    scanf("%f",&F);
    C=(5*(F-32))/9;
    printf("The converted temperature in Celsius is %0.2f",C);
    return 0;
}
