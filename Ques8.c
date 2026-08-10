/*
Q8. Student Result Analysis
*/

#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    int marks[5];
    int total;
    float percentage;
    char grade;
};

int main()
{
    struct Student s[50];
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("\nEnter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        s[i].total = 0;

        printf("Enter marks of 5 subjects: ");

        for(int j = 0; j < 5; j++)
        {
            scanf("%d", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }

        s[i].percentage = s[i].total / 5.0;

        if(s[i].percentage >= 90)
            s[i].grade = 'A';
        else if(s[i].percentage >= 80)
            s[i].grade = 'B';
        else if(s[i].percentage >= 70)
            s[i].grade = 'C';
        else if(s[i].percentage >= 60)
            s[i].grade = 'D';
        else
            s[i].grade = 'F';
    }

    int topper = 0;

    for(int i = 1; i < n; i++)
    {
        if(s[i].total > s[topper].total)
            topper = i;
    }

    float sum = 0;

    printf("\nStudent Results:\n");

    for(int i = 0; i < n; i++)
    {
        printf("\nRoll: %d", s[i].roll);
        printf("\nName: %s", s[i].name);
        printf("\nTotal: %d", s[i].total);
        printf("\nPercentage: %.2f", s[i].percentage);
        printf("\nGrade: %c\n", s[i].grade);

        sum += s[i].percentage;
    }

    printf("\nClass Topper: %s", s[topper].name);

    printf("\nStudents who failed:");

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(s[i].marks[j] < 40)
            {
                printf("\n%s", s[i].name);
                break;
            }
        }
    }

    printf("\nClass Average: %.2f\n", sum / n);

    return 0;
}
