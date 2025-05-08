/**
 * @file powerNum.c
 * @author Gandla Bhargavi (gandlabhargavi6@gmail.com)
 * @brief
 * @version 0.1
 * @date 2025-05-07
 *
 */
#include <stdio.h>

int exponent(int base, int exp)
{
    if (exp == 0)
        return 1;
    return base * exponent(base, exp - 1);
}

int exponent_iterative(int base, int exp)
{
    int result = 1;
    for (int i = 0; i < exp; i++)
    {
        result *= base;
    }
    return result;
}

int main()
{
    int base, exp;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);
    int result = exponent(base, exp);
    printf("%d^%d = %d\n", base, exp, result);
    int sult_iterative = exponent_iterative(base, exp);
    printf("%d^%d (iterative) = %d\n", base, exp, sult_iterative);
    
    return 0;
}