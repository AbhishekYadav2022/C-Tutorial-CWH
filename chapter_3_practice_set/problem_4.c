#include <stdio.h>

int main()
{
    // Check whether a year is leap year or not
    printf("Enter year here: ");
    int year;
    scanf("%d", &year);
    int modulus = year % 4;
    if (modulus != 0)
    {
        printf("%d is not a leap year.", year);
    }
    else{
        printf("%d is a leap year.", year);
    }
    

    return 0;
}