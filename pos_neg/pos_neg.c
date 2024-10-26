/**
 * @file pos_neg.c
 * @author Gandla Bhargavi
 * @brief this program demonstration is abour to find the give value is
 * positive or negative by using call by reference approach.
 * @version 0.1
 * @date 2024-10-26
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <stdio.h>
int posNeg_fun(int *num); // function declaration
/**
 * @brief  main function
 *
 * @return int
 */
int main()
{
    int val;
    printf("enter the value to find pos or neg :\n");
    scanf("%d", &val);
    posNeg_fun(&val); // function calling
    return 0;
}
/**
 * @brief  this posNeg_fun function to find the user positive or negative
 * by using call by references method.
 *
 * @param num
 * @return int
 */
int posNeg_fun(int *num) // function defintion
{
    if (*num >= 0)
    {
        printf("the value is positive :%d", *num);
    }
    else
    {
        printf("the value is negtive :%d", *num);
    }
    return *num;
}