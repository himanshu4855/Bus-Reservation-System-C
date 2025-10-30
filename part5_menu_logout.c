#include <stdio.h>

void viewAllBus();
void logout();

int main() {
    int choice;

    do {
        printf("\n********** MAIN MENU **********\n");
        printf("1. View All Buses\n");
        printf("2. Logout\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
            viewAllBus();
        else if (choice == 2)
            logout();
        else
            printf("Invalid choice! Try again.\n");

    } while (choice != 2);

    return 0;
}

void viewAllBus() {
    int availSeats1 = 50, availSeats2 = 60, availSeats3 = 40, availSeats4 = 70, availSeats5 = 80;
    int fare1 = 200, fare2 = 400, fare3 = 600, fare4 = 800, fare5 = 1000;

    printf("\n--- All Available Buses ---\n");
    printf("Bus No | From     | To       | Total | Available | Fare\n");
    printf("----------------------------------------------------------\n");
    printf("101    | Delhi    | Jaipur   | 50    | %d         | %d\n", availSeats1, fare1);
    printf("102    | Agra     | Lucknow  | 60    | %d         | %d\n", availSeats2, fare2);
    printf("103    | Patna    | Delhi    | 40    | %d         | %d\n", availSeats3, fare3);
    printf("104    | Mumbai   | Pune     | 70    | %d         | %d\n", availSeats4, fare4);
    printf("105    | Delhi    | Bihar    | 80    | %d         | %d\n", availSeats5, fare5);
}

void logout() {
    printf("\nLogging out... Returning to main menu.\n");
}