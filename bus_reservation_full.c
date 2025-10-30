#include <stdio.h>

int totalSeats1 = 50, availSeats1 = 50;
int totalSeats2 = 60, availSeats2 = 60;
int totalSeats3 = 40, availSeats3 = 40;
int totalSeats4 = 70, availSeats4 = 70;
int totalSeats5 = 80, availSeats5 = 80;

int fare1 = 200, fare2 = 400, fare3 = 600, fare4 = 800, fare5 = 1000;

void viewAllBus();
void bookTicket();
void cancelTicket();
void checkBusStatus();
void logout();

int main() {
    int mainChoice;

    do {
        printf("\n********** BUS RESERVATION SYSTEM **********\n");
        printf("1. Login\n");
        printf("2. Exit\n");
        printf("Please enter your choice: ");
        scanf("%d", &mainChoice);

        if (mainChoice == 1) {
            char name[50], email[50], password[50];
            printf("\nEnter Full Name: ");
            scanf(" %[^\n]", name);
            printf("Enter Email (no spaces): ");
            scanf("%s", email);
            printf("Enter Password (no spaces): ");
            scanf("%s", password);

            printf("\nLogin successful. Welcome, %s!\n", name);

            int userChoice;
            do {
                printf("\n=== USER MENU ===\n");
                printf("1. View All Buses\n");
                printf("2. Book Ticket\n");
                printf("3. Cancel Ticket\n");
                printf("4. Check Bus Status\n");
                printf("5. Logout\n");
                printf("Enter your choice: ");
                scanf("%d", &userChoice);

                if (userChoice == 1)
                    viewAllBus();
                else if (userChoice == 2)
                    bookTicket();
                else if (userChoice == 3)
                    cancelTicket();
                else if (userChoice == 4)
                    checkBusStatus();
                else if (userChoice == 5)
                    logout();
                else
                    printf("Invalid choice! Try again.\n");

            } while (userChoice != 5);
        }

    } while (mainChoice != 2);

    printf("\nExiting program... Thank you!\n");
    return 0;
}

void viewAllBus() {
    printf("\n--- All Available Buses ---\n");
    printf("Bus No | From     | To       | Total | Available | Fare\n");
    printf("----------------------------------------------------------\n");
    printf("101    | Delhi    | Jaipur   | 50    | %d         | %d\n", availSeats1, fare1);
    printf("102    | Agra     | Lucknow  | 60    | %d         | %d\n", availSeats2, fare2);
    printf("103    | Patna    | Delhi    | 40    | %d         | %d\n", availSeats3, fare3);
    printf("104    | Mumbai   | Pune     | 70    | %d         | %d\n", availSeats4, fare4);
    printf("105    | Delhi    | Bihar    | 80    | %d         | %d\n", availSeats5, fare5);
}

void bookTicket() {
    int busNo, seats, totalAmount, payment;
    printf("\nEnter Bus Number to Book Ticket: ");
    scanf("%d", &busNo);
    printf("Enter number of seats to book: ");
    scanf("%d", &seats);

    char *word = (seats == 1) ? "seat" : "seats";

    if (busNo == 101) {
        if (seats <= 0 || seats > availSeats1) {
            printf("Invalid number of seats!\n");
            return;
        }
        totalAmount = seats * fare1;
        printf("Total Amount to Pay: Rs.%d\n", totalAmount);
        printf("Enter Payment Amount: ");
        scanf("%d", &payment);
        if (payment == totalAmount) {
            availSeats1 -= seats;
            printf("Payment successful! %d %s booked on Bus 101.\n", seats, word);
        } else printf("Payment failed!\n");
    }

    else if (busNo == 102) {
        if (seats <= 0 || seats > availSeats2) {
            printf("Invalid number of seats!\n");
            return;
        }
        totalAmount = seats * fare2;
        printf("Total Amount to Pay: Rs.%d\n", totalAmount);
        printf("Enter Payment Amount: ");
        scanf("%d", &payment);
        if (payment == totalAmount) {
            availSeats2 -= seats;
            printf("Payment successful! %d %s booked on Bus 102.\n", seats, word);
        } else printf("Payment failed!\n");
    }

    else if (busNo == 103) {
        if (seats <= 0 || seats > availSeats3) {
            printf("Invalid number of seats!\n");
            return;
        }
        totalAmount = seats * fare3;
        printf("Total Amount to Pay: Rs.%d\n", totalAmount);
        printf("Enter Payment Amount: ");
        scanf("%d", &payment);
        if (payment == totalAmount) {
            availSeats3 -= seats;
            printf("Payment successful! %d %s booked on Bus 103.\n", seats, word);
        } else printf("Payment failed!\n");
    }

    else if (busNo == 104) {
        if (seats <= 0 || seats > availSeats4) {
            printf("Invalid number of seats!\n");
            return;
        }
        totalAmount = seats * fare4;
        printf("Total Amount to Pay: Rs.%d\n", totalAmount);
        printf("Enter Payment Amount: ");
        scanf("%d", &payment);
        if (payment == totalAmount) {
            availSeats4 -= seats;
            printf("Payment successful! %d %s booked on Bus 104.\n", seats, word);
        } else printf("Payment failed!\n");
    }

    else if (busNo == 105) {
        if (seats <= 0 || seats > availSeats5) {
            printf("Invalid number of seats!\n");
            return;
        }
        totalAmount = seats * fare5;
        printf("Total Amount to Pay: Rs.%d\n", totalAmount);
        printf("Enter Payment Amount: ");
        scanf("%d", &payment);
        if (payment == totalAmount) {
            availSeats5 -= seats;
            printf("Payment successful! %d %s booked on Bus 105.\n", seats, word);
        } else printf("Payment failed!\n");
    }

    else {
        printf("Invalid Bus Number!\n");
    }
}

