#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the values of a,b and c respectively:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
        printf("The number %d is the largest",a);
    else if(b>a && b>c)
        printf("The number %d is the largest",b);
    else
        printf("The number %d is the largest",c);
    return 0;
}
