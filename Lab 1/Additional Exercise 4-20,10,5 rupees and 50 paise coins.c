#include<stdio.h>
int main()
{
    int twenty,ten,five,fifty;
    float total;
    printf("Enter the number of twenty rupee,ten rupee,five rupee notes and fifty paise coins respectively:\n");
    scanf("%d%d%d%d",&twenty,&ten,&five,&fifty);
    total=(20*twenty)+(10*ten)+(5*five)+(0.5*fifty);
    printf("Total Rupees=%0.2f",total);
    return 0;
}
