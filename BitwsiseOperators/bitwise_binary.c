/**
 * @file bitwise_binary.c
 * @author Gandla bhargavi
 * @brief  This program prints the binary representation of an unsigned integer.
 * @version 0.1
 * @date 2025-06-23
 *
 */
#include <stdio.h>

/**
 * @brief  Prints the binary representation of an unsigned integer.
 * @param num The unsigned integer to be printed in binary.
 */
void printBinary(unsigned int num)
{
    for (int i = 31; i >= 0; i--)
    {
        int val = ((num >> i) & 1);
        printf("%d", val);
    }
    printf("\n");
}

/**
 * @brief  Main function to demonstrate the binary representation
 * of an unsigned integer.
 *
 * @return int
 */
int main()
{
    unsigned int num = 5;
    printf("Binary representation: ");
    printBinary(num);
    return 0;
}
