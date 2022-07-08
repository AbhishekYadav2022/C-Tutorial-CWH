#include <stdio.h>

int main()
{
    int j;
    int count = 5;
    for (j = 0; j < count; j++)
    {
        for (int i = 0; i < count; i++)
        {
            printf(" * ");
        }
        
        printf("\n");
    }


    return 0;
}