#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the values of a,b and c respectively:\n");
    scanf("%d%d%d",&a,&b,&c);
    (a<b && a<c)?printf("%d is the smallest number",a):(b<a && b<c)?printf("%d is the smallest number",b):printf("%d is the smallest number",c);
    return 0;
}
