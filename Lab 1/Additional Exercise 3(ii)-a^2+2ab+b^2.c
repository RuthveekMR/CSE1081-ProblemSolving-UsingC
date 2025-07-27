#include<stdio.h>
#include<math.h>
int main()
{
    int ans,a,b;
    printf("Enter the values of a and b:\n");
    scanf("%d%d",&a,&b);
    ans=pow(a,2)+(2*a*b)+pow(b,2);
    printf("a^2+2ab+b^2=%d",ans);
    return 0;
}
