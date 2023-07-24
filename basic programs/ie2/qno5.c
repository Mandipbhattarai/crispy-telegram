#include <stdio.h>

struct Course
{
    char department[40];
    int roomno;
    int buildingno;
};

int main()
{
    int n;
    printf("Enter the number of courses to add: ");
    scanf("%d", &n);
    struct Course course1[n];
    printf("Enter the course details: \n");
    for (int i = 0; i < n; i++)
    {
        printf("Couse No. %d\n", i + 1);
        printf("Enter department: ");
        scanf("%s", course1[i].department);
        printf("Enter roomno: ");
        scanf("%d", &course1[i].roomno);
        printf("Enter buildingno: ");
        scanf("%d", &course1[i].buildingno);
        printf("\n");
    }
    printf("Details: \n");
    for (int i = 0; i < n; i++)
    {
        printf("Course No %d\n", i + 1);
        printf("Department: %s\n", course1[i].department);
        printf("roomno: %d\n", course1[i].roomno);
        printf("buildingno: %d\n", course1[i].buildingno);
    }

    return 0;
}
