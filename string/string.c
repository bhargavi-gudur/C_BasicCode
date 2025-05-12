/**
 * @file string.c
 * @author Gandla bhargavi
 * @brief This program prints a string pattern.
 *        The program reads a string from the user and prints it in a pattern.
 * @version 0.1
 * @date 2025-05-11
 *
 */
#include <stdio.h>
#include <string.h>

/**
 * @brief Function to print a string pattern.
 *
 */
void string_pattern()
{
    char str[51]; // 50 characters + null terminator

    fgets(str, sizeof(str), stdin); // Read full input including spaces

    // Remove trailing newline from fgets input
    // str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);
    // Print the pattern
    for (int i = len - 1; i >= 0; i--)
    {
        printf("%s\n", &str[i]);
    }
}

/**
 * @brief  Main function to execute the string pattern function.
 *
 * @return int
 */
int main()
{
    // Call the function to print the string pattern
    string_pattern();

    return 0;
}