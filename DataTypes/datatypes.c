/**
 * @file datatypes.c
 * @author Gandla Bhargavi
 * @brief Demonstrates the usage of various fundamental data types in C.
 * @version 0.1
 * @date 2024-10-10
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <stdio.h>
int dataTypes_fun(); // function declaration
/**
 * @brief Function declaration for dataTypes_fun.
 *
 * This function handles the input and output of various data types.
 *
 * @return int Returns 0 upon successful completion.
 */
int main()
{
    dataTypes_fun();
    return 0;
}
/**
 * @brief Handles input and output for various data types.
 *
 * This function prompts the user to input values for an integer,
 * float, character, double, and short int.
 * It then prints these values along with their sizes.
 *
 * @return int Returns 0 upon successful completion.
 */
int dataTypes_fun()
{
    int x;
    float y;
    char z = 'k';
    double d;
    short int x1;
    printf("enter the value of x,y,z,s,x1 :\n");
    printf("enter the value int  x:\n");
    scanf("%d", &x);
    printf("enter the value float y:\n");
    scanf("%f", &y);
    printf("enter the value double d:\n");
    scanf("%lf", &d);
    printf("enter the value short int x1:\n");
    scanf("%hd", &x1);
    printf("***************************************\n");
    printf(" the value int        x:%d ,size of x:%zu \n", x, sizeof(x));
    printf(" the value float      y:%f ,size of y:%zu \n", y, sizeof(y));
    printf(" the value character  z:%c ,size of z:%zu \n", z, sizeof(z));
    printf(" the value double    d:%lf ,size of x:%zu \n", d, sizeof(d));
    printf(" the value short     x1:%hd ,size of x1:%zu \n", x1, sizeof(x1));
    printf("***************************************\n");
    return 0;
}