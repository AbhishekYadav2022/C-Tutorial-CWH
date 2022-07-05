#include<stdio.h>
int main()
{
    // Program for calculating the area of the circle
    printf("Write the radius of the circle(in meter): ");
    int radius;
    float pi = 3.14;
    scanf("%d", &radius);
    float area = pi*radius*radius;
    printf("Area of the of the circle(in meter square) is: %f", area);
    return 0;
}
