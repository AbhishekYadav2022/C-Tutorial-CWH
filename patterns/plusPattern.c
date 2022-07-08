#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size of plus sign: ");
    scanf("%d", &size);
    int middle = (size + 1) / 2;
    for (int i = 1; i <= size; i++)
    {
        if (i == middle)
        {
            printf("   ");
            for (int i = 1; i <= middle - 1; i++)
            {
                printf(" + " );
            }
            printf(" + " );
            for (int i = 1; i <= middle - 1; i++)
            {
                printf(" + " );
            }
            printf("   ");
            printf("\n");
        }
        else
        {
            for (int i = 1; i <= middle; i++)
            {
                printf("   ");
            }
            printf(" + " );
            for (int i = 1; i <= middle; i++)
            {
                printf("   ");
            }
            printf("\n");
        }
    }

    return 0;
}