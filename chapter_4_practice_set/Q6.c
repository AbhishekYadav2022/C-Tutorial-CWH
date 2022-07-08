#include <stdio.h>

int main()
{
    // Program for printing the sum of first 10 natural numbers
    // Using do while loop
    int i = 1;
    int sum = 0;
    do
    {
        sum = sum + i;
        i++;

    } while (i <= 10);
    printf("The sum of first 10 natural numbers is %d", sum);

    return 0;
}