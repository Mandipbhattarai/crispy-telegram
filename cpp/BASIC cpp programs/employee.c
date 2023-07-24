#include <stdio.h>

int main()
{
    int basic_sal, hra, ta, pt, gross_sal, payble_sal;
    printf("Enter the basic salary - ");
    scanf("%d", &basic_sal);

    if (basic_sal <= 0)
    {
        printf("Salary can not be 0 or negative ");
    }
    else
    {
        printf("Baic pay of employee is: %d/-\n", basic_sal);
        hra = basic_sal * 0.1;
        printf("HRA is: %d/-\n", hra);
        ta = basic_sal * 0.05;
        printf("TA is: %d/-\n", ta);
        gross_sal = basic_sal + hra + ta;
        printf("Gross salary of employee is: %d/-\n", gross_sal);
        pt = gross_sal * 0.02;
        printf("PT is: %d/-\n", pt);
        payble_sal = gross_sal - pt;
        printf("The final salary of employee is %d/-\n", payble_sal);
    }

    return 0;
}


