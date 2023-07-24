#include <stdio.h>

int main()
{
    int no_of_guest, no_of_nights, is_business, extra_guest, charges, disc, final_charge;
    // Inputs
    printf("Enter number of guests: ");
    scanf("%d", &no_of_guest);
    printf("Enter number of nights you want to stay: ");
    scanf("%d", &no_of_nights);
    printf("Is it a business trip? \n Press 1 for Yes and 0 for No: ");
    scanf("%d", &is_business);
    if (no_of_guest <= 2)
    {
        charges = 2500 * no_of_nights;
    }
    else if (no_of_guest == 3)
    {
        charges = 3500 * no_of_nights;
    }
    else if (no_of_guest == 4)
    {
        charges = 4500 * no_of_nights;
    }
    else
    {
        charges = (4500 + (extra_guest * 1000)) * no_of_nights;
    }
    if (is_business == 1)
    {
        disc = 0.2 * charges;
        printf("The total discount you have received is: %d\n", disc);
        final_charge = charges - disc;
        printf("The total cost of the stay is: %d\n", final_charge);
    }
    else if (is_business == 0)
    {
        printf("The total cost of the stay is: %d\n", charges);
    }
    else
    {
        printf("Enter a valid number.");
    }

    return 0;
}
