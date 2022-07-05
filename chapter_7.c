#include <stdio.h>

int main()
{
    // Arrays in c language
    int numberOfStudents;
    printf("Enter total number of students: ");
    scanf("%d", &numberOfStudents);
    int marks[numberOfStudents];

    marks[0] = 30;
    marks[1] = 50;
    marks[2] = 55;
    marks[3] = 45;
    marks[4] = 80;
    marks[5] = 75;
    marks[6] = 85;

    for (int i = 0; i < 6; i++)
    {
        printf("Marks of student with roll no. %d is %d\n", i+1, marks[i]);
    }
    

    return 0;
}