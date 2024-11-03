/**
 * @file ptr_swap.c
 * @author Gandla Bhargavi
 * @brief This project is a simple C program that
 * demonstrates how to swap the values of two integers
 * using a function and pointers.
 * @version 0.1
 * @date 2024-11-03
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <stdio.h>
/**
 * @brief Swap two integers using pointers.
 *
 * @param a
 * @param b
 */
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/**
 * @brief main function
 * Print the values of the integers before and after the swap.
 * @return int
 */
int main()
{
    int x = 10, y = 20;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap: x = %d, y = %d\n", x, y);
    return 0;
}
