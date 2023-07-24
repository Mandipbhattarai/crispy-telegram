#include <stdio.h>

int reverse(int);

int main()
{
    int n, rev;
    scanf("%d", &n);
    rev = reverse(n);
    printf("%d", rev);
    return 0;
}

int reverse(int n)
{
    int r, rev = 0;
    while (n > 0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    return rev;
}