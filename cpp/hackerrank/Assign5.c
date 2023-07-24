#include <stdio.h>
int main()
{
    long digit, a = 1000, acc_no, last = 0;
    printf("Enter the account number: ");
    scanf("%lu", &acc_no);
    while (a > 0)
    {
        digit = (acc_no / a) % 10;
        last = last * 10 + digit;
        a = a / 10;
    }
    printf("The last four digit of account number is %lu", last);

    return 0;
}