void cancelTicket() {
    int busNo, seats, refund;
    printf("\nEnter Bus Number to Cancel Ticket: ");
    scanf("%d", &busNo);
    printf("Enter number of seats to cancel: ");
    scanf("%d", &seats);

    char *word = (seats == 1) ? "seat" : "seats";

    if (busNo == 101) {
        int booked = totalSeats1 - availSeats1;
        if (seats <= 0 || seats > booked) {
            printf("Invalid number of seats to cancel!\n");
            return;
        }
        refund = seats * fare1;
        availSeats1 += seats;
        printf("%d %s cancelled on Bus 101. Refund: Rs.%d\n", seats, word, refund);
    }

    else if (busNo == 102) {
        int booked = totalSeats2 - availSeats2;
        if (seats <= 0 || seats > booked) {
            printf("Invalid number of seats to cancel!\n");
            return;
        }
        refund = seats * fare2;
        availSeats2 += seats;
        printf("%d %s cancelled on Bus 102. Refund: Rs.%d\n", seats, word, refund);
    }

    else if (busNo == 103) {
        int booked = totalSeats3 - availSeats3;
        if (seats <= 0 || seats > booked) {
            printf("Invalid number of seats to cancel!\n");
            return;
        }
        refund = seats * fare3;
        availSeats3 += seats;
        printf("%d %s cancelled on Bus 103. Refund: Rs.%d\n", seats, word, refund);
    }

    else if (busNo == 104) {
        int booked = totalSeats4 - availSeats4;
        if (seats <= 0 || seats > booked) {
            printf("Invalid number of seats to cancel!\n");
            return;
        }
        refund = seats * fare4;
        availSeats4 += seats;
        printf("%d %s cancelled on Bus 104. Refund: Rs.%d\n", seats, word, refund);
    }

    else if (busNo == 105) {
        int booked = totalSeats5 - availSeats5;
        if (seats <= 0 || seats > booked) {
            printf("Invalid number of seats to cancel!\n");
            return;
        }
        refund = seats * fare5;
        availSeats5 += seats;
        printf("%d %s cancelled on Bus 105. Refund: Rs.%d\n", seats, word, refund);
    }

    else {
        printf("Invalid Bus Number!\n");
    }
}

void checkBusStatus() {
    int busNo;
    printf("\nEnter Bus Number to Check: ");
    scanf("%d", &busNo);

    if (busNo == 101)
        printf("\nBus Number: 101\nSource: Delhi\nDestination: Jaipur\nTotal Seats: 50\nAvailable Seats: %d\nFare: %d\n", availSeats1, fare1);
    else if (busNo == 102)
        printf("\nBus Number: 102\nSource: Agra\nDestination: Lucknow\nTotal Seats: 60\nAvailable Seats: %d\nFare: %d\n", availSeats2, fare2);
    else if (busNo == 103)
        printf("\nBus Number: 103\nSource: Patna\nDestination: Delhi\nTotal Seats: 40\nAvailable Seats: %d\nFare: %d\n", availSeats3, fare3);
    else if (busNo == 104)
        printf("\nBus Number: 104\nSource: Mumbai\nDestination: Pune\nTotal Seats: 70\nAvailable Seats: %d\nFare: %d\n", availSeats4, fare4);
    else if (busNo == 105)
        printf("\nBus Number: 105\nSource: Delhi\nDestination: Bihar\nTotal Seats: 80\nAvailable Seats: %d\nFare: %d\n", availSeats5, fare5);
    else
        printf("Invalid Bus Number!\n");
}

void logout() {
    printf("\nLogging out... Returning to main menu.\n");
}