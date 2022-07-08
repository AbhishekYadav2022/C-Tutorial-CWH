#include <stdio.h>

int main()
{
    int num = 5;
    int marks[num];
    for (int i = 1; i < num; i++)
    {
        printf("Enter marks of student with roll no %d: ", i+1);
        scanf("%d", &marks[i]);
        printf("The marks of student with roll no %d is: %d\n",i+2, marks[i]);
    }
    
    return 0;
}