// WAP to find the perimeter and area of rectangle

#include <stdio.h>

int perimeter(int l, int b);
int area(int l, int b);

int main()
{
    int l, b, p, a;
    printf("Enter the length of the rectangle\t");
    scanf("%d", &l);
    printf("Enter the breadth of the rectangle\t");
    scanf("%d", &b);
    p= perimeter(l, b);
    a=   area(l, b);
    printf("The perimeter of rectangle is::\t %d\n", p);
    printf("The area of rectangle is::\t %d", a);

 
    return 0;
}

int perimeter(int l, int b)
{
    int per;
    per = 2 * (l + b);

    return per;
}

int area(int l, int b)
{
    int area;
    area = l * b;

    return area;
}