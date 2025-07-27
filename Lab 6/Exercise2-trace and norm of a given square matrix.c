#include<stdio.h>
#include<math.h>
int main()
{
    int a[50][50],m,n,trace=0,i,j;
    float norm=0;
    printf("Enter the dimension of the matrix:\n");
    scanf("%d%d",&m,&n);
    printf("Enter the matrix elements:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<m;i++)
    {
        trace+=a[i][i];
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            norm+=(pow(a[i][j],2));
    }
    if(m==n)
        printf("Trace=%d\n",trace);
    else
        printf("The trace does not exist\n");
    printf("Norm=%f",sqrt(norm));
    return 0;

}
