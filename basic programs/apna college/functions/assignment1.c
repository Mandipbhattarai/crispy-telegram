#include <stdio.h>
int students = 2;
int subjects = 5;
int highest_marks(int marks[students][subjects]);

int main()
{
    char std_name[students][20];
    int marks[students][subjects];
    for (int i = 0; i < students; i++)
    {
        printf("Enter students %d name", i + 1);
        scanf("%s", std_name[i]);
        for (int j = 0; j < subjects; j++)
        {
            printf("Enter the marks of subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
    int choice;
    printf("Enter the choice to make: \n1. Name of the students with highest marks in a particular subject.\n2. Overall percentage result of the class.\n3. Total number of passing students in the class.\n4. Total number of students failing in one subjects.\n5. Total number of distinction in the class.\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        highest_marks(marks);
        break;

    default:
        break;
    }

    return 0;
}

int highest_marks(int marks[students][subjects])
{
    int max = marks[0][0];
    for (int i = 0; i < subjects; i++)
    {
        for (int j = 0; j < students; j++)
        {
            if (max < marks[i][j])
            {
                max = marks[i][j];
            }
        }
        printf("The highest mark is %d", max);
    }
}
