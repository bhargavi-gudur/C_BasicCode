/**
 * @file Bitwise_And_ClearBit.c
 * @author Gandla Bhargavi
 * @brief  This program demonstrates the use of bitwise AND
 * and clear bit operations.
 * This program includes a function to perform a bitwise AND operation
 * and clear a specific bit in a given number.
 *  The function takes a pointer to an 8-bit unsigned integer
 *  and performs the operations on it.
 * @version 0.1
 * @date 2025-07-03
 *
 */
#include <stdio.h>
#include <stdint.h>

/**
 * @brief  This function performs a bitwise AND operation
 * and clears a specific bit in an 8-bit unsigned integer.
 *
 * @param num
 * @param bit_position
 */
void bitwise_and_Clearbit(uint8_t *num, uint8_t bit_position)
{
    // Check if the bit position is valid (0-7 for 8-bit unsigned integer)
    if (bit_position < 0 || bit_position > 7)
    {
        printf("Invalid bit position. It should be between 0 and 7.\n");
        return;
    }

    // Perform bitwise AND operation to clear the specified bit
    *num &= ~(1 << bit_position);

    // Print the result
    printf("Result after clearing bit %d: %u\n", bit_position, *num);
}
/**
 * @brief  Main function to demonstrate the bitwise AND
 * clear bit operation.
 *
 * @return int
 */
int main()
{
    uint8_t value;
    uint8_t bit_position;
    printf("Enter an 8-bit unsigned integer: ");
    scanf_s("%d", &value);
    printf("Enter the bit position to set (0-7): ");
    scanf_s("%d", &bit_position);
    bitwise_and_Clearbit(&value, bit_position);
    return 0;
}