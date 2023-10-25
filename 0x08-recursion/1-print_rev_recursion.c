#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse recursively
 * @s: pointer to a string
 *
 * Description: This function prints a string in reverse recursively.
 * If the string is not empty (not null terminator), it calls itself with the
 * next character and then prints the current character.
 */
void _print_rev_recursion(char *s)
{
    if (*s != '\0')
    {
        _print_rev_recursion(s + 1);
        _putchar(*s);
    }
}

