#include <stdio.h>

int main()
{
    // The continue statement in C
    int i = 0;
    int skip = 5;
    while (i < 20)
    {
        i++;
        if (i % 2 == 0)
        {
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
}