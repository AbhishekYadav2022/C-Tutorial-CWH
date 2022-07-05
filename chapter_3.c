#include <stdio.h>

int main()
{
    int num;
    num = 10;
    num = 11;

    // Simple if else condition
    if (num == 10)
    {
        printf("Condition is true");
    }
    else
    {
        printf("Condition is false");
    }


    // Ternary operator
    int condition = 0;
    (condition == 0) ? printf("True") : printf("False");

    // Switch case
    
    int i;
    printf("Enter number between 1 to 9: ");
    scanf("%d", &i);
    
    switch (i)
    {
    case 1:
        printf("one");
        break;
    
    case 2:
        printf("two");
        break;
    
    case 3:
        printf("three");
        break;
    
    case 4:
        printf("four");
        break;
    
    case 5:
        printf("five");
        break;
    
    case 6:
        printf("six");
        break;
    
    case 7:
        printf("seven");
        break;
    case 8:
        printf("eight");
        break;
    case 9:
        printf("nine");
        break;
    
    default:
        printf("not from 1 to 9");
        break;
    }

    return 0;
}
