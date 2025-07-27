#include<stdio.h>
int main()
{
    int a=30,b=10,c=5,d=15;
    printf("The results are:\n");
    printf("%f\n",(((a+b)*(float)c/d)));
    printf("%f\n",((float)(((a+b)*c))/d));
    printf("%f\n",((a+(float)(b*c)/d)));
    printf("%f",((a+b)*((float)c/d)));
    return 0;
}
