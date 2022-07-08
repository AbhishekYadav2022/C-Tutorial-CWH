#include <stdio.h>

int main()
{
    int i;
    int j;
    printf("Write a number here to print it's table: ");
    scanf("%d", &i);
    for ( j = 10; j > 0; j--)
    {
        printf("%d x %d = %d\n", i, j, i*j);
    }
    return 0;
}