#include <stdio.h>

int totalSeats1 = 50, availSeats1 = 50;
int totalSeats2 = 60, availSeats2 = 60;
int totalSeats3 = 40, availSeats3 = 40;
int totalSeats4 = 70, availSeats4 = 70;
int totalSeats5 = 80, availSeats5 = 80;

int fare1 = 200, fare2 = 400, fare3 = 600, fare4 = 800, fare5 = 1000;

int main() {
    int busNo, seats, totalAmount, payment;
    printf("\n********** BOOK TICKET **********\n");
    printf("Enter Bus Number to Book Ticket: ");
    scanf("%d", &busNo);
    printf("Enter number of seats to book: ");
    scanf("%d", &seats);

    char *word = (seats == 1) ? "seat" : "seats";

    if (busNo == 101) {
        if (seats <= 0 || seats > availSeats1) {
            printf("Invalid number of seats!\n");
            return 0;
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
            return 0;
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
            return 0;
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
            return 0;
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
            return 0;
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

    return 0;
}