#include <stdio.h>

int main()
{
    // Progarm for calculating the area of a rectangle
    int length;
    printf("Write the length of the rectangle: ");
    scanf("%d", &length);

    int breadth;
    printf("Write the breadth of the rectangle: ");
    scanf("%d", &breadth);

    int area = length * breadth;
    printf("Area of the rectangle of is: %d", area);
    return 0;
}
