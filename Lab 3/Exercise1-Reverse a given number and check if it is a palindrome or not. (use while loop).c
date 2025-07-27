#include<stdio.h>
int main()
{
    int n,rem,rev=0,n1;
    printf("Enter the number:\n");
    scanf("%d",&n);
    n1=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==n1)
        printf("%d is a palindrome",n1);
    else
        printf("%d is not a palindrome",n1);
    return 0;
}
