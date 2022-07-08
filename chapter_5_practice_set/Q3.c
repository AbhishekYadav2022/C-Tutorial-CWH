#include <stdio.h>

void force(float mass);

int main()
{
    force(222);
    return 0;
}

void force(float mass){
    printf("Force: %f", mass * 9.8);
}