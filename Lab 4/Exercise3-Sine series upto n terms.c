#include<stdio.h>
#include<math.h>
void main()
{
    float x,deg,term,term1;
    int fact,n,i,j;
    printf("Enter the value 'x(in degrees)' and 'n' respectively:");
    scanf("%f%d",&x,&n);
    deg=(3.14159*x)/180;
    term=deg;
    for(i=2;i<=n;i++)
    {
        fact=1;
        for(j=1;j<=2*i-1;j++)
        {
            fact=fact*j;
        }
        term1=pow(-1,i-1)*(pow(deg,2*i-1)/fact);
        printf("%f\n",term1);
        term=term+term1;
    }
    printf("The sine series upto n terms:\n");
    printf("%f",term);
}
