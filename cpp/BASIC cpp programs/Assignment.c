
#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    float i;
    do
    {
        printf("Enter your basic Salary: ");
        float basicPay;
        scanf("%f", &basicPay);
        i = basicPay;
        if (basicPay <= 0)
        {
            printf("Salary can't be 0 or less than 0\n");
        }
        else
        {
            printf("Your basic Salary is: %f", basicPay);
            float hra = basicPay * 0.1;
            printf("\nHRA is: %.2f", hra);
            float ta = basicPay * 0.05;
            printf("\nTA is: %.2f", ta);
            float grossSalary = basicPay + (hra + ta);
            printf("\nGross salary after adding HRA and TA is: %.2f", grossSalary);
            float pt = grossSalary * 0.02;
            printf("\nYour payable tax is: %.2f", pt);
            float finalSalary = grossSalary - pt;
            printf("\nyour final Salary is %.2f", finalSalary);
        }

    } while (i <= 0);
    return 0;
}