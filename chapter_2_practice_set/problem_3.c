#include <stdio.h>

int main()
{
    // Program for checking whether a number is divisible by 97 or not

    printf("Check wether a number is divisible by 97 or not\n");
    printf("Enter the number (it must not be float): ");
    int num;
    scanf("%d", &num);
    // Clculation
    int modulus = num%97;
    
    if (modulus == 0)
    {
        printf("%d is divisible by 97", num);
    }
    else{
        printf("%d is not divisible by 97", num);
    }
    return 0;
}