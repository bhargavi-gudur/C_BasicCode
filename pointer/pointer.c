/**
 * @file pointer.c
 * @author Gandla Bhargavi
 * @brief This is a simple C program that demonstrates 
 * the usage of pointers to access and print the value 
 * and address of an integer variable.
 * @version 0.1
 * @date 2024-10-10
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <stdio.h>

void pointer(int *a);  // function declaration.

/**
 * @brief main function calling the pointer function.
 *
 * @return int
 */
int main()
{
    int x = 9;
    pointer(&x); // function calling 
    return 0;
}

/**
 * @brief Function to print the value and address of an integer.
 *
 * @param a Pointer to an integer
 */
void pointer(int *a)
{
    printf("the value of a:%d\n", *a);
    printf("the address of a :%p\n", a);
}