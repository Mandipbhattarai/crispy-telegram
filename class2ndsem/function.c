#include <stdio.h>

int large(int, int);

int main()
{
    int num1, num2, value;
    scanf("%d%d", &num1, &num2);
    value = large(num1, num2);
    if (value == 0)
    {
        printf("%d", &num1);
    }
    else
    {
        printf("%d", num2);
    }
    return 0;
}

int large(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}
