#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i;
    char str[50],a[50];
    printf("Enter a string:");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A' && str[i]<='Z')
            str[i]+=32;
        else if(str[i]>='a' && str[i]<='z')
            str[i]-=32;
    }
    puts(str);
    return 0;
}
