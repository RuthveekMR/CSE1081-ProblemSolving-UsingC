#include<stdio.h>
struct student
{
    char name[100];
    int roll_no;
    int m1;
    int m2;
    int m3;
    float avg;
};
int main()
{
    struct student s[3],t;
    int i,j;
    printf("Enter the name, roll no and their marks of three subjects respectively:\n");
    for(i=0;i<3;i++)
        scanf("%s%d%d%d%d",&s[i].name,&s[i].roll_no,&s[i].m1,&s[i].m2,&s[i].m3);
    for(i=0;i<3;i++)
        s[i].avg=(s[i].m1+s[i].m2+s[i].m3)/3.0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<2-i;j++)
        {
            if(s[j].avg>s[j+1].avg)
            {
                t=s[j];
                s[j]=s[j+1];
                s[j+1]=t;
            }
        }
    }
    for(i=0;i<3;i++)
        printf("%s\t%4d\t%3d%3d%3d\t%6f\n",s[i].name,s[i].roll_no,s[i].m1,s[i].m2,s[i].m3,s[i].avg);
    return 0;
}
