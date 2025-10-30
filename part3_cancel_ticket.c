#include <stdio.h>

int totalSeats1 = 50, availSeats1 = 40;
int totalSeats2 = 60, availSeats2 = 50;
int totalSeats3 = 40, availSeats3 = 30;
int totalSeats4 = 70, availSeats4 = 60;
int totalSeats5 = 80, availSeats5 = 70;

int fare1 = 200, fare2 = 400, fare3 = 600, fare4 = 800, fare5 = 1000;

int main() {
    int busNo, seats, refund;
    printf("\n********** CANCEL TICKET **********\n");
    printf("Enter Bus Number to Cancel Ticket: ");
    scanf("%d", &busNo);
    printf("Enter number of seats to cancel: ");
    scanf("%d", &seats);

    char *word = (seats == 1) ? "seat" : "seats";

    if (busNo == 101) {
        int booked = totalSeats1 - availSeats1;
        if (seats <= 0 || seats > booked) {
            printf("Invalid number of seats to cancel!\n");
            return 0;
        }
        refund = seats * fare1;
        availSeats1 += seats;
        printf("%d %s cancelled on Bus 101. Refund: Rs.%d\n", seats, word, refund);
    }

    else if (busNo == 102) {
        int booked = totalSeats2 - availSeats2;
        if (seats <= 0 || seats > booked) {
            printf("Invalid number of seats to cancel!\n");
            return 0;
        }
        refund = seats * fare2;
        availSeats2 += seats;
        printf("%d %s cancelled on Bus 102. Refund: Rs.%d\n", seats, word, refund);
    }

    else if (busNo == 103) {
        int booked = totalSeats3 - availSeats3;
        if (seats <= 0 || seats > booked) {
            printf("Invalid number of seats to cancel!\n");
            return 0;
        }
        refund = seats * fare3;
        availSeats3 += seats;
        printf("%d %s cancelled on Bus 103. Refund: Rs.%d\n", seats, word, refund);
    }

    else if (busNo == 104) {
        int booked = totalSeats4 - availSeats4;
        if (seats <= 0 || seats > booked) {
            printf("Invalid number of seats to cancel!\n");
            return 0;
        }
        refund = seats * fare4;
        availSeats4 += seats;
        printf("%d %s cancelled on Bus 104. Refund: Rs.%d\n", seats, word, refund);
    }

    else if (busNo == 105) {
        int booked = totalSeats5 - availSeats5;
        if (seats <= 0 || seats > booked) {
            printf("Invalid number of seats to cancel!\n");
            return 0;
        }
        refund = seats * fare5;
        availSeats5 += seats;
        printf("%d %s cancelled on Bus 105. Refund: Rs.%d\n", seats, word, refund);
    }

    else {
        printf("Invalid Bus Number!\n");
    }

    return 0;
}