#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>

// Function declarations
void getCurrentStandardTime();
float promocode(float total);

// Structure definition
struct theatre
{
    char first_name[40];
    char last_name[40];
    char phone[11];
    int number_person;
    char location[100];
    char movie_name[100];
    float ticket_price;
};

void get_name(struct theatre *movie)
{
    printf("Enter your first name: ");
    scanf("%s", movie->first_name);
    printf("Enter your last name: ");
    scanf("%s", movie->last_name);
}

void get_phone(struct theatre *movie)
{
    printf("Enter your phone number: ");
    scanf("%s", movie->phone);
}

void get_number_person(struct theatre *movie)
{
    printf("Enter the number of persons watching the movie: ");
    scanf("%d", &(movie->number_person));
}

void get_location(struct theatre *movie)
{
    printf("Enter your preferred location: ");
    scanf("%s", movie->location);
}

// here is a list of movies you can watch
void movie_list()
{
    printf("Choose the movie you want to see:\n");
    printf("Movies available are:\n");
    printf("1. Flash - Rs 200.00\n");
    printf("2. John Wick - Rs 250.00\n");
    printf("3. Spiderman: Across the Spiderverse - Rs 225.00\n");
    printf("4. Adhipurush - Rs 180.00\n");
    printf("5. Transformer: Rise of the Beast - Rs 210.00\n");
}

// functiom to book tickets
void book_tickets(struct theatre *movie)
{
    printf("Booking Details:\n");
    printf("Name: %s %s\n", movie->first_name, movie->last_name);
    printf("Phone: %s\n", movie->phone);
    printf("Number of Persons: %d\n", movie->number_person);
    printf("Location: %s\n", movie->location);
    printf("Movie Name: %s\n", movie->movie_name);

    int booking_id = rand() % 1000 + 100;
    int available_tickets = 100;
    available_tickets -= movie->number_person;

    float total_cost = movie->number_person * movie->ticket_price;

    printf("Tickets booked successfully!\n");
    printf("Booking ID: %d\n", booking_id);
    printf("Available Tickets: %d\n", available_tickets);
    printf("Total Cost: Rs %.2f\n", total_cost);

    system("cls");
    // Display the bill with current time
    printf("Bill:\n");
    printf("----------------------------\n");
    printf("C Movies:\n");
    printf("Booking ID: %d\n", booking_id);
    getCurrentStandardTime();
    printf("Name: %s %s\n", movie->first_name, movie->last_name);
    printf("Phone: %s\n", movie->phone);
    printf("Number of Persons: %d\n", movie->number_person);
    printf("Location: %s\n", movie->location);
    printf("Movie Name: %s\n", movie->movie_name);
    printf("Available Tickets: %d\n", available_tickets);
    printf("Total Cost: Rs %.2f\n", total_cost);
    printf("----------------------------\n");

    // Apply promo code discount
    total_cost = promocode(total_cost);

    printf("Total Cost: Rs %.2f\n", total_cost);
    printf("----------------------------\n");

    // End the program
    exit(0);
}

// functiom to cancel tickets
void cancel_tickets(struct theatre *movie)
{
    printf("Canceling Tickets:\n");
    printf("Name: %s %s\n", movie->first_name, movie->last_name);
    printf("Phone: %s\n", movie->phone);
    int booking_id;
    printf("Enter the booking ID: ");
    scanf("%d", &booking_id);
    printf("Tickets canceled successfully!\n");
}

// functiom to reschedule tickets
void reschedule_booking(struct theatre *movie)
{
    printf("Rescheduling Booking:\n");
    printf("Name: %s %s\n", movie->first_name, movie->last_name);
    printf("Phone: %s\n", movie->phone);
    int booking_id;
    printf("Enter the booking ID: ");
    scanf("%d", &booking_id);
    char new_date[20];
    printf("Enter the new date: ");
    scanf("%s", new_date);
    printf("Booking rescheduled successfully!\n");
}

// display the first menu
void show_menu()
{
    printf("\nMenu:\n");
    printf("1. Movies List\n");
    printf("2. Book Tickets\n");
    printf("3. Cancel Tickets\n");
    printf("4. Reschedule Booking\n");
    printf("5. Exit\n");
    printf("Select an option: ");
}

int main()
{
    system("cls");
    struct theatre movie;
    int choice, movie_choice;
    get_name(&movie);
    get_phone(&movie);
    get_number_person(&movie);
    get_location(&movie);

    while (1)
    {
        show_menu();
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            movie_list();
            break;
        case 2:
            movie_list();
            printf("Enter the movie number: ");
            scanf("%d", &movie_choice);

            switch (movie_choice)
            {
            case 1:
                strcpy(movie.movie_name, "Flash");
                movie.ticket_price = 200.00;
                break;
            case 2:
                strcpy(movie.movie_name, "John Wick");
                movie.ticket_price = 250.00;
                break;
            case 3:
                strcpy(movie.movie_name, "Spiderman: Across the Spiderverse");
                movie.ticket_price = 225.00;
                break;
            case 4:
                strcpy(movie.movie_name, "Adhipurush");
                movie.ticket_price = 180.00;
                break;
            case 5:
                strcpy(movie.movie_name, "Transformer: Rise of the Beast");
                movie.ticket_price = 210.00;
                break;
            default:
                printf("Invalid movie choice!\n");
                continue;
            }

            book_tickets(&movie);
            break;
        case 3:
            cancel_tickets(&movie);
            break;
        case 4:
            reschedule_booking(&movie);
            break;
        case 5:
            printf("Exiting...\n");
            exit(0);
        default:
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

// Function to get current standard time
void getCurrentStandardTime()
{
    time_t rawTime;
    time(&rawTime);
    struct tm *localTime = localtime(&rawTime);

    int hours = localTime->tm_hour;
    int minutes = localTime->tm_min;
    int seconds = localTime->tm_sec;

    printf("Time of booking: %02d:%02d:%02d\n", hours, minutes, seconds);
}

// Function for applying promo code discount
float promocode(float total)
{
    int code;
    printf("Do you have any Promo Code? \n");
    printf("1. Yes\n2. No\n");
    scanf("%d", &code);

    if (code == 1)
    {
        int promo_code;
        printf("Please enter your promocode: ");
        scanf("%d", &promo_code);

        if (promo_code == 1234 || promo_code == 3322)
        {
            printf("Congratulations! You have got 10%% discount\n");
            total = total - 0.1 * total;
        }
        else
        {
            printf("Sorry! You've entered the wrong promocode!\n");
        }
    }

    return total;
}