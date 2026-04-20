/**
 * @file grocery_booking.c
 * @author Gandla Bhargavi
 * @brief
 *   This program simulates a simple grocery booking system.
 *   The user can view available grocery items and book items.
 *   It calculates the total bill based on quantity selected.
 * @date 17-03-2026
 */

#include <stdio.h>

/**
 * @brief Displays available grocery items
 */
void showItems() {
    printf("\nAvailable Items:\n");
    printf("1. Rice - 50 Rs/kg\n");
    printf("2. Wheat - 40 Rs/kg\n");
    printf("3. Sugar - 45 Rs/kg\n");
}

/**
 * @brief Books grocery items and calculates total bill
 */
void bookItem() {

    int choice, qty;
    float total = 0;

    printf("Enter item number: ");
    scanf("%d", &choice);

    printf("Enter quantity (kg): ");
    scanf("%d", &qty);

    switch(choice) {

        case 1:
            total = qty * 50;
            printf("Rice booked.\n");
            break;

        case 2:
            total = qty * 40;
            printf("Wheat booked.\n");
            break;

        case 3:
            total = qty * 45;
            printf("Sugar booked.\n");
            break;

        default:
            printf("Invalid item!\n");
            return;
    }

    printf("Total amount: %.2f Rs\n", total);
}

/**
 * @brief Main function with menu
 */
int main() {

    int choice;

    do {

        printf("\n===== Grocery Booking System =====\n");
        printf("1. Show Items\n");
        printf("2. Book Item\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                showItems();
                break;

            case 2:
                bookItem();
                break;

            case 3:
                printf("Thank you!\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 3);

    return 0;
}