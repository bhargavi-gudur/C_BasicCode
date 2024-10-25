/**
 * @file odd_even.cpp
 * @author Gandla Bhargavi
 * @brief This project determines whether a given integer is odd or even,
 * and identifies negative numbers.
 * @version 0.1
 * @date 2024-10-25
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <stdio.h>

void odd_even_fun(int *num); // function declaration
/**
 * @brief main function demostrating call by reference  and call by value.
 *
 * @return int
 */
int main()
{
    int var;
    printf("enter the variable :\n");
    scanf("%d", &var);
    odd_even_fun(&var); // function calling
    return 0;
}
/**
 * @brief Contains the main logic for checking if a number is odd or even
 *
 * @param num
 */
void odd_even_fun(int *num)
{

    if (*num > 0)
    {
        if ((*num) % 2 == 0)

        {
            printf("it is even number \n");
        }
        else
        {
            printf("it is odd number \n");
        }
    }
    else
    {
        printf(" it is negitive number\n");
    }
}