#include <stdio.h>

int main()
{
    // The continue statement in C
    int i = 0;
    int skip = 5;
    while (i < 20)
    {
        if (i == skip)
        {
            continue;
        }
    }
    

    return 0;
}