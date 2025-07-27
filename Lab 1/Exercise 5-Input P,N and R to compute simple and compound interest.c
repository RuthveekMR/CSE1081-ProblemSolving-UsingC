#include<stdio.h>
#include<math.h>
int main()
{
    int P,N,R;
    float SI,CI;
    printf("Enter Principal Value, Time Period and Rate of Interest, respectively:\n");
    scanf("%d%d%d",&P,&N,&R);
    SI=(float)(P*N*R)/100;
    printf("Simple Interest=%0.2f\n",SI);
    CI=P*pow((1+(float)R/100),N)-P;
    printf("Compound Interest=%0.2f",CI);
    return 0;
}
