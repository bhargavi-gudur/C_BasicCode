/**
 * @file Bitwise_Or_SetBit.c
 * @author  Gandla Bhargavi
 * @brief  This program demonstrates the use of bitwise OR 
 * and set bit operations.
 * This program includes a function to perform a bitwise OR operation
 * and set a specific bit in a given number.
 *  The function takes a pointer to an 8-bit unsigned integer
 *  and performs the operations on it.
 * @version 0.1
 * @date 2025-06-10
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<stdio.h>
#include<stdint.h>

/**
 * @brief  This function performs a bitwise OR operation
 * and sets a specific bit in an 8-bit unsigned integer.
 * 
 * @param num 
 * @param bit_position 
 */
void bitwise_or_Setbit(uint8_t *num , uint8_t bit_position)
{
    // Check if the bit position is valid (0-7 for 8-bit unsigned integer)
    if (bit_position < 0 || bit_position > 7) {
        printf("Invalid bit position. It should be between 0 and 7.\n");
        return;
    }
    
    // Perform bitwise OR operation to set the specified bit
    *num |= (1 << bit_position);
    
    // Print the result
    printf("Result after setting bit %d: %u\n", bit_position, *num);
}

/**
 * @brief  Main function to demonstrate the bitwise OR set bit operation.
 * 
 * @return int 
 */
int main()
{
    uint8_t value;
    uint8_t bit_position;
    printf("Enter an 8-bit unsigned integer: ");
    scanf_s("%d",&value);
    printf("Enter the bit position to set (0-7): ");
    scanf_s("%d",&bit_position);
    bitwise_or_Setbit(&value, bit_position);
    return 0;
}