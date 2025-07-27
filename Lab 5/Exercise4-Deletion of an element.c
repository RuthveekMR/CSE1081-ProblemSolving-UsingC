#include<stdio.h>
int main()
{
    int a[50],n,i,ele,pos;
    printf("Enter rhe limit of the array:\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the element to be deleted from the array:\n");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(ele==a[i])
        {
            pos=i;
            while(i<n)
            {
                a[i]=a[i+1];
                i++;
            }
            i=pos-1;
            n=n-1;
        }

    }
    printf("The array elements after deletion are:\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    return 0;
}
