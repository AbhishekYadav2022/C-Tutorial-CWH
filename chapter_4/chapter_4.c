#include <stdio.h>

int main()
{
    // Loops in C

    // While Loop - 1
    int i = 1;
    while (i <= 10)
    {
        printf("Hello %d\n", i);
        i++;
    }

    // While Loop - 2
    int j = 20;
    while (j > 0)
    {
        printf("Hello %d\n", j);
        j--;
    }

    // Do-While Loop
    int num = 1;
    do
    {
        printf("Hello World\n");
        num++;
    } while (num < 10);

    // For - Loop
    for (int number = 0; number < 20; number++)
    {
        printf("Welcome to C programming! %d\n", number);
    }

    return 0;
}