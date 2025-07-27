#include<stdio.h>
int main()
{
    int a[50][50],b[50][50],m,n,i,j,count1=0;
    printf("Enter dimension of the matrix:\n");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of the matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==a[j][i])
                    count1++;
        }
    }
    if(count1==(m*n))
        printf("Matrix entered is symmetric");
    else
        printf("Matrix entered is not symmetric");
    return 0;

}
