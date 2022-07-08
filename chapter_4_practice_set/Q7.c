#include <stdio.h>

int main()
{
    // Program to calculate the sum of the numbers occuring in the multiplication table of any number;
    int numForMult = 10;
    int i = 1;
    int mult;
    int sum = 0;
    do
    {
        mult = numForMult * i;
        i++;
        sum = sum + mult;
    } while (i <= 10);
    printf("Sum: %d", sum);

    return 0;
}