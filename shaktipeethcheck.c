/**
 * @file ShaktiPeethCheck.c
 * @author Gandla Bhargavi
 * @brief Program to check if a temple name is in
 * the Shakti Peetham list.
 *
 * @date 2025-11-03
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

/**
 * @brief Converts a string to lowercase and removes extra spaces.

 * @param str The input string to normalize.
 */
void normalize(char *str) {
    char temp[100];
    int j = 0;
    bool inSpace = false;

    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if (isspace((unsigned char)c)) {
            if (!inSpace && j > 0) {
                temp[j++] = ' ';
            }
            inSpace = true;
        } else {
            temp[j++] = tolower((unsigned char)c);
            inSpace = false;
        }
    }

    if (j > 0 && temp[j - 1] == ' ')
        j--;

    temp[j] = '\0';
    strcpy(str, temp);
}

/**
 * @brief Main function: takes temple name input, normalizes it, and checks
 *        if it exists in the sample Shakti Peetham list.
 *
 * Steps:
 *  1. Store known Shakti Peetham names in an array.
 *  2. Take input from the user (temple name).
 *  3. Convert both input and list entries to lowercase for comparison.
 *  4. Display result — "Yes" if found, "No" if not found.
 */
int main() {
    char shaktiList[][30] = {
        "kamakhya", "kalighat", "tarapith", "vishalakshi",
        "mahakali", "ambika", "jai shree", "majuli", "trikuti", "vadodara"
    };
    int totalTemples = sizeof(shaktiList) / sizeof(shaktiList[0]);

    char input[100];
    printf("Enter temple name to search: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0'; // remove newline

    normalize(input); // clean up the input

    bool found = false;
    for (int i = 0; i < totalTemples; i++) {
        char temp[100];
        strcpy(temp, shaktiList[i]);
        normalize(temp);
        if (strcmp(temp, input) == 0) {
            found = true;
            break;
        }
    }

    printf("\nDate: 03-11-2025\n");
    if (found)
        printf("Yes — \"%s\" is in the (sample) Shakti Peetham list.\n", input);
    else
        printf("No — \"%s\" is not in the (sample) Shakti Peetham list.\n", input);

    printf("\nNote: This is a sample program by Gandla Bhargavi.\n");
    printf("Add more names to 'shaktiList' for a complete list.\n");

    return 0;
}