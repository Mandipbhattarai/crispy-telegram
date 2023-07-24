#include <stdio.h>

int square(int n)
{
    return n * n;
}

int cube(int n)
{
    return n * n * n;
}

void calculate(int n, int (*square)(int), int (*cube)(int))
{
    int rsq = square(n);
    int rcu = cube(n);
    printf("%d\n", rsq);
    printf("%d\n", rcu);
}

int main()
{
    int num;
    scanf("%d", &num);
    calculate(num, square, cube);
    return 0;
}