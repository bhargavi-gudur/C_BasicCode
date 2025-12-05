/**
 * @file TimeClock.c
 * @author Gandla Bhargavi 
 * @brief Simple program to display the current   *date and time.
 *
 * @date 2025-12-03
 */

#include <stdio.h>
#include <time.h>

    /** @brief Main function
     * Steps:
     *  1. Get system time.
     *  2. Convert it to readable format.
     *  3. Print current date and time.
     */
void convert_time()
{

    time_t now;
    time(&now);               // get current time

    struct tm *t = localtime(&now);   // convert to local date & time

    printf("\n--- Current Date & Time ---\n");
    printf("Date : %02d-%02d-%04d\n", 
           t->tm_mday, t->tm_mon + 1, t->tm_year + 1900);

    printf("Time : %02d:%02d:%02d\n\n",
           t->tm_hour, t->tm_min, t->tm_sec);
}

/**@brief  main function calling convert_time function*/

int main()
 {   
convert_time();
    return 0;
}