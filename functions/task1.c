// WAP to print the sum of the series (1!/1 + 2!/2 + 3!/3 + ....... + n1/n) using function.

#include <stdio.h>

int fact(int n);
int main(int argc, char const *argv[])
{

    int x;
    register int i, y, sum = 0;
    printf("\nEnter the range starting from 1 to:- ");
    scanf("%d", &x);

    for (i = 1; i <= x; i++)
    {
        y = fact(i) / i;
        sum = sum + y;
    }

    printf("The sum of the series (1!/1 + 2!/2 + 3!/3 + ....... + n1/n) is %d", sum);

    return 0;
}

int fact(int n)
{
    register int a = 0, f=1;
    while (a <= n - 1)
    {
        f = f + f * a;
        a++;
    }
    return f;
}