#include<stdio.h>
int n,g,i=1;
int GCD(int a,int b)
{

    if (i==1)
    {
     if(a<b)
        n=a;
     else
        n=b;
    }
    if(i<=n)
    {
        if((a%i==0)&&(b%i==0))
        {
            g=i;
        }
        i++;
        return GCD(a,b);


    }
    else
    {
        return g;
    }

}
int main()
{
  int a,b,gcd;
  printf("Enter two numbers to find its GCD:\n");
  scanf("%d%d",&a,&b);
  printf("GCD=%d",GCD(a,b));
  return 0;
}
