// Write a program to accept three numbers from the user and print them in ascending in C language.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int a, b, c, temp;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);

    if (a <= b && a <= c)
    {
        temp = a;
    }
    else if (b <= a && b <= c)
    {
        temp = b;
    }
    else if (c <= a && c <= b)
    {
        temp = c;
    }
    if (temp == a)
    {
        if (b < c)
        {
            printf("The assending order is: %d %d %d", a, b, c);
        }
        else
        {
            printf("The assending order is: %d %d %d", a, c, b);
        }
    }
    else if (temp == b)
    {
        if (a < c)
        {
            printf("The assending order is: %d %d %d", b, a, c);
        }
        else
        {
            printf("The assending order is: %d %d %d", b, c, a);
        }
    }
    else if (temp == c)
    {
        if (b < a)
        {
            printf("The assending order is: %d %d %d", c, b, a);
        }
        else
        {
            printf("The assending order is: %d %d %d", c, a, b);
        }
    }
    return 0;
}