#include <stdio.h>

struct complex
{
    float real;
    float imag;
};

struct complex add(struct complex num1, struct complex num2)
{
    struct complex result;
    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;
    return result;
}

struct complex multiply(struct complex num1, struct complex num2)
{
    struct complex product;
    product.real = num1.real * num2.real - num1.imag * num2.imag;
    product.imag = num1.real * num2.imag + num1.imag * num2.real;
    return product;
}

int main()
{
    struct complex num1, num2, a, m;
    printf("Enter the real part of first number: ");
    scanf("%f", &num1.real);
    printf("Enter the imag part of first number: ");
    scanf("%f", &num1.imag);
    printf("Enter the real part of second number: ");
    scanf("%f", &num2.real);
    printf("Enter the real part of second number: ");
    scanf("%f", &num2.imag);
    a = add(num1, num2);
    m = multiply(num1, num2);
    printf("The addition of two complex numbers is %.1f + %.1fi\n", a.real, a.imag);
    printf("The multiplication of two complex numbers is %.1f + %.1fi\n", m.real, m.imag);
}