// WAP to convert decimal number into binary number using function.

#include <stdio.h>

int num(int n);
int main()
{
    int decimal;
    printf("\nEnter decimal number:-");
    scanf("%d", &decimal);
    num(decimal);
    return 0;
}

int num(int n)
{
    int binary = 0, rem, place = 1;

    printf("The binary number is:- ");

    while (n != 0)
    {
        rem = n % 2;
        n = n / 2;
        binary = binary + (rem * place);
        place = place * 10;
        
    }
    printf("%d\n\n", binary);
}