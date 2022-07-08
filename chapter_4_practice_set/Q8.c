#include <stdio.h>

int main()
{
    // Program to calculate the factorial of a given number using a for loop
    int num = 0;
    int factorial = 1;
    for (int i = 1; i <= num; i++)
    {
        factorial = factorial * i;
    }
    printf("Factorial: %d", factorial);

    return 0;
}