#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
            sum=sum+i;
    }
    if(sum==n)
        printf("%d is a perfect number",n);
    else
        printf("%d is not a perfect number",n);
    return 0;
}
