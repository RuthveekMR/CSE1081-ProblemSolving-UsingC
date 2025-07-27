#include<stdio.h>
int main()
{
    int a[50],n,i,j,temp;
    char choice;
    printf("Enter the limit the array:\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Enter 'a' for ascending order and 'd' for descending order\n");
    fflush(stdin);
    scanf("%c",&choice);
    switch(choice)
    {
    case 'a':
        for(i=0;i<n;i++)
            printf("%d\t",a[i]);
        break;
    case 'd':
        for(i=n-1;i>=0;i--)
            printf("%d\t",a[i]);
        break;
    default:
        printf("Invalid Input");
        break;
    }
    return 0;

}
