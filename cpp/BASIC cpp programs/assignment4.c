#include <stdio.h>
int main()
{
    int result, fact = 1, pow = 1, num1, num2, ch, i = 1;
    float div;
    printf("\n1:add\n2:sub\n3:mul\n4:div\n5:fact\n6:pow\n7:exit");
    printf("enter the choice ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("enter the num1 and num2 ");
        scanf("%d%d", &num1, &num2);
        result = num1 + num2;
        printf("addition is %d\n", result);
        break;
    case 2:
        printf("enter the num1 and num2 ");
        scanf("%d%d", &num1, &num2);
        result = num1 - num2;
        printf("subtraction is %d\n", result);
        break;
    case 3:
        printf("enter the num1 and num2 ");
        scanf("%d%d", &num1, &num2);
        result = num1 * num2;
        printf("multiplication is %d\n", result);
        break;
    case 4:
        printf("enter the num1 and num2 ");
        scanf("%d%d", &num1, &num2);
        div = num1 / num2;
        printf("division is %.2f\n", div);
        break;
    case 5:
        printf("enter the num1 ");
        scanf("%d", &num1);
        while (i <= num1)
        {
            fact = fact * i;
            i++;
        }
        printf("factorial is %d", fact);
        break;
    case 6:
        printf("enter the base and exp ");
        scanf("%d%d", &num1, &num2);
        while (num2 > 0)
        {
            pow = pow * num1;
            num2--;
        }
        printf("power id %d", pow);
    case 7:
        return 0;
    default:
        printf("wrong choice ");
    }
}