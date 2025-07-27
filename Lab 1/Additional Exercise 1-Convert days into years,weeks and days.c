#include<stdio.h>
int main()
{

    int days,weeks,years;
    printf("Enter the number of days:\n");
    scanf("%d",&days);
    years=days/365;
    days=days%365;
    printf("Years=%d\n",years);
    weeks=days/7;
    days=days%7;
    printf("Weeks=%d\n",weeks);
    printf("Days=%d",days);
    return 0;
}
