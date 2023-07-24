#include <stdio.h>

struct employee
{
    int erp_no;
    char name[20];
    int salary;
};

int main()
{
    struct employee a[3];
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", i + 1);
        printf("Enter your erp no: ");
        scanf("%d", &a[i].erp_no);
        printf("Enter your name: ");
        scanf("%s", a[i].name);
        printf("Enter your salary: ");
        scanf("%d", &a[i].salary);
    }
    printf("Details: \n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", i + 1);
        printf("Erp no: %d\n", a[i].erp_no);
        printf("Name: %s\n", a[i].name);
        printf("Salary: %d\n", a[i].salary);
    }
    return 0;
}