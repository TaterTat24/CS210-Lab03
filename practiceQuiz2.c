/* practiceQuiz2.c
 * ===========================================================
 * Name: Benjamin Tat
 * Section: T6
 * Project: Lab 3 - Practice Quiz (0 Points)
 * Purpose: Practice how to use printf and scanf
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    int current_year;

    printf("Enter the current year and your age: ");

    scanf("%d%d", &current_year, &age);

    printf("You will graduate USAFA in %d, and you will be %d years old \n", current_year + 3, age + 3);
    return 0;
}