/**
 * @file addition.c
 * @author Gandla Bhargavi
 * @brief This is a simple C program that demonstrates addition using call by reference.
 * @version 0.1
 * @date 2024-10-10
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <stdio.h>
void addition(int *a, int *b); // function declaration
/**
 * @brief main function
 *
 * @return int
 */
int main()
{
    int x = 9;
    int y = 10;
    addition(&x, &y); // function calling
    return 0;
}
/**
 * @brief Adds two integers using their memory addresses.
 *
 * @param a Pointer to the first integer.
 * @param b Pointer to the second integer.
 */
void addition(int *a, int *b)
{
    int sum = (*a + *b);
    printf("the addition value :%d", sum);
}