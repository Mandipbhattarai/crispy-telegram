#include <stdio.h>

int natural(int n);

int main()
{
    int n, nat;
    scanf("%d", &n);
    nat = natural(n);
    printf("%d", nat);
    return 0;
}

int natural(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + natural(n - 1);
    }
}