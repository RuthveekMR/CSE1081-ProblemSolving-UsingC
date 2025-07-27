#include<stdio.h>
#include<math.h>
#define pi 3.14
int main()
{
    float radius,volume,surface_area;
    printf("Enter the radius of the sphere:\n");
    scanf("%f",&radius);
    volume=(4*pi*pow(radius,3))/3;
    surface_area=4*pi*pow(radius,2);
    printf("Volume of the sphere=%0.2f\n",volume);
    printf("Surface area of the sphere=%0.2f",surface_area);
    return 0;
}
