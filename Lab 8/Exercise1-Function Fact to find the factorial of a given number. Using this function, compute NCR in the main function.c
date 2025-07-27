#include<stdio.h>
int fact(int N)
{
    int f=1,i;
    for(i=1;i<=N;i++)
        f=f*i;
        return f;

}
int main()
{
    int n,r,C=0;
    printf("Enter the the numbers n & r to find the nCr:\n");
    scanf("%d%d",&n,&r);
    C=fact(n)/(fact(r)*fact(n-r));
    printf("The value of nCr=%d",C);
    return 0;
}

