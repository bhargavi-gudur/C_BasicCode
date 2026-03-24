/**
 * @file grocery_booking_advanced.c
 * @author Gandla Bhargavi
 * @brief
 *   This program simulates a grocery booking system.
 *   The user can select multiple items, enter quantities,
 *   and get a final bill (receipt).
 * @date 17-03-2026
 */

#include <stdio.h>

/**
 * @brief Displays available grocery items
 */
void showItems() {
    printf("\nAvailable Items:\n");
    printf("1. Rice   - 50 Rs/kg\n");
    printf("2. Wheat  - 40 Rs/kg\n");
    printf("3. Sugar  - 45 Rs/kg\n");
}

/**
 * @brief Handles booking of multiple items and prints receipt
 */
void bookItems() {

    int choice, qty;
    float total = 0;

    do {
        showItems();

        printf("Enter item number (0 to finish): ");
        scanf("%d", &choice);

        if(choice == 0)
            break;

        printf("Enter quantity (kg): ");
        scanf("%d", &qty);

        switch(choice) {

            case 1:
                total += qty * 50;
                printf("Rice added.\n");
                break;

            case 2:
                total += qty * 40;
                printf("Wheat added.\n");
                break;

            case 3:
                total += qty * 45;
                printf("Sugar added.\n");
                break;

            default:
                printf("Invalid item!\n");
        }

    } while(choice != 0);

    printf("\n===== Final Bill =====\n");
    printf("Total Amount: %.2f Rs\n", total);
}

/**
 * @brief Main function with menu
 */
int main() {

    int choice;

    do {

        printf("\n===== Grocery Booking System =====\n");
        printf("1. Show Items\n");
        printf("2. Book Items\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                showItems();
                break;

            case 2:
                bookItems();
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