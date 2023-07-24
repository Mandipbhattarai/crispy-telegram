#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Define a structure to represent worker details
struct Worker
{
    char name[50];
    int age;
    float salary;
};
int main()
{
    system("cls");
    struct Worker worker;
    int choice, n, i = 0;
    FILE *fp;
    // Open file in write mode
    fp = fopen("workers.txt", "w");
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        exit(1);
    }

    // Read worker details from user and write to file
    do
    {
        printf("Enter name, age, and salary of worker: ");
        scanf("%s %d %f", worker.name, &worker.age, &worker.salary);
        fprintf(fp, "%s %d %.2f\n", worker.name, worker.age, worker.salary);
        i++;
        printf("Enter 1 to continue, 0 to exit: ");
        scanf("%d", &choice);
    } while (choice != 0);
    // Close file
    fclose(fp);

    // Open file in read mode
    fp = fopen("workers.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        exit(1);
    }
    // Read value of n from user
    printf("Enter the value of n: ");
    scanf("%d", &n);
    // Read nth record from file and display
    for (i = 0; i < n; i++)
    {
        fscanf(fp, "%s %d %f", worker.name, &worker.age, &worker.salary);
    }
    printf("Name: %s\n", worker.name);
    printf("Age: %d\n", worker.age);
    printf("Salary: %.2f\n", worker.salary);
    // Close file
    fclose(fp);
    return 0;
}