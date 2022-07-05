#include <stdio.h>

int main()
{
    // Program for calculating income tax
    printf("Enter your income here: ");
    int income;
    int taxRate;
    float tax;
    scanf("%d", &income);

    if (income >= 250000 && income <= 500000)
    {
        taxRate = 5;
        tax = income * taxRate / 100;
        printf("Your income tax is: %f", tax);
    }
    else if (income > 500000 && income <= 1000000)
    {
        taxRate = 20;
        tax = income * taxRate / 100;
        printf("Your income tax is: %f", tax);
    }
    else if (income > 1000000)
    {
        taxRate = 30;
        tax = income * taxRate / 100;
        printf("Your income tax is: %f", tax);
    }
    else
    {
        printf("You are not eligible to pay income tax");
    }

    return 0;
}