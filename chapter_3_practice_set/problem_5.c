#include <stdio.h>

int main()
{
    // Checking whether a character is in lowercase or uppercase
    printf("Enter the character here: ");
    char character;
    scanf("%c", &character);
    if (character >= 'a' && character <= 'z')
    {
        printf("The character is in lowercase");
    }
    else{
        printf("The character is in uppercase");
    }
    
    return 0;
}