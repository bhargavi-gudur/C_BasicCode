/**
 * @file vowelorconsonant.c
 * @author Gandla Bhargavi
 * @brief a simple C program that determines
 * whether a given character is a vowel, consonant, or not an alphabet
 * @version 0.1
 * @date 2024-10-31
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <stdio.h>
#include <ctype.h>
void vowelorconstant(); // function declaration .
/**
 * @brief main function
 *
 * @return int
 */
int main()
{
    vowelorconstant(); // function calling
    return 0;
}
/**
 * @brief
 *  - Check if a character is a vowel.
 *  - Check if a character is a consonant.
 *  - Identify if the character is not an alphabet.
 *
 */
void vowelorconstant()
{
    char ch;
    printf("enter the character :\n");
    scanf("%c", &ch);
    if (isalpha(ch))
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' ||
            ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            printf("it is vowel :%c", ch);
        }
        else
        {
            printf("it is consonant :%c", ch);
        }
    }
    else
    {
        printf("it is not a alphabet:%d\n", ch);
    }
}