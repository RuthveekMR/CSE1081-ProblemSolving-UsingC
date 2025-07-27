#include<stdio.h>
#include<string.h>
int main()
{
        const int MAX=50;
        char str1[MAX],str2[MAX];
        int i=0,x;
        printf("Enter a string:");
        gets(str1);
        x=strlen(str1);
        for(i=x-1;i>=0;i--)
            str2[x-i-1]=str1[i];
        str2[x]='\0';
        int value=strcmp(str1,str2);
        if(value==0)
            printf("The string is a palindrome");
        else
            printf("The string is not a palindrome");
        return 0;

}
