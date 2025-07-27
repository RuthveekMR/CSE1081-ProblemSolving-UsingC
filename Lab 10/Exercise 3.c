#include<stdio.h>
int main()
{
    int arr[50],i,n;
    printf("Enter the number of integers:\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int *ptr;
    ptr=arr;
    for(i=1;i<n;i++)
    {
        if(*ptr<arr[i])
            ptr=&arr[i];
    }
    printf("The maximum integer from the entered array=%d",*ptr);
    return 0;
}


