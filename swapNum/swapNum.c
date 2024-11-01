/**
 * @file swapNum.c
 * @author Gandla Bhargavi
 * @brief
 * -A simple C program that demonstrates two different methods
 *  to swap the values of two integers without using a temporary variable.
 * - It includes traditional addition/subtraction and bitwise XOR operations.
 *
 * @version 0.1
 * @date 2024-11-01
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <stdio.h>
void swapnum();
void swapnum_Xor();
/**
 * @brief  main function
 *
 * @return int
 */
int main()
{
    swapnum();     // function calling
    swapnum_Xor(); // function calling
    return 0;
}
/**
 * @brief  this function Swap two numbers using addition and subtraction.
 *
 */
void swapnum()
{
    int num1, num2, swapval;
    printf("enter the num1 and num2 value : ");
    scanf("%d%d", &num1, &num2);
    printf("before swap\n");
    printf("num1[%d],num2[%d]\n", num1, num2);
    swapval = num1 + num2;
    num2 = swapval - num2;
    num1 = swapval - num1;
    printf("after swap\n");
    printf("num1[%d],num2[%d],swapval[%d]\n", num1, num2, swapval);
}
/**
 * @brief  this function Swap two numbers using bitwise XOR.
 *
 */
void swapnum_Xor()
{
    int num1, num2;
    printf("enter the num1 and num2 value : ");
    scanf("%d%d", &num1, &num2);
    printf("before swap\n");
    printf("num1[%d],num2[%d]\n", num1, num2);
    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num2 ^ num1;
    printf("after swap\n");
    printf("num1[%d],num2[%d]\n", num1, num2);
}