#include <stdio.h>

int main()
{
    // Program for calculating simple interest
    printf("Enter principle amount here: ");
    float P;
    scanf("%f", &P);

    printf("Enter rate here: ");
    float R;
    scanf("%f", &R);

    printf("Enter time here: ");
    float T;
    scanf("%f", &T);

    float interest = P * R * T / 100;

    printf("Interest: %f", interest);
    return 0;
}