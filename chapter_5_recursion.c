#include <stdio.h>

int factorial(int a);

int main()
{
    factorial(5);
    printf("Enter the number: ");
    int i;
    scanf("%d", &i);
    factorial(i);
    printf("Factorial of %d is %d\n", i, factorial(i));
    return 0;
}

int factorial(int a)
{
    if (a <= 0)
    {
        return 1;
    }
    return a * factorial(a - 1);
}
