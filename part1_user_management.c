#include <stdio.h>

int main() {
    char name[50], email[50], password[50];
    int choice;

    do {
        printf("\n********** USER MANAGEMENT **********\n");
        printf("1. Login\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("\nEnter Full Name: ");
            scanf(" %[^\n]", name);
            printf("Enter Email (no spaces): ");
            scanf("%s", email);
            printf("Enter Password (no spaces): ");
            scanf("%s", password);

            printf("\nLogin successful. Welcome, %s!\n", name);
        }

    } while (choice != 2);

    printf("\nExiting program... Thank you!\n");
    return 0;
}