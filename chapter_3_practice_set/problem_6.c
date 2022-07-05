#include <stdio.h>

int main()
{
    // Program to find the greatest number
    int firstNum, secondNum, thirdNum, fourthNum;
    printf("Enter first number: ");
    scanf("%d", &firstNum);

    printf("Enter second number: ");
    scanf("%d", &secondNum);

    printf("Enter third number: ");
    scanf("%d", &thirdNum);

    printf("Enter fourth number: ");
    scanf("%d", &fourthNum);
  
    if (firstNum > secondNum && firstNum > thirdNum && firstNum > fourthNum)
    {
        printf("%d is the greatest number", firstNum);
    }
    else if (secondNum > firstNum && secondNum > thirdNum && secondNum > fourthNum)
    {
        printf("%d is the greatest number", secondNum);
    }
    else if (thirdNum > firstNum && thirdNum > secondNum && thirdNum > fourthNum)
    {
        printf("%d is the greatest number", thirdNum);
    }
    else{
        printf("%d is the greatest number", fourthNum);
    }
    

    return 0;
}