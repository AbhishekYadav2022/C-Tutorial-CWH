#include <stdio.h>

int main()
{
    int i;
    int j = 1;
    printf("Write a number here to print it's table: ");
    scanf("%d", &i);
    for ( j = 1; j < 11; j++)
    {
        printf("%d x %d = %d\n", i, j, i*j);
    }
    
    return 0;
}