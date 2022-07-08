#include <stdio.h>

int main()
{
    // Program to check whether a given number is prime or not using loop;
    printf("Enter a number here to find out if it is a prime or not: ");
    int num;
    scanf("%d", &num);
    int prime = 1;
    int i;
    for (i = 2; i <= num/2; i++)
    {
        if (num % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 1)
    {
        printf("%d is a prime number", num);
    }
    else
    {
        printf("%d is not a prime number because it is divisible by %d", num, i);
    }

    return 0;
}