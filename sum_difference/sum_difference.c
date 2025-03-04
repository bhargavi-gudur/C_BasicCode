/**
 * @file sum_difference.c
 * @author gandla bhargavi
 * @brief This code is used to find the sum and difference of two numbers.
 * @note code question took from hackerrank .
 * @version 0.1
 * @date 2025-03-04
 *
 */
#include <stdio.h>

void sum_diffTwoNum();
/**
 * @brief   main function is the entry point of the program
 * 
 * @return int 
 */
int main()
{
    sum_diffTwoNum();   //calling function to find sum and difference of two numbers
    return 0;
}
/**
 * @brief sum_diffTwoNum function is used to find the sum and difference
 *  of two numbers.
 *
 */
void sum_diffTwoNum()
{
    int num_a, num_b, int_sum = 0;
    float num_c, num_d, float_sum = 0.0f;

    printf("Enter two integers and two float numbers: ");
    scanf("%d%d", &num_a, &num_b);
    scanf("%f%f", &num_c, &num_d);

    int_sum = num_a + num_b; //sum of two integers
    num_b = num_a - num_b;  //difference of two integers
    printf("int_sum: %d ,num_b:%d\n", int_sum, num_b);

    float_sum = num_c + num_d;  //sum of two float numbers
    num_d = num_c - num_d;     //difference of two float numbers
    printf("float_num:%.1f,num_d %.1f\n", float_sum, num_d);
}