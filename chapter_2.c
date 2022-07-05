#include<stdio.h>

int main()
{
    // Checking associativity
    int x = 10;
    int y = 2;
    int z = 5;
    int calc = x*y/z;

    calc = 60/(2 + 4) * 4;
    printf("%d\n", calc);

    // Arithmetic instructions 
    int i = 10;
    float j = 6.5 + i;
    printf("%f", j);

    return 0;
}
