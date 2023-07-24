#include <stdio.h>
int main()
{
    int person, night, dis, totalPay, ch;
    printf("Enter no. of person: ");
    scanf("%f", &person);
    printf("Enter no. of night: ");
    scanf("%f", &night);
    if (person <= 2)
    {
        float total = 2500 * night;
        printf("Press 1 if you are on a businness tour and 0 if you are not: ");
        scanf("%d", &ch);
        if (ch == 1)
        {
            dis = total * 0.2;
        }
        else
        {
            dis = 0;
        }
        totalPay = total - dis;
        printf("Total payable amount: %f", totalPay);
    }
    if (person == 3)
    {
        float total = 3500 * night;
        printf("Press 1 if you are on a businness tour and 0 if you are not: ");
        scanf("%d", &ch);
        if (ch == 1)
        {
            dis = total * 0.2;
        }
        else
        {
            dis = 0;
        }
        totalPay = total - dis;
        printf("Total payable amount: %f", totalPay);
    }
    if (person == 4)
    {
        float total = 4500 * night;
        printf("Press 1 if you are on a businness tour and 0 if you are not: ");
        scanf("%d", &ch);
        if (ch == 1)
        {
            dis = total * 0.2;
        }
        else
        {
            dis = 0;
        }
        totalPay = total - dis;
        printf("Total payable amount: %f", totalPay);
    }
    if (person > 4)
    {
        float total = (4500 + (1000 * (person - 4))) * night;
        printf("Press 1 if you are on a businness tour and 0 if you are not: ");
        scanf("%d", &ch);
        if (ch == 1)
        {
            dis = total * 0.2;
        }
        else
        {
            dis = 0;
        }
        totalPay = total - dis;
        printf("Total payable amount: %f", totalPay);
    }
    return 0;
}
