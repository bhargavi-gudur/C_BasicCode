/**
 * @file evenodd.c
 * @author gandla bhargavi
 * @brief this hackerrank program is used to find the odd and even number in the given range
 * and also print the word for the number between 1 to 9.
 *
 * this application is used to find the odd and even number in the given range
 * and also print the word for the number between 1 to 9.
 * @version 0.1
 * @date 2025-03-06
 *
 */
#include <stdio.h>
void string_find_odd_even();
/**
 * @brief main function is the entry point of the program ,
 *  it calls the string_find_odd_even function.
 *
 * @return int
 */
int main()
{
    string_find_odd_even();
    return 0;
}
/**
 * @brief This function is used to find the odd and even number in the given range
 * and also print the word for the number between 1 to 9.
 */
void string_find_odd_even()
{
    int start, end;
    int i;
    char *Word_num[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    printf("enter the start , end number to check even or odd :\n");
    scanf("%d\n%d", &start, &end);
    printf("start[%d] , end[%d]\n", start, end);
    for (i = start; i <= end; i++)
    {
        if (i >= 1 && i <= 9)
        {

            printf("word : %s\n", Word_num[i - 1]);
        }
        else if (i > 9)
        {
            if (i % 2 == 0) // Check if the number is even
            {
                printf("even num  : %d\n", i);
            }
            else // If it's not even, it's odd
            {
                printf("odd num : %d \n", i);
            }
        }
    }
}
/**
 * @note
 * the approach done by me and the code is written by me.
 * took ai help about the approach to solve the problem.
 * some approach and modification done by me.
 *
 */