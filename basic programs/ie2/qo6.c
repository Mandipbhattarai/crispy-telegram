// Write a program in C to Define a union called "StudentInfo" with members "rollNumber" and
// "name". Implement a function that takesinput for a variable oftype StudentInfo and displays the
// student's information.
#include <stdio.h>
union StudenttInfo
{
    int rollNumber;
    char name[20];
};

union StudenttInfo display(union StudenttInfo);

int main()
{
    union StudenttInfo Students;
    display(Students);
    return 0;
}
union StudenttInfo display(union StudenttInfo Students)
{
    printf("Enter the roll number: ");
    scanf("%d", &Students.rollNumber);
    printf("Student roll number is: %d\n", Students.rollNumber);

    printf("Enter the name: ");
    scanf("%s", Students.name);
    printf("Student name is: %s\n", Students.name);
}