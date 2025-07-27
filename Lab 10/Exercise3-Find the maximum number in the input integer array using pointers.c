#include<stdio.h>
int main()
{
    int arr[50],i,n,x;
    printf("Enter the number of integers:\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int *ptr;
    ptr=arr;
    x=*ptr;
    ptr++;
    for(i=1;i<n;i++,ptr++)
    {
        if(x<*ptr)
            x=*ptr;
    }
    printf("The maximum integer from the entered array=%d",x);
    return 0;
}
