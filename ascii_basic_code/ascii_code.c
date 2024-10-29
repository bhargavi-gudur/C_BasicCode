/**
 * @file ascii_code.c
 * @author Gandla Bhargavi
 * @brief this program demostrate Ascii value of the character.
 * @version 0.1
 * @date 2024-10-29
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <stdio.h>
void ascii_code(); // function decalaration
/**
 * @brief main function.
 *
 * @return int
 */
int main()
{
    ascii_code(); // function calling
    return 0;
}

/**
 * @brief Prints ASCII values of characters from 'A' to 'z'.
 *
 */
void ascii_code() // function definition
{
    char char_var;
    printf("display ascii character \n:");
    for (char_var = 'A'; char_var <= 'z'; char_var++)
    {
        printf("alphat[%c]->value[%d]\n", char_var, char_var);
    }
}
