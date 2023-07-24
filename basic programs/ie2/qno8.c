#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct city
{
    char name[20];
    char state[20];
    int population;
    char mla[20];
    float area;
};
void readDetails(struct city *cities, int n);
void displayDetails(struct city *cities, int n);
void two(struct city *cities, int n);
void maharastra(struct city *cities, int n);
int main()
{
    int n;
    printf("Enter the number of cities: ");
    scanf("%d", &n);
    struct city cities[n];
    printf("Enter the details of cities:\n");
    readDetails(cities, n);
    printf("The details of %d cities is:\n", n);
    displayDetails(cities, n);
    printf("\nThe details of the cities with population more than 2 lakhs are: ");
    two(cities, n);
    printf("\nThe details of Maharastran cities are: ");
    maharastra(cities, n);

    return 0;
}
void readDetails(struct city *cities, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter the details of %d city\n", i + 1);
        printf("Enter the name of city: ");
        scanf("%s", cities[i].name);
        printf("Enter the state: ");
        scanf("%s", cities[i].state);
        printf("Enter the population: ");
        scanf("%d", &cities[i].population);
        printf("Enter the area of the city: ");
        scanf("%f", &cities[i].area);
        printf("Enter the MLA of city: ");
        scanf("%s", cities[i].mla);
    }
}
void displayDetails(struct city *cities, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nThe details of %d city is: ", i + 1);
        printf("\nName: %s", cities[i].name);
        printf("\nState: %s", cities[i].state);
        printf("\nPopulation: %d", cities[i].population);
        printf("\nArea: %f", cities[i].area);
        printf("\nMLA: %s", cities[i].mla);
    }
}
void two(struct city *cities, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (cities[i].population >= 200000)
        {
            printf("\nName: %s", cities[i].name);
            printf("\nState: %s", cities[i].state);
            printf("\nPopulation: %d", cities[i].population);
            printf("\nArea: %f", cities[i].area);
            printf("\nMLA: %s", cities[i].mla);
        }
    }
}
void maharastra(struct city *cities, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (strcmp(cities[i].state, "Maharastra") == 0)
        {
            printf("\nName: %s", cities[i].name);
            printf("\nState: %s", cities[i].state);
            printf("\nPopulation: %d", cities[i].population);
            printf("\nArea: %f", cities[i].area);
            printf("\nMLA: %s", cities[i].mla);
        }
    }
}