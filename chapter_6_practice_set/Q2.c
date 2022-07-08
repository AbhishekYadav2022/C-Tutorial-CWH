#include <stdio.h>

void address(int i, int j);

int main()
{
    int m = 10;
    int n = 20;
    address(m, n);
    return 0;
}

void address(int i, int j){
    int *i_ptr = &i;
    int *j_ptr = &j;
    printf("Address of %d is %d\n", i, i_ptr);
    printf("Address of %d is %d\n", j, j_ptr);
}