/**
 * @file helloworld.c
 * @author Gandla Bhargavi
 * @brief Simple program to print "Hello, World!" to the console
 * @version 0.1
 * @date 2024-10-09
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <stdio.h>

void hello_fun(); //  function declaration
/**
 * @brief Main function
 *
 * @return int
 */
int main()
{
    hello_fun();
    return 0;
}

/**
 * @brief Function to print "Hello, World!" to the console
 */
void hello_fun()
{
    char char_var[] = "hello_time_to_learn";
    printf("Hello_World\n");
    for (int i = 0; char_var[i] != '\0'; i++)
    {
        printf("%c", char_var[i]);
    }
}