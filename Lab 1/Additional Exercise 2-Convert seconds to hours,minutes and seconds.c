#include<stdio.h>
int main()
{
    int hours,minutes,seconds;
    printf("Enter time in seconds:\n");
    scanf("%d",&seconds);
    hours=seconds/3600;
    seconds=seconds%3600;
    printf("Hours=%d\n",hours);
    minutes=seconds/60;
    seconds=seconds%60;
    printf("Minutes=%d\n",minutes);
    printf("Seconds=%d",seconds);
    return 0;
}
