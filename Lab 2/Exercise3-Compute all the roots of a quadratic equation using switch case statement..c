#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,disc,part;
    float root1,root2;
    printf("Enter the values of a,b and c in the quadratic expression respectively:\n");
    scanf("%d%d%d",&a,&b,&c);
    disc=b*b-4*a*c;
    if(disc<0)
        part=1;
    else if(disc==0)
        part=2;
    else
        part=3;
    switch(part)
    {
    case 1:
            printf("The roots are imaginary.\n");
            float re=(float)-b/(2*a);
            float im=sqrt((float)fabs(disc))/(2*a);
            printf("The roots are:\n");
            printf("Root 1=%f+i%f\n",re,im);
            printf("Root 2=%f-i%f",re,im);
            break;
    case 2:
            printf("The roots are real and equal.\n");
            root1=(-b+sqrt((float)disc))/(2*a);
            root2=(-b-sqrt((float)disc))/(2*a);
            printf("The roots are:\n");
            printf("Root 1=%f\n",root1);
            printf("Root 2=%f",root2);
            break;
    case 3:
            printf("The roots are real and distinct.\n");
            root1=(-b+sqrt((float)disc))/(2*a);
            root2=(-b-sqrt((float)disc))/(2*a);
            printf("The roots are:\n");
            printf("Root 1=%f\n",root1);
            printf("Root 2=%f",root2);
            break;
    }
    return 0;
}
