/**
 * @file sequencePoint.c
 * @brief geeksforgeeks sequence point problem solution in c language
 * @version 0.1
 * @date 2021-03-11
 * @bhargavi-gudur
 * @copyright Copyright (c) 2025
 *
 */

#include <stdio.h>

 int x = 30;

/**
 * @brief   function f1() to increment the value of x by 10
 * and print the value of x.
 *
 * @return int
 */
int f1()
{
    ++x;
    x = x + 10;
    printf("fun1 -> x:%d \n", x);
    return x;
}
/**
 * @brief function f2() to decrement the value of x by 5
 * and print the value of x.
 *
 * @return int
 */
int f2()
{
    x++;
    x = x - 5;
    printf("fun2 -> x:%d\n", x);
    return x;
}
/**
 * @brief main function to call f1() and f2() functions
 * and concatenate the values of f1() and f2() functions .
 *
 * @return int
 */
int main()
{
    int p = f1() + f2();
    printf("p = %d\n", p);
    return 0;
}
/** @note: sequence point is a point in a program where
 *the side effects of previous evaluations are completed
 *and no side effects of subsequent evaluations have taken place.

 *In the above code, the function f1() and f2() are called
 *in the same statement.
 *
 * this took from geeksforgeeks website and modified print statements.
 *
 *
 */