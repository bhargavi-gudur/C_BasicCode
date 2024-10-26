/**
 * @file switch_case.c
 * @author Gandla Bhargavi
 * @brief This program demonstrates the use of switch-case statements to perform basic arithmetic operations.
 * @version 0.1
 * @date 2024-10-23
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <stdio.h>
void switchcase(); // function declartion

/**
 * @brief main function
 *
 * @return int
 */
int main()
{
    switchcase(); // function calling
    return 0;
}
/**
 * @brief Function to perform arithmetic operations based on user choice
 *
 */
void switchcase()
{
    int choice, a, b;
    int result;
    printf("enter two integers a and b\n");
    scanf("%d%d", &a, &b);
    printf("enter the choice\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        result = a + b;
        printf("addition :%d", result);
        break;
    case 2:
        result = a + b;
        printf("addition :%d", result);
        break;
    case 3:
        result = a - b;
        printf("subtraction :%d", result);
        break;
    case 4:
        result = a % b;
        printf("modulus :%d", result);
        break;
    case 5:
        result = a / b;
        printf("division :%d", result);
        break;
    case 6:
        result = a * b;
        printf("mul :%d", result);
        break;
    default:
        printf("invalid value");
    }
}
