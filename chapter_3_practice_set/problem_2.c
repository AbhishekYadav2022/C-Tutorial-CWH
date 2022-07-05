#include <stdio.h>

int main()
{
    // Write a program to find out whether a student is fail or pass; if it requires total 40% and at least 33% in each subject to pass. Assume 3 subjects and take marks as an input from the user

    float totalMarksEachSubject = 100;

    printf("Enter your marks in english: ");
    float englishMarks;
    scanf("%f", &englishMarks);
    float englishPercentage = englishMarks * totalMarksEachSubject / 100;

    printf("Enter your marks in maths: ");
    float mathsMarks;
    scanf("%f", &mathsMarks);
    float mathsPercentage = mathsMarks * totalMarksEachSubject / 100;

    printf("Enter your marks in physics: ");
    float physicsMarks;
    scanf("%f", &physicsMarks);
    float physicsPercentage = physicsMarks * totalMarksEachSubject / 100;

    int totalMarks = 3 * totalMarksEachSubject;
    printf("Total marks: %d\n", totalMarks);

    float totalObtainedMarks = englishMarks + mathsMarks + physicsMarks;
    printf("Total obtained marks: %f\n", totalObtainedMarks);
    float totalPercentage = totalObtainedMarks * 100 / totalMarks;

    printf("Percentage in english is %f\nPercentage in maths is %f\nPercentage in physics is %f\n", englishPercentage, mathsPercentage, physicsPercentage);

    if (totalPercentage >= 40 && englishPercentage >= 33 && mathsPercentage >= 33 && physicsPercentage >= 33)
    {
        printf("Congratulations! You have passed the examination by obtaining %f percent", totalPercentage);
    }
    else
    {
        printf("You failed by obtaining %f percent", totalPercentage);
    }

    return 0;
}