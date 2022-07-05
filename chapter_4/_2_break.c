#include <stdio.h>

int main()
{
    // The break statement in C
    for (int n = 0; n < 30; n++)
    {
        printf("%d\n", n);
        if (n == 20)
        {
            break;
        }
    }
    return 0;
}