#include<stdio.h>
int main()
{
    int n,flag,i=2;
    flag=1;
    printf("Enter a number:\n");
    scanf("%d",&n);
    while(i<=n/2)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
        i++;
    }
    if(flag==1)
        printf("%d is a prime number",n);
    else
        printf("%d is not a prime number",n);
    return 0;
}
