// WAP to find the perimeter and area of rectangle

#include <stdio.h>

void rectangle(int l, int b);

int main()
{
    int l, b;
    printf("Enter the length of the rectangle\t");
    scanf("%d", &l);
    printf("Enter the breadth of the rectangle\t");
    scanf("%d", &b);

    rectangle(l, b);
    return 0;
}

void rectangle(int l, int b)
{
    int per;
    per = 2 * (l + b);

    int area;
    area = l * b;

    printf("The perimeter of rectangle is::\t %d\n", per);

    printf("The area of rectangle is::\t %d", area);

}
