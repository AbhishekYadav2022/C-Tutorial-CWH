#include <stdio.h>

int main()
{
    int i = 10;
    int *a = &i;
    char c = 'f';
    char *b = &c;

    printf("Address of i is %d\n", a);
    printf("Value of ++a %d\n", ++a);
    printf("Address of c is %d\n", b);
    printf("Value of ++b %d\n", ++b);

    return 0;
}