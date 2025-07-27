#include<stdio.h>
#include<string.h>
int main()
{
    int count1=1,i;
    const int MAX=50;
    char str[MAX];
    printf("Enter a string:\n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' '&&str[i+1]!=' ')
            count1++;

    }
    printf("The number of words=%d",count1);
    return 0;
}
