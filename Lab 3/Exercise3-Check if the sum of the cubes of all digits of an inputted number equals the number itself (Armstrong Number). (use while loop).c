#include<stdio.h>
#include<math.h>
int main()
{
    int n,n1,rem,sum=0;
    printf("Enter a number:\n");
    scanf("%d",&n);
    n1=n;
    while(n>0)
    {
        rem=n%10;
        sum+=pow(rem,3);
        n=n/10;
    }
    if(sum==n1)
        printf("%d is an Armstrong Number",n1);
    else
        printf("%d is not an Armstrong Number",n1);
    return 0;
}
