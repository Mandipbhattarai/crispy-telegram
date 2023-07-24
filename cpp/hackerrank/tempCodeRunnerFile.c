#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    char m[4] = "one", n[4] = "two", o[6] = "three", p[5] = "four", q[5] = "five",
         r[4] = "six", s[6] = "seven", t[6] = "eight", u[5] = "nine";
    if (a <= 9)
    {

        for (int i = a; i <= b; i++)
        {
            if (i == 1)
            {
                printf("%s\n", m);
            }
            else if (i == 2)
            {
                printf("%s\n", n);
            }
            else if (i == 3)
            {
                printf("%s\n", o);
            }
            else if (i == 4)
            {
                printf("%s\n", p);
            }
            else if (i == 5)
            {
                printf("%s\n", q);
            }
            else if (i == 6)
            {
                printf("%s\n", r);
            }
            else if (i == 7)
            {
                printf("%s\n", s);
            }
            else if (i == 8)
            {
                printf("%s\n", t);
            }
            else if (i == 9)
            {
                printf("%s\n", u);
            }
        }
    }

    if (b > 9)
    {
        for (int j = 10; j <= b; j++)
        {
            if (j % 2 == 0)
            {
                printf("even\n");
            }
            else
            {
                printf("odd\n");
            }
        }
    }

    return 0;
}
