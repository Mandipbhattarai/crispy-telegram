#include <stdio.h>

int main()
{
    int power, fact, choice;

    printf("Enter 1 for addition,\n2 for substraction,\n3 for multiplication,\n4 for division,\n5 to find out power,\n6 to find factorial and\n7 to exit!");

    while (1)
    {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter two numbers for addition.\n");
            int a, b;
            printf("Enter first number: ");
            scanf("%d", &a);
            printf("Enter second number: ");
            scanf("%d", &b);
            int add = a + b;
            printf("The addition two numbers is %d", add);
            break;
        case 2:
            printf("Enter two numbers for substraction.\n");
            int n1, n2;
            printf("Enter first number: ");
            scanf("%d", &n1);
            printf("Enter second number: ");
            scanf("%d", &n2);
            int sub = n1 - n2;
            printf("The substraction of two numbers is %d", sub);
            break;
        case 3:
            printf("Enter two numbers for multiplcation.\n");
            int a1, a2;
            printf("Enter first number: ");
            scanf("%d", &a1);
            printf("Enter second number: ");
            scanf("%d", &a2);
            int mul = a1 * a2;
            printf("The multiplication of two numbers is %d", mul);
            break;
        case 4:
            printf("Enter two numbers for division.\n");
            int c1, c2;
            printf("Enter first number: ");
            scanf("%d", &c1);
            printf("Enter second number: ");
            scanf("%d", &c2);
            int div = c1 / c2;
            printf("The division of two numbers is %d", div);
            break;

        case 5:
            power = 1;
            printf("Enter two numbers.\n");
            int b1, b2;
            printf("Enter base: ");
            scanf("%d", &b1);
            printf("Enter power: ");
            scanf("%d", &b2);
            while (b2 > 0)
            {
                power *= b1;
                b2--;
            }
            printf("The result is %d", power);
            break;
        case 6:
            fact = 1;
            printf("Enter a number:\n");
            int f1;
            scanf("%d", &f1);
            while (f1 > 0)
            {
                fact *= f1;
                f1--;
            }
            printf("The factorial of given number is %d.", fact);
            break;
        case 7:
            printf("Thank you for using this calculator");
            return 0;
            break;
        default:
            printf("Wrong choice! Enter your choice again.");
            break;
        }
    }
    return 0;
}