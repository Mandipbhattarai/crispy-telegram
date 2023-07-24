#include <stdio.h>

// Function to compute x raised to the power y using power series
int power_series(int x, int y)
{
    int result = 1;
    int term = 1;
    for (int i = 1; i <= y; i++)
    {
        term *= x;
        result += term;
    }
    return result;
}

// Main program
int main()
{
    int x, y;
    int result;

    printf("Enter the base number (x): ");
    scanf("%d", &x);

    printf("Enter the power (y): ");
    scanf("%d", &y);

    result = power_series(x, y);

    printf("%d raised to the power %d is: %d\n", x, y, result);
    return 0;
}