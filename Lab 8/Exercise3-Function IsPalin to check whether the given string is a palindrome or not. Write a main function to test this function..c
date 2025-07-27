#include<stdio.h>
#include<string.h>
int IsPalin(char str[50])
{
    char rev[50];
    int i,x=strlen(str),val;
    for(i=x-1;i>=0;i--)
        rev[x-i-1]=str[i];
    rev[x]='\0';
    val=strcmp(str,rev);
    return val;
}
int main()
{
    char str1[50],str2[50];
    int val;
    printf("Enter a string:\n");
    gets(str1);
    val=IsPalin(str1);
    if(val==0)
        printf("The above string is a palindrome");
    else
        printf("The above sting is not a palindrome");
    return 0;
}
