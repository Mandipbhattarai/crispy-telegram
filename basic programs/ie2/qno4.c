// Write a program in C to Create a structure called "Book" with members title, author, and price. Write a program that takes input for three books and displays the details of the book with the highest price.
#include <stdio.h>
struct books
{
    char title[40];
    char name[30];
    float price;
};

int main()
{
    struct books book[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the details of %d\n", i + 1);
        printf("Enter the title: ");
        scanf("%s", book[i].title);
        printf("Enter the author: ");
        scanf("%s", book[i].name);
        printf("Enter the price: ");
        scanf("%f", &book[i].price);
    }
    int high = 0;
    for (int i = 1; i < 3; i++)
    {
        if (book[i].price > book[high].price)
        {
            high = i;
        }
    }
    printf("The book price is : %.2f\n", book[high].price);
    printf("The book name is : %s\n", book[high].name);
    printf("The book title is : %s\n", book[high].title);
    return 0;
}