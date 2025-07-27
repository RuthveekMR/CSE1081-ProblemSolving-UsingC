#include<stdio.h>
int main()
{
    int N,i,j,num=1;
    printf("Enter the limit N to generate a Floyd's Triangle:");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        printf("%d  ",num);
        for(j=2;j<=i;j++)
        {
            num++;
            printf("%d  ",num);
        }
        num++;
        printf("\n");
    }
    return 0;
}
