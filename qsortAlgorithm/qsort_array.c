/**
 * @file qsort_array.c
 * @author GandlaBhargavi
 * @brief Quick sort implementation in C language
 * @details This program demonstrates the use of the qsort function
 * from the C standard library to sort an array of integers in ascending order.
 * @version 0.1
 * @date 2025-05-14
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief  Comparison function for qsort
 *
 * @param a
 * @param b
 * @return int
 */
int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

/**
 * @brief  Function to demonstrate qsort usage 
 *
 */
void qsort_fun()
{
    int arr[] = {10, 5, 4, 6, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    qsort(arr, n, sizeof(int), compare);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
/**
 * @brief  Main function to demonstrate quick sort
 *
 * @return int
 */
int main()
{
    qsort_fun();
    return 0;
}
