#include <stdio.h>

int main()
{
    printf("Enter a number here: ");
    int count = 5;
    scanf("%d", &count);
    int i = 1;
    int j;

    for (j = 1; j < count; j++)
    {
        for (i = 0; i < j; i++)
        {
            printf(" * ");
        }

        printf("\n");
    }

    return 0;
}