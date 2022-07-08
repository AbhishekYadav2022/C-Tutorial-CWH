#include <stdio.h>

int main()
{
    // Shortcut for intializing an array
    char chars[6] = {'s', 'e', 'f', 'r', 'y', 't'};
    float floats[3] = {33, 40, 50};
    for (int i = 0; i < 6; i++)
    {
        printf("%c\n", chars[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%f\n", floats[i]);
    }

    return 0;
}