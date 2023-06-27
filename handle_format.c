#include "main.h"

/**
 * handle_format - handles format specifiers
 * @format: pointer to format string
 * @args: argument list
 *
 * Return: number of characters printed
 */
int handle_format(const char **format, va_list args)
{
    int (*f)(va_list);
    int count = 0;

    switch (**format)
    {
        case 'c':
            f = handle_c;
            break;
        case 's':
            f = handle_s;
            break;
        case '%':
            f = handle_percent;
            break;
        default:
            f = NULL;
    }
    if (f)
        count += f(args);
    return (count);
}
