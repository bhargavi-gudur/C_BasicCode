/**
 * @file array.c
 * @author Gandla Bhargavi
 * @brief This is the main C file containing the implementation of
 *  the array printing function.
 * @version 0.1
 * @date 2024-10-22
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <stdio.h>
void array(int arr[], int n); // function declartion
/**
 * @brief main function
 *
 * @return int
 */
int main()
{
    int arr_value[] = {2, 7, 89, 78, 123, 67, 90};
    int n = (sizeof(arr_value) / sizeof(arr_value[0]));
    array(arr_value, n); // function calling
    return 0;
}
/**
 * @brief Function to print array elements and their indices
 * @param arr Array to be printed
 * @param n Size of the array
 */
void array(int arr[], int n)
{
    printf("array of values\n");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]:%d\n", i, arr[i]);
    }
}