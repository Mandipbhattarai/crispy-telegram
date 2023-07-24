#include <stdio.h>
int main()
{
    int no_of_guest, no_of_nights, is_business, extra_guest, charges, disc, final_charge;
    // Inputs
    printf("ENTER NUMBER OF GUESTS: ");
    scanf("%d", &no_of_guest);
    printf("ENTER NO. OF NIGHTS YOU WANT TO STAY: ");
    scanf("%d", &no_of_nights);
    printf("IS IT A BUSINESS TRIP? \n PRESS 1 FOR YES AND 0 FOR NO: ");
    scanf("%d", &is_business);
    // Processing
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
    // Output
    if (disc == 1)
    {
        disc = charges * 0.2;
        final_charge = charges - disc;
        printf("\nTOTAL CHARGE= %d", final_charge);
    }
    else
    {
        printf("\nTOTAL CHARGE= %d", charges);
    }

    return 0;
}