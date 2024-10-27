/**
 * @file enumerator.c
 * @author Gandla Bhargavi
 * @brief the use of enums in C by enumerating various geometric shapes
 * and displaying them using a loop and a switch statement within a function.
 * @version 0.1
 * @date 2024-10-27
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <stdio.h>
/**
 * @brief enumeration of shapes
 *
 */
enum shapes
{
    rectangle = 1,
    triangle,
    circle,
    cone,
    rightangletriangle,
    sphere,
    square,
    elliposidal
};

void display_shapes(enum shapes EnumShapes); // function declaration
/**
 * @brief main function calling the enumeration to loop and display it .
 *
 * @return int
 */
int main()
{
    for (enum shapes EnumShapes = 1; EnumShapes <= elliposidal; EnumShapes++)
    {
        display_shapes(EnumShapes);
    }
    return 0;
}
/**
 * @brief A function called display_shapes
 * is declared to take an enum value and print the corresponding shape names.
 *
 * @param EnumShapes
 */
void display_shapes(enum shapes EnumShapes)
{
    switch (EnumShapes)
    {
    case rectangle:
        printf("rectangle -> %d\n", EnumShapes);
        break;
    case triangle:
        printf("triangle-> %d\n", EnumShapes);
        break;
    case circle:
        printf("circle-> %d\n", EnumShapes);
        break;
    case cone:
        printf("cone-> %d\n", EnumShapes);
        break;
    case rightangletriangle:
        printf("rightangletriangle-> %d\n", EnumShapes);
        break;
    case sphere:
        printf("sphere-> %d\n", EnumShapes);
        break;
    case square:
        printf("square-> %d\n", EnumShapes);
        break;
    case elliposidal:
        printf("elliposidal-> %d\n", EnumShapes);
        break;

    default:
        printf("invalid command\n");
    }
}
