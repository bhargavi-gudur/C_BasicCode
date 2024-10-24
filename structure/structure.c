/**
 * @file structure.c
 * @author Gandla Bhargavi
 * @brief The file contains a program that calculates
 * and prints the area, diameter, and radius of a circle based on user input.
 * @version 0.1
 * @date 2024-10-24
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <stdio.h>
/**
 * @brief structure of the area of the circle.
 *
 */
struct areaofcircle
{
    float area;
    float diameter;
    float radius;
} circle;
void structure(); // function declaration
/**
 * @brief main function
 *
 * @return int
 */
int main()
{
    structure(); // function calling
    return 0;
}
/**
 * @brief This function prompts the user to enter the radius of the circle,
 * calculates the diameter and area of the circle based on the radius,
 * and then prints these values.
 *
 */
void structure()
{
    printf("Enter the radius of the circle: ");
    scanf("%f", &circle.radius);

    circle.diameter = 2 * circle.radius;
    circle.area = 3.14159 * circle.radius * circle.radius;

    printf("Radius: %.2f\n", circle.radius);
    printf("Diameter: %.2f\n", circle.diameter);
    printf("Area: %.2f\n", circle.area);
}