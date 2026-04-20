/**
 * @file ticket_booking.c
 * @author Gandla Bhargavi
 * @brief
 *   This program implements a simple seat booking system in C.
 *   It stores booked seat numbers in an array and prevents
 *   double booking by checking if the seat is already booked.
 * @date 15-03-2026
 */

#include <stdio.h>

int bookedSeats[10];
int count = 0;

/**
 * @brief Displays all booked seats
 */
void showBookedSeats() {

    if(count == 0) {
        printf("No seats booked yet.\n");
        return;
    }

    printf("Booked Seats: ");
    for(int i = 0; i < count; i++) {
        printf("%d ", bookedSeats[i]);
    }
    printf("\n");
}

/**
 * @brief Books a seat if it is not already booked
 */
void bookSeat(int seat) {

    for(int i = 0; i < count; i++) {
        if(bookedSeats[i] == seat) {
            printf("Seat already booked!\n");
            return;
        }
    }

    bookedSeats[count] = seat;
    count++;

    printf("Seat %d booked successfully!\n", seat);
}

/**
 * @brief Main function with menu
 */
int main() {

    int choice, seat;

    do {

        printf("\n1. Show Booked Seats\n");
        printf("2. Book Seat\n");
        printf("3. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                showBookedSeats();
                break;

            case 2:
                printf("Enter seat number: ");
                scanf("%d", &seat);
                bookSeat(seat);
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