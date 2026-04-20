/**
 * @file music_recording.c
 * @author Gandla Bhargavi
 * @brief
 *   This program simulates a music recording purchase system.
 *   It uses structure and array to store music categories and costs.
 *   Supports online and offline purchase.
 * @date 20-04-2026
 */

#include <stdio.h>

/**
 * @brief Structure for Music
 */
struct Music {
    int id;
    char name[20];
    int cost;
};

/**
 * @brief Initialize music data
 */
void initMusic(struct Music m[], int n) {
    m[0] = (struct Music){1, "Classical", 1000};
    m[1] = (struct Music){2, "Romantic", 800};
    m[2] = (struct Music){3, "Devotional", 600};
    m[3] = (struct Music){4, "Instrumental", 900};
}

/**
 * @brief Display music list
 */
void showMusic(struct Music m[], int n) {
    printf("\nAvailable Music Recordings:\n");
    for(int i = 0; i < n; i++) {
        printf("%d. %s - %d Rs\n", m[i].id, m[i].name, m[i].cost);
    }
}

/**
 * @brief Purchase music
 */
void purchase(struct Music m[], int n) {

    int choice, type, found = 0;

    printf("\n1. Online Purchase\n2. Offline Purchase\n");
    printf("Enter choice: ");
    scanf("%d", &type);

    showMusic(m, n);

    printf("Select music: ");
    scanf("%d", &choice);

    for(int i = 0; i < n; i++) {

        if(m[i].id == choice) {

            printf("Selected: %s\n", m[i].name);
            printf("Cost: %d Rs\n", m[i].cost);

            if(type == 1) {
                printf("Payment Successful (Online)\n");
            }
            else if(type == 2) {
                printf("Pay at counter (Offline)\n");
            }
            else {
                printf("Invalid payment type!\n");
            }

            found = 1;
            break;
        }
    }

    if(!found) {
        printf("Invalid selection!\n");
    }
}

/**
 * @brief Main function
 */
int main() {

    struct Music m[4];
    int choice;

    initMusic(m, 4);

    printf("===== Music Recording Store =====\n");
    printf("Date: 19-04-2026\n");

    do {
        printf("\n1. Show Music\n");
        printf("2. Purchase\n");
        printf("3. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                showMusic(m, 4);
                break;

            case 2:
                purchase(m, 4);
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