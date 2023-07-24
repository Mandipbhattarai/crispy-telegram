// WAP TO FIND AREA AND PERIMETER OF CIRCLE     

#include <stdio.h>

void perimeter(float r);
void area(float r);

float pi=3.14;
int main(int argc, char const *argv[])
{
    float r, pi=3.14;
    printf("Enter the raius of the circle:: \t");
    scanf("%f", &r);

    perimeter(r);
    area(r);
    return 0;
}


void perimeter(float r)
{
    float perimeter;
    perimeter=2*pi*r;

    printf("The perimeter of the circle is \t %f\n", perimeter);
}

void area(float r)
{
    float area;
    area= pi * r* r;
    printf("The area of the circle is \t %f\n", area);
}