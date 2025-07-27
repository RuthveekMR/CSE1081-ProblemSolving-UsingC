#include<stdio.h>
int main()
{
    int a[50],n,i,small,larg;
    printf("Enter rhe limit of the array:\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    larg=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>larg)
            larg=a[i];
    }
    small=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<small)
            small=a[i];
    }
    printf("The largest and smallest number in the array are %d and %d respectively.",larg,small);
    return 0;
}
