#include <stdio.h>
struct Mobile
{
    char brand[50];
    char color[50];
    float price;
};
void access(int n, struct Mobile phone[])
{
    printf("Enter the details: \n");
    for (int i = 0; i < n; i++)
    {
        printf("Phone No %d\n", i + 1);
        printf("Enter the brand: ");
        scanf("%s", phone[i].brand);
        printf("Enter the color: ");
        scanf("%s", phone[i].color);
        printf("Enter the price: ");
        scanf("%f", &phone[i].price);
    }
}

void print(int n, struct Mobile phone[])
{
    printf("Details: \n");
    for (int i = 0; i < n; i++)
    {
        printf("Phone Number %d\n", i + 1);
        printf("The brand of phone is: %s\n", phone[i].brand);
        printf("The color of phone is: %s\n", phone[i].color);
        printf("The price of phone is: %.2f\n", phone[i].price);
    }
}

void greater(int n, struct Mobile phone[])
{
    printf("The details of phone pricing above 30000 is: \n");
    for (int i = 0; i < n; i++)
    {
        if (phone[i].price > 30000)
        {
            printf("Phone Number %d\n", i + 1);
            printf("The brand of phone is: %s\n", phone[i].brand);
            printf("The color of phone is: %s\n", phone[i].color);
            printf("The price of phone is: %.2f\n", phone[i].price);
        }
    }
}

int main()
{
    int n;
    printf("Enter the number of mobile: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Please enter a valid number\n");
        return 0;
    }
    struct Mobile phone[n];
    access(n, phone);
    print(n, phone);
    greater(n, phone);
    return 0;
}
