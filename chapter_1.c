#include<stdio.h>

int main()
{
    // Making variables
    int a = 5;
    float b = 5.5;
    char c = 'c';
    printf("Hello \n");
    printf("First number is %d\n", a);
    printf("Second number is %f\n", b);
    printf("Character is %c", c);

    // Printig the favourite number
    int yourFavNum;
    printf("Write your favourite number here: ");
    scanf("%d", &yourFavNum);
    printf("Your favourite number is %d", yourFavNum);
    return 0;
}