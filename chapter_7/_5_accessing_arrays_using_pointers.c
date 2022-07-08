#include <stdio.h>

int main()
{
    // Accessing arrays using pointers
    int numbers[4] = {3, 4, 5, 6};
    int *ptr = &numbers[0];

    for (int i = 0; i < 4; i++)
    {
        printf("ptr points to %d\n", *ptr);
        ptr ++;
    }

    return 0;
}