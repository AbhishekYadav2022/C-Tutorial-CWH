#include <stdio.h>

int main()
{
    // Pointer in c
    int i = 10;
    char c = 'f';

    int *j;
    j = &i;
    printf("Address of int %d is %d\n", i, j);

    printf("%d is same as %u\n", j, &i);

    printf("j points to %d\n", *j);

    char *ch_ptr = &c;
    printf("Address of char %c is %d\n", c, ch_ptr);


    // Poniter of pointer
    printf("Pointer of pointer\n");
    int num = 20;
    int *num_ptr = &num;
    int **num_ptr_ptr = &num_ptr;

    printf("Address of num(%d) is %u\n", num, num_ptr);
    printf("Address of num_ptr is %u", &num_ptr);

    return 0;
}