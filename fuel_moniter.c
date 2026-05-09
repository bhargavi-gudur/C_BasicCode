/**
 * @file fuel_monitor.c
 * @author Gandla Bhargavi
 * @brief
 *   This program simulates a fuel monitoring system for petrol/diesel vehicles.
 *   - Checks fuel before engine start
 *   - Alerts low fuel while driving
 *   - Supports refueling
 * @date 09-05-2026
 */

#include <stdio.h>
#include <string.h>

/**
 * @brief Structure for Car Fuel System
 */
struct Car {
    char engineType[20];
    float fuelLevel;
    int engineOn;
};

/**
 * @brief Initialize car details
 */
void init(struct Car *c) {

    printf("Enter Engine Type (Petrol/Diesel): ");
    scanf("%s", c->engineType);

    printf("Enter current fuel (liters): ");
    scanf("%f", &c->fuelLevel);

    c->engineOn = 0;
}

/**
 * @brief Check fuel before starting
 */
void appCheck(struct Car *c) {

    printf("\n[Mobile App Check]\n");
    printf("Fuel Level: %.2f L\n", c->fuelLevel);

    if(c->fuelLevel < 5) {
        printf("Low Fuel! Please refuel before starting.\n");
    }
    else {
        printf("Fuel sufficient to start the engine.\n");
    }
}

/**
 * @brief Start engine
 */
void startEngine(struct Car *c) {

    if(c->fuelLevel <= 0) {
        printf("No fuel! Cannot start engine.\n");
        return;
    }

    c->engineOn = 1;

    printf("Engine Started\n");
}

/**
 * @brief Driving simulation
 */
void drive(struct Car *c) {

    if(c->engineOn == 0) {
        printf("Start engine first!\n");
        return;
    }

    c->fuelLevel -= 2;

    printf("Driving... Fuel left: %.2f L\n", c->fuelLevel);

    if(c->fuelLevel <= 3 && c->fuelLevel > 0) {
        printf("Low Fuel Alert! Refuel soon.\n");
    }

    if(c->fuelLevel <= 0) {

        printf("Fuel finished! Engine stopped.\n");

        c->engineOn = 0;
        c->fuelLevel = 0;
    }
}

/**
 * @brief Refuel vehicle
 */
void refuel(struct Car *c) {

    float amount;

    printf("Enter fuel to add: ");
    scanf("%f", &amount);

    c->fuelLevel += amount;

    printf("Refueled successfully. Current fuel: %.2f L\n",
           c->fuelLevel);
}

/**
 * @brief Display menu
 */
void menu(struct Car *c) {

    int choice;

    do {

        printf("\n===== Car Fuel System =====\n");
        printf("1. App Fuel Check\n");
        printf("2. Start Engine\n");
        printf("3. Drive\n");
        printf("4. Refuel\n");
        printf("5. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                appCheck(c);
                break;

            case 2:
                startEngine(c);
                break;

            case 3:
                drive(c);
                break;

            case 4:
                refuel(c);
                break;

            case 5:
                printf("Thank you!\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 5);
}

/**
 * @brief Main function
 */
int main() {

    struct Car c;

    printf("===== Fuel Monitoring System =====\n");

    init(&c);

    menu(&c);

    return 0;
}