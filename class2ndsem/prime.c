#include <stdio.h>

int prime(int);

int main()
{
    int n;
    scanf("%d", &n);
    if (prime(n) == 0)
    {
        printf("It is prime.");
    }
    else
    {
        printf("It is not prime.");
    }

    return 0;
}

int prime(int a)
{
    int flag = 0;
    for (int i = 1; i < a / 2; i++)
    {
        if (a % i == 0)
        {
            flag++;
        }
    }
    if (flag == 1)
    {
        return 0;
    }
    return 1;
}