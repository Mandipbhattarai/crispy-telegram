#include <stdio.h>

int main()
{
    int add, substract, multiply, divide, power = 1, fact = 1, choice, a, b, c;

    printf("Enter\n1 for Addition\n2 for Difference\n3 for Multiplication\n4 for Division\n5 for Factorial\n6 for Power\nEnter choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter first number:: ");
        scanf("%d", &a);
        printf("Enter second number:: ");
        scanf("%d", &b);
        add = a + b;
        printf("The sum of %d and %d is %d", a, b, add);
        break;
    case 2:
        printf("Enter first number:: ");
        scanf("%d", &a);
        printf("Enter second number:: ");
        scanf("%d", &b);
        substract = a - b;
        printf("The difference of %d and %d is %d", a, b, substract);
        break;
    case 3:
        printf("Enter first number:: ");
        scanf("%d", &a);
        printf("Enter second number:: ");
        scanf("%d", &b);
        multiply = a * b;
        printf("The product of %d and %d is %d", a, b, multiply);
        break;
    case 4:
        printf("Enter first number:: ");
        scanf("%d", &a);
        printf("Enter second number:: ");
        scanf("%d", &b);
        divide = a / b;
        printf("The division of %d and %d is %d", a, b, divide);
        break;
    case 5:
        printf("Enter number whose factorial is needed:: ");
        scanf("%d", &a);
        b = a;
        while (a > 0)
        {
            fact = fact * a;
            a--;
        }
        printf("The factorial of %d is %d", b, fact);
        break;
    case 6:
        printf("Enter base number:: ");
        scanf("%d", &a);
        printf("Enter power number:: ");
        scanf("%d", &b);
        c = b;
        while (b > 0)
        {
            power = power * a;
            b--;
        }
        printf("The power of %d to %d is %d", a, c, power);
        break;
    default:
        printf("You have written a wrong choice!");
        break;
    }

    return 0;
}