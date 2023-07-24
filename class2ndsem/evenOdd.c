#include <stdio.h>

int evenOdd(int);

int main()
{
    int n;
    scanf("%d", &n);
    if (evenOdd(n) == 0)
    {
        printf("It is Even.");
    }
    else
    {
        printf("It is Odd.");
    }

    return 0;
}

int evenOdd(int a)
{
    if (a % 2 == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}