#include <stdio.h>

struct cars_info
{
    char name[20];
    char brand[20];
    int year;
};

int main()
{
    int m;
    printf("Enter the number of cars to display: ");
    scanf("%d", &m);
    struct cars_info cars[m];
    for (int i = 0; i < m; i++)
    {
        printf("Car %d\n", i + 1);
        printf("Enter the name of car: ");
        scanf("%s", cars[i].name);
        printf("Enter the brand of car: ");
        scanf("%s", cars[i].brand);
        printf("Enter the year of car: ");
        scanf("%d", &cars[i].year);
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m - 1 - i; j++)
        {
            if (cars[j].year > cars[j + 1].year)
            {
                struct cars_info temp = cars[j];
                cars[j] = cars[j + 1];
                cars[j + 1] = temp;
            }
        }
    }
    printf("The cars in accending order of their year is: ");
    for (int i = 0; i < m; i++)
    {
        printf("Car %d\n", i + 1);
        printf("Name: %s", cars[i].name);
        printf("\nBrand: %s", cars[i].brand);
        printf("\nYear: %d", cars[i].year);
    }

    return 0;
}