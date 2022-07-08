#include <stdio.h>

int main()
{
    // Write a program to print the address of a variable. Use this address to get the value of this varible;
    int i = 10;
    float f = 5.5;
    int *i_ptr = &i;

    printf("%d\n", i_ptr); 
    printf("i_ptr points to %d", *i_ptr);

    return 0;
}