/*A class teacher wants to keep record of 10 students in class along with names
and marks obtained in 5 subjects. Write a C program with function that displays
a) Name of the student with highest marks in a particular subject.
b) Overall percentage result of the class
c) Total number of passing students in the class
d) Total number of students failing in one subject
e) Total number of distinctions in the class.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// Globally declared 2D string variable
char name[10][20];
// Function Declaration
void Highest_Mark(float[][5]);
float Overall_percentage(float marks1[][5]);
int Tot_pass_std(float marks1[][5]);
int Tot_fail_std(float marks1[][5]);
int Tot_distinction_std(float marks1[][5]);
// Main Function
int main(void)
{
    system("cls");
    float marks[10][5];
    // Taking input of 10 students with their marks in 5 respective subjects...
    for (int i = 0; i < 10; i++)
    {
        printf("Enter Student_%d name: ", i + 1);
        scanf("%s", name[i]);
        printf("------------Enter His/Her Marks below-----------\n");
        printf("PHY: ");
        scanf("%f", &marks[i][0]);
        printf("CHEM: ");
        scanf("%f", &marks[i][1]);
        printf("ENG: ");
        scanf("%f", &marks[i][2]);
        printf("CPPS: ");
        scanf("%f", &marks[i][3]);
        printf("MATH: ");
        scanf("%f", &marks[i][4]);
        printf("\n");
    }
    // Function called inside and outside printf
    Highest_Mark(marks);
    printf("Overall percentage of the class is %.2f\n", Overall_percentage(marks));
    int Total_passing_Students = Tot_pass_std(marks);
    printf("Total number of passing students in the class are %d\n", Total_passing_Students);
    printf("Total number of Failing students in one subject are %d\n", Tot_fail_std(marks));
    printf("Total number of Distinction students in class are %d\n", Tot_distinction_std(marks));
    return 0;
}
// Function to calculate highest mark of a student in particular subject[FUNCTION_1]
void Highest_Mark(float marks1[][5])
{
    float H_mark = 0.0;
    int a = 0, b = 0;
    char sub[10];
    // loop to find highest marks among all
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (marks1[i][j] > H_mark)
            {
                H_mark = marks1[i][j];
                a = i;
                b = j;
            }
        }
    }
    // this code helps to find the subject of that highest mark.
    if (b == 0)
    {
        strcpy(sub, "PHY");
    }
    else if (b == 1)
    {
        strcpy(sub, "CHEM");
    }
    else if (b == 2)
    {
        strcpy(sub, "ENG");
    }
    else if (b == 3)
    {
        strcpy(sub, "CPPS");
    }
    else if (b == 4)
    {
        strcpy(sub, "MATH");
    }
    printf("\n%s got highest mark in %s i.e. %.2f\n", name[a], sub, H_mark);
}
// Function to calculate overall percentage of the class [FUNCTION_2]
float Overall_percentage(float marks1[10][5])
{
    float total = 0, per;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            total = total + marks1[i][j];
        }
    }
    per = total * 0.02;
    return per;
}
// Function to calculate total number of passing students in the class [FUNCTION_3]
int Tot_pass_std(float marks1[10][5])
{
    int count1, count2 = 0;
    for (int i = 0; i < 10; i++)
    {
        count1 = 0;
        for (int j = 0; j < 5; j++)
        {
            if (marks1[i][j] > 40)
            {
                count1++;
            }
        }
        if (count1 == 5)
        {
            count2++;
        }
    }
    return count2;
}
// Function to calculate tot number of failing students in one subject [FUNCTION_4]
int Tot_fail_std(float marks1[][5])
{
    int count1, count2 = 0;
    for (int i = 0; i < 10; i++)
    {
        count1 = 0;
        for (int j = 0; j < 5; j++)
        {
            if (marks1[i][j] > 40)
            {
                count1++;
            }
        }
        if (count1 == 4)
        {
            count2++;
        }
    }
    return count2;
}
// Total number of distinctions in the class [FUNCTION_5]
int Tot_distinction_std(float marks1[][5])
{
    float total, per[10];
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        total = 0.0;
        for (int j = 0; j < 5; j++)
        {
            total = total + marks1[i][j];
        }
        per[i] = total;
        if (per[i] > 80.0)
        {
            count++;
        }
    }
    return count;
}
