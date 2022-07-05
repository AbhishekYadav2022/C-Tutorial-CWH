#include <stdio.h>

int main()
{
    // Program for calculating the area of the cylinder
    printf("Enter the radius of the cylinder in meter: ");
    float r;
    scanf("%f", &r);
    printf("Enter the height of the cylinder in meter: ");
    float h;
    scanf("%f", &h);
    float pi = 3.14;
    float area = pi * r * r * h;
    printf("Area of the cylinder is(in meter square): %f", area);
    return 0;
}