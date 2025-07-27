#include<stdio.h>
int CornerSum(int m,int n)
{
    int a[50][50],i,j,cs=0;
    printf("Enter the matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    cs=a[0][0]+a[m-1][0]+a[0][n-1]+a[m-1][n-1];
    return cs;
}
int main()
{
    int m,n,cs;
    printf("Enter the no of rows and columns in the matrix:\n");
    scanf("%d%d",&m,&n);
    cs=CornerSum(m,n);
    printf("Corner Sum=%d",cs);
    return 0;
}
