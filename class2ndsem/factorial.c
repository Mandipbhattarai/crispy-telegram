#include <stdio.h>
int factorial(int);

int main()
{
    int n, facto;
    scanf("%d", &n);
    facto = factorial(n);
    printf("The factorial is %d", facto);

    return 0;
}
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
