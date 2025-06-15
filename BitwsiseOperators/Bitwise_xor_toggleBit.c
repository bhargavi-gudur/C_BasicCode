/**
 * @file Bitwise_xor_toggleBit.c
 * @author Gandla Bhargavi
 * @brief  This function performs a bitwise XOR operation
 * and toggles a specific bit in an 8-bit unsigned integer.
 * @version 0.1
 * @date 2025-06-15
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>
#include <stdint.h>

/**
 * @brief Toggles a specific bit in a number using bitwise XOR.
 *
 * This function takes a pointer to a 16-bit unsigned integer and
 * toggles the bit at the specified position using the XOR operator.
 *
 * @param num Pointer to the number in which the bit will be toggled.
 * @param bitposition The position of the bit to toggle (0-15).
 */

void ToggleBit(uint16_t *num, uint16_t bitposition)
{
    *num ^= (1 << bitposition);
}

/**
 * @brief Main function to demonstrate toggling a bit in a number.
 *
 * This function prompts the user for a number and a bit position,
 * toggles the specified bit in the number, and prints the result.
 */

int main()
{
    uint16_t num;
    uint16_t bitposition;
    printf("Enter a number: ");
    scanf_s("%d", &num);
    printf("Enter the bit position to toggle (0-15): ");
    scanf_s("%d", &bitposition);
    if (bitposition < 0 || bitposition > 15)
    {
        printf("Invalid bit position. Please enter a value between 0 and 15.\n");
        return 1;
    }
    ToggleBit(&num, bitposition);
    printf("Number after toggling bit %d: %d\n", bitposition, num);

    return 0;
}