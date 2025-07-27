#include<stdio.h>
#include<math.h>
int main()
{
    float ans,u,t,a;
    printf("Enter a,t,u:\n");
    scanf("%f%f%f",&a,&t,&u);
    ans=((u*t)+(a*pow(t,2))/2);
    printf("ut+1/2at^2=%f",ans);
    return 0;
}
