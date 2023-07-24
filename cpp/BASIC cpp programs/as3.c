#include <stdio.h>
int main()
{
    int marks_one, marks_two, marks_three, marks_four, marks_five, total_marks;
    float grade;
    printf("Enter the marks of first subject:: ");
    scanf("%d", &marks_one);
    printf("Enter the marks of second subject:: ");
    scanf("%d", &marks_two);
    printf("Enter the marks of third subject:: ");
    scanf("%d", &marks_three);
    printf("Enter the marks of fourth subject:: ");
    scanf("%d", &marks_four);
    printf("Enter the marks of fifth subject:: ");
    scanf("%d", &marks_five);
    total_marks = marks_one + marks_two + marks_three + marks_four + marks_five;
    printf("The total marks obtained is %d\n", total_marks);
    grade = (total_marks)*0.2;
    printf("The grade is %.2f\n", grade);
    if (marks_one <= 40 || marks_two <= 40 || marks_three <= 40 || marks_four <= 40 || marks_five <= 40)
    {
        printf("Student is failed!! \n");
    }
    else
    {
        if (grade >= 75)
        {
            printf("Congratulations you got distinction\n");
        }
        else if (grade >= 60 && grade < 75)
        {
            printf("You have got first class\n");
        }
        else if (grade >= 50 && grade < 60)
        {
            printf("You have got second class\n");
        }
        else
        {
            printf("You have passed\n");
        }
    }
    return 0;
}
