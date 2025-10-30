#include <stdio.h>

int availSeats1 = 43, availSeats2 = 34, availSeats3 = 24, availSeats4 = 55, availSeats5 = 34;
int fare1 = 200, fare2 = 400, fare3 = 600, fare4 = 800, fare5 = 1000;

int main() {
    int busNo;
    printf("\n********** CHECK BUS STATUS **********\n");
    printf("Enter Bus Number to Check: ");
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

    return 0;
}