#include<stdio.h>
int main()
{
    int n,k,num,i,j;
    printf("Enter the number 'n' and 'k' respectively:");
    scanf("%d%d",&n,&k);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=k;j++)
        {
            num=i*j;
            printf("%d   ",num);
        }
    printf("\n");
    }
    return 0;
}
