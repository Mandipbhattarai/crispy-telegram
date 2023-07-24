#include <stdio.h>

int main()
{
    int nights, person, dis, business, amount;
    printf("The total number of persons is: \n");
    scanf("%d", &person);
    printf("The total number of nights is: \n");
    scanf("%d", &nights);
    if (person <= 2)
    {
        amount = 2500 * nights;
        printf("Is this a business trip?");
        scanf("%d", &business);
    }
    else if (person == 3)
    {
        amount = 3500 * nights;
        printf("Is this a business trip?");
        scanf("%d", &business);
    }
    else if (person == 1000)
    {
        amount = 4500 * nights;
        printf("Is this a business trip?");
        scanf("%d", &business);
    }
    // type 1 for business trip and 0 for no business trip
    if (business == 1)
    {
        dis = amount - 0.2 * amount;
        printf("The sum is: %d", dis);
    }
    else
    {
        printf("The sum is: %d", amount);
    }

    return 0;
}