#include <stdio.h>
int total;
void welcome_screen();
int selection(int x);
int menu_softdrinks();
int alcohol_drinks();
void alcohol_inml();
int menu_snacks();
// int total_bill(int bill);
// int chose_again();

int main()
{
    int a, choice;
    welcome_screen();
    do
    {

        choice = selection(a);
        switch (choice)
        {
        case 1:
            total = menu_softdrinks(total);
            break;

        case 2:
            total = alcohol_drinks(total);
            break;

        case 3:
            // total = menu_snacks();
            break;

        case 4:
            selection(a);
            break;

        case 5:
            printf("exit");
            break;

        default:
            printf("Invalid Choice!");
            break;
        }
        if (total == 0)
        {
            printf("THANK YOU\n COME BACK SOON");
        }
        else
        {
            printf("%d", total);
        }
    } while (choice != 5);
    return 0;
}

void welcome_screen()
{
    printf("*******************************************\n");
    printf("** WELCOME TO DHAPATE`S VENDING MACHINE. **\n");
    printf("*******************************************\n\n\n");
}

int selection(int x)
{
    printf("PLEASE SELECT YOUR CHOICE\n");
    printf("PRESS 1. FOR SOFT DRINK MENU.\n");
    printf("PRESS 2. FOR ALCOHOL MENU.\n");
    printf("PRESS 3. FOR SNACKS MENU.\n");
    printf("PRESS 4. FOR CHOSE AGAIN MENU.\n");
    printf("PRESS 5. FOR EXIT.\n");
    scanf("%d", &x);
    return x;
}

int menu_softdrinks(int x)
{
    int soft_choice;
    printf("PRESS 1. FOR PEPSI\n");
    printf("PRESS 2. FOR MIRINDA\n");
    printf("PRESS 3. FOR COCO-COLA\n");
    printf("PRESS 4. FOR MAAZA\n");
    printf("PRESS 5. FOR LIMCA\n");
    printf("PRESS 6. FOR STING\n");
    printf("PRESS 7. EXIT\n");
    scanf("%d", &soft_choice);
    switch (soft_choice)
    {
    case 1:
        printf("PEPSI SELECTED\n");
        total = 50 + total;
        return total;

    case 2:
        printf("MIRINDA SELECTED\n");
        total = 40 + total;
        return total;

    case 3:
        printf("COCO-COLA SELECTED\n");
        total = 30 + total;
        return total;

    case 4:
        printf("PEPSI SELECTED\n");
        total = 50 + total;
        return total;

    case 5:
        printf("MAAZA SELECTED\n");
        total = 20 + total;
        return total;

    case 6:
        printf("LIMCA SELECTED\n");
        total = 25 + total;
        return total;

    case 7:
        return total;

    default:
        printf("PLEASE ENTER A VALID CHOICE: \n");
    }
}

int alcohol_drinks(int x)
{
    int alcohol_choice, age;
    printf("ENTER YOUR AGE\n");
    scanf("%d", &age);

    if (age < 18)
    {
        printf("YOU ARE MINOR \nCANT BE PROVIDED\n");
    }
    else if (age >= 18 && age <= 100)
    {

        printf("PRESS 1. FOR BLACK DOG\n");
        printf("PRESS 2. FOR OLD MONK\n");
        printf("PRESS 3. FOR  BIRA-BOOM\n");
        printf("PRESS 4. FOR WHITE LACE\n");
        printf("PRESS 5. EXIT\n");
        scanf("%d", &alcohol_choice);
        int litre;
        switch (alcohol_choice)
        {
        case 1:
            printf("BLACK DOG SELECTED\n");
            alcohol_inml();
            scanf("%d", &litre);
            switch (litre)
            {
            case 30:
                printf("30 ML SELECTED\n");
                total = 50 + total;
                return total;

            case 60:
                printf("60 ML SELECTED\n");
                total = 100 + total;
                return total;

            case 120:
                printf("one bottle of 120 ml  SELECTED\n");
                total = 150 + total;
                return total;

            case 1:
                return total;
            }

        case 2:
            printf("OLD MONK SELECTED\n");
            alcohol_inml();
            scanf("%d", &litre);
            switch (litre)
            {
            case 30:
                printf("30 ML SELECTED\n");
                total = 50 + total;
                return total;

            case 60:
                printf("60 ML SELECTED\n");
                total = 100 + total;
                return total;

            case 120:
                printf("one bottle of 120 ml  SELECTED\n");
                total = 150 + total;
                return total;

            case 1:
                return total;
            }

        case 3:
            printf("BIRA-BOOM SELECTED\n");
            alcohol_inml();
            scanf("%d", &litre);
            switch (litre)
            {
            case 30:
                printf("30 ML SELECTED\n");
                total = 50 + total;
                return total;

            case 60:
                printf("60 ML SELECTED\n");
                total = 100 + total;
                return total;

            case 120:
                printf("one bottle of 120 ml  SELECTED\n");
                total = 150 + total;
                return total;

            case 1:
                return total;
            }

        case 4:
            printf("WHITE LACE SELECTED\n");
            alcohol_inml();
            scanf("%d", &litre);
            switch (litre)
            {
            case 30:
                printf("30 ML SELECTED\n");
                total = 50 + total;
                return total;

            case 60:
                printf("60 ML SELECTED\n");
                total = 100 + total;
                return total;

            case 120:
                printf("one bottle of 120 ml  SELECTED\n");
                total = 150 + total;
                return total;

            case 1:
                return total;
            }

        case 5:
            return total;

        default:
            printf("PLEASE ENTER A VALID CHOICE: \n");
        }
    }
    else
    {
        printf("INVALID AGE\n");
    }
}

// int  menu_snacks(int x)
// {
//     printf("PRESS 1. FOR  POTATO CHIPS \n");
//         printf("PRESS 2. FOR  BANANA CHIPS    \n");
//             printf("PRESS 3. FOR   CHOCLATE`S   \n");
//                 printf("PRESS 4. FOR  SALTED CASHEW   \n");
//                     printf("PRESS 5. FOR  SALTED PEANUTS  \n");

// }

void alcohol_inml()
{
    printf("ENTER THE QUANTITY YOU NEED\n");
    printf("PRESS 30. FOR 30 ML OF CHOSEN ALCOHOL \n");
    printf("PRESS 60. FOR 60 ML OF CHOSEN ALCOHOL \n");
    printf("PRESS 120. FOR FULL BOTTLE OF CHOSEN ALCOHOL \n");
    printf("PRESS 1. FOR EXIT \n");
}

// int total_bill(int bill)
// {
// }

// int chose_again()
// {
//     printf("PRESS 1. TO ENTER IN MACHINE AGAIN\n ");
//     printf("PRESS 2. FOR EXIT\n");
// }