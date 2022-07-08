#include <stdio.h>

int main()
{
    // Using swith statement in c language
    int num;
    printf("Enter 1 or 2: ");
    scanf("%d", &num);
    switch (num)
    {
    case (1):
        printf("Hello");
        break;
    
    case (2):
        printf("Namaste");
        break;
    
    default:
        printf("Hi");
        break;
    }
}