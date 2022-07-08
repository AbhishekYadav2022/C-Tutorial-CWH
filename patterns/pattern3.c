#include <stdio.h>

int main()
{
    int width;
    int height;
    printf("Enter height: ");
    scanf("%d", &height);
    printf("Enter breadth: ");
    scanf("%d", &width);

    for (int m = 0; m < height; m++)
    {
        if (m == 0 || m == height - 1)
        {
            for (int i = 0; i < width; i++)
            {
                printf(" * ");
            }
        }
        else
        {

            for (int n = 0; n < width; n++)
            {
                if (n == 0 || n == width - 1)
                {
                    printf(" * ");
                }
                else
                {
                    printf("   ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}