#include <stdio.h>
int main()
{
    int person, night, total, discount, payable_amount, extra, business_tour;
    printf("enter the number of person");
    scanf("%d", &person);
    printf("enter the number of night");
    scanf("%d", &night);
    if (person <= 2)
    {
        total = 2500 * night;
        printf("Are you on business trip");
        scanf("%d", &business_tour);
        if (business_tour == 1)
        {
            discount = total * 0.2;
        }
        else
        {
            discount = 0;
        }
        payable_amount = total - discount;
        printf("the total amount =%d\n", total);
        printf("the payable amount %d", payable_amount);
    }
    else if (person == 3)
    {
        total = 3500 * night;

        printf("Are you on business trip");
        scanf("%d", &business_tour);

        if (business_tour == 1)
        {
            discount = total * 0.2;
        }
        else
        {
            discount = 0;
        }
        payable_amount = total - discount;
        printf("the total amount =%d\n", total);
        printf("the payable amount %d", payable_amount);
    }

    else if (person == 4)
    {
        total = 4500 * night;

        printf("Are you on business trip");
        scanf("%d", &business_tour);

        if (business_tour == 1)
        {
            discount = total * 0.2;
        }
        else
        {
            discount = 0;
        }
        payable_amount = total - discount;
        printf("the total amount =%d\n", total);
        printf("the payable amount %d", payable_amount);
    }
    else if (person > 4)
    {
        extra = person - 4;
        total = (4500 + extra * 1000) * night;

        printf("Are you on business trip");
        scanf("%d", &business_tour);

        if (business_tour == 1)
        {
            discount = total * 0.2;
        }
        else
        {
            discount = 0;
        }
        payable_amount = total - discount;
        printf("the total amount =%d\n", total);
        printf("the payable amount %d", payable_amount);
    }
    return 0;
}


