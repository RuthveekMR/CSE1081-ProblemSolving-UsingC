#include<stdio.h>
int main()
{
    int n,flag,count1=0,count2=0,i;
    printf("Enter the numbers:\n");
    do
    {
        flag=1;
        scanf("%d",&n);
        if(n==-1)
            break;
        else if(n==1 || n==0)
            flag=2;
        else if(n<-1)
            printf("Invalid Input");
        else
        {
            for(i=2;i<=n/2;i++)
            {
                if(n%i==0)
                {
                    flag=0;
                    count2+=1;
                    break;
                }
            }
        if(flag==1)
        {
           count1+=1;
        }
        }
    }while(n!=-1);
    printf("Number of prime numbers=%d\n",count1);
    printf("Number of composite numbers=%d",count2);
    return 0;
}
