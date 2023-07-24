#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    system("cls");
    int roll_no[100];
    char address[100], name[100], division[100];
    for (int i = 1; i <= 2; i++)
    {
        printf("Enter your roll number");
        scanf("%d", &roll_no);
        printf("Enter your address");
        fflush(stdin);
        fgets(address, 100, stdin);
        address[strcspn(address, "\n")] = '\0';
        printf("Enter your name");
        fflush(stdin);
        fgets(name, 100, stdin);
        name[strcspn(name, "\n")] = '\0';
        printf("Enter your division");
        scanf("%s", &division);
    }
    for (int i = 1; i <= 2; i++)
    {
        printf("%d\n", roll_no);
        fflush(stdout);
        puts(address);
        printf("\n");
        fflush(stdout);
        puts(name);
        printf("\n");
        printf("%c\n\n", division);
    }
    return 0;
}