// WAP to find the perimeter and area of rectangle

#include <stdio.h>

int rectangle(int l, int b);

int main()
{
    int l, b, perm, are;
    printf("Enter the length of the rectangle\t");
    scanf("%d", &l);
    printf("Enter the breadth of the rectangle\t");
    scanf("%d", &b);
    perm = rectangle(l, b);
    are = rectangle(l, b);
    printf("The perimeter of rectangle is::\t %d\n", perm);

    printf("The area of rectangle is::\t %d", are);

    return 0;
}

int rectangle(int l, int b)
{
   
        int per;
        per = 2 * (l + b);
    
  
        int area;
        area = l * b;
        return (per,area);
    }
