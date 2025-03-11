/**
 * @file escapeSequence.c
 * @brief this program is used to print the escape sequence characters.
 * @version 0.1
 * @date 2025-03-11
 * @bhargavi-gudur
 * 
 */
#include <stdio.h>

int main(void)
{
    // Here we are using \,
    // It contains two escape sequence
    // means \ and \n.
    printf("Hello\\GFG\v");
    printf("   \' Hello Geeks\' \n");
    printf(" \" Hello 2 Geeks \" ");

    printf("\ntime\? today\? your!\n");
    char *s = "A\0772\065";
    printf("%s", s);
    return (0);
}
