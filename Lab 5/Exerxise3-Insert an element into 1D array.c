#include<stdio.h>
int main()
{
    int a[50],n,i,ele,pos;
    printf("Enter rhe limit of the array:\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the element to be inserted and its position, respectively:\n");
    scanf("%d%d",&ele,&pos);
    for(i=n-1;i>=pos-1;i--)
        a[i+1]=a[i];
    a[i+1]=ele;
    n=n+1;
    printf("The array elements after insertion are:\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    return 0;
}
