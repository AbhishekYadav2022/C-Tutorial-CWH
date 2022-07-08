#include <stdio.h>

// Function for finding the average of three numbers
void findAverage(float a, float b, float c);

int main()
{
    findAverage(15, 15, 15);
    return 0;
}

void findAverage(float a, float b, float c){
    printf("Average of the number is: %f", (a+b+c)/3);
}

