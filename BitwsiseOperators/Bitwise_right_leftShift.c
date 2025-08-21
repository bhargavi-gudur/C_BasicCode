/**
 * @file Bitwise_right_leftShift.c
 * @author Gandla Bhargavi
 * @brief to demostrate bitwise right and left shift operations and
 * take pointer to an 8-bit unsigned integer.
 * @version 0.1
 * @date 2025-08-21
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>
#include <stdint.h>

/**
 * @brief  Function to perform bitwise right and left shift operations.
 * This function takes a pointer to an 8-bit unsigned integer
 * and performs bitwise left and right shifts on it.
 *
 * @param num
 */
 void bitwise_right_left_shift(uint8_t *num)
//void bitwise_right_left_shift()
{
    uint8_t leftShift = 7, rightshift = 7;

    leftShift |= (1 << *num);
    printf("leftShift:%d | ", leftShift);
    rightshift |= (1 >> *num);
    printf("rightshift:%d", rightshift);
}
/**
 * @brief main function to test the bitwise 
 * right and left shift operations.
 *
 * @return int
 */
int main()
{
     uint8_t value;
     printf("enter the value to left the bits");
     scanf_s("%d",&value);
     bitwise_right_left_shift(&value);
    return 0;
}