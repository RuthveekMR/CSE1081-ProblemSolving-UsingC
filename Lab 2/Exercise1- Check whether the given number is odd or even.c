#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number to check whether it is odd or even:\n");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("The number %d is even.",n);
    }
    else
    {
        printf("The number %d is odd",n);
    }
    return 0;

}
