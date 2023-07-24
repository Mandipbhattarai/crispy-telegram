//Code to print the box pattern in C
#include <stdio.h>

int main()
{
    int n, i, j, t; //n is representing number of the output box

    //input n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    t = 2 * n - 1;
    i = t; //i and j are the number of rows and columns of the box.
    j = t;

    // Declare box as a 2-D matrix having i number of rows 
	//and j number of columns
    int a[i][j], k, m, p;
    p = n;
    m = 0;

    for (k = 0; k < p; k++) {
        for (i = m; i < t; i++) {
            for (j = m; j < t; j++) {
                if (i == m || i == (t - 1) || j == m || j == (t - 1)) {
                    a[i][j] = n;
                    if (n == 1) {
                        break;
                    }
                }
            }
        }
        t = t - 1;
        n = n - 1;
        m = m + 1;
    }
    t = 2 * m - 1;
    for (i = 0; i < t; i++) {
        for (j = 0; j < t; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}