/* lab03.c
 * ===========================================================
 * Name: Benjamin Tat
 * Section: T6
 * Project: Lab 3 - Using #define and #include
 * Purpose: Learn how #define and #include really work
 */

// What do you need to #include to use the printf/scanf functions?
#include <stdio.h>

// Put Your Main Function Here
int main(int argc, char const *argv[])
{
    #define NUMBER "Second"
    #include "lab03part2.h"
    #undef NUMBER 
    #define NUMBER "Third"
    #include "lab03part2.h"
    #undef NUMBER
    #define NUMBER "Fourth"
    #include "lab03part2.h"
    return 0;
}