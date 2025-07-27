#include<stdio.h>
int FIB(int);
int main()
{
    int n,fib;
    printf("Enter the number n:");
    scanf("%d",&n);
    fib=FIB(n);
    printf("FIB=%d",fib);
    return 0;
}
int FIB(int n)
{
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    else
        return (FIB(n-1)+FIB(n-2));

}
