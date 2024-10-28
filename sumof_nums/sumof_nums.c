/**
 * @file sumof_nums.c
 * @author Gandla Bhargavi
 * @brief This project is a simple C program that
 * calculates the sum of numbers in an array.
 * @version 0.1
 * @date 2024-10-28
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <stdio.h>
#define N 6
void sumofnums(int *num); // function declaration
/**
 * @brief main function calling sumofnum function
 *
 * @return int
 */
int main()
{
    int var[N] = {1, 7, 8, 9, 12, 76};
    sumofnums(var); // call by value
}
/**
 * @brief Sum of numbers function
 * @param num Array of numbers
 */
void sumofnums(int *num)
{
    int i, sum[N] = {1, 2, 3, 4, 5, 6};
    for (i = 0; i < N; i++)
    {
        sum[i] = *(num + i) + sum[i];
        printf("the sum[%d]->%d\n", i, sum[i]);
    }
}