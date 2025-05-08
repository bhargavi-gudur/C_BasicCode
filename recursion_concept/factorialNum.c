/**
 * @file factorialNum.c
 * @author Gandla Bhargavi (gandlabhargavi6@gmail.com)
 * @brief  This program calculates the factorial of a number using recursion.
 * @version 0.1
 * @date 2025-05-07
 *
 */
#include <stdio.h>
/**
 * @brief  This function calculates the factorial of a number using recursion.
 * 
 * @param n 
 * @return int 
 */

 int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}
/**
 * @brief  This function calculates the factorial of a number using iteration.
 * 
 * @param n 
 * @return int 
 */
int iterativeFactorial(int n)
{
    int result = 1;
    for (int i = 2; i <= n; i++)
    {
        result *= i;
    }
    return result;
}
/**
 * @brief  This function is the main entry point of the program.
 * 
 * @return int 
 */
int main()
{
    int n;
    printf(" Enter a number: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }
    int fact = factorial(n);
    int iter_fact = iterativeFactorial(n);
    printf("Factorial (recursive): %d\n", fact);
    printf("Factorial (iterative): %d\n", iter_fact);
    if (fact == iter_fact)
    {
        printf("Both methods give the same result.\n");
    }
    else
    {
        printf("The results are different.\n");
    }
    printf("Factorial of %d is %d\n", n, fact);
    return 0;
}