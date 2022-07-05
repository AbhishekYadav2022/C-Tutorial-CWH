#include <stdio.h>

int main()
{
    // Program to convert celcius to foreignheit
    // Formula => °F = (°C × 9/5) + 32
    printf("Write temperature in celcius here: ");
    float C;
    scanf("%f", &C);

    float F = (C * 9/5) + 32;
    printf("Temperature in foreignheit is: %f", F);
    return 0;
}