#include "main.h"

/**
 * handle_i - prints an integer in decimal notation
 * @args: argument list
 *
 * Return: number of characters printed
 */

int handle_i(va_list args)
{
    int n;

    n = va_arg(args, int);
    return (print_number(n));
}
