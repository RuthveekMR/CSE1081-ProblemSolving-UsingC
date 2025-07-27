#include<stdio.h>
int larg,i,n;
int largest(int arr[],int n)
{
    larg=arr[0];
    for(i=0;i<n;i++)
        if(arr[i]>larg)
            larg=arr[i];
    return larg;
}
int main()
{
    int b[50];
    printf("Enter the limit of the array:\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    printf("The maximum of the above list of numbers=%d",largest(b,n));
    return 0;
}
