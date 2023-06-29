#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

#define UNUSED(x) (void)(x)

int _printf(const char *format, ...);
int _vprintf(const char *format, va_list args);
int print_string(va_list args);

int _printf(const char *format, ...)
{
    va_list args;
    int length = 0;

    va_start(args, format);
    length = _vprintf(format, args);
    va_end(args);

    return length;
}

int _vprintf(const char *format, va_list args)
{
    int length = 0;

    while (*format != '\0')
    {
        if (*format == '%')
        {
            format++; /* Move past the '%' */

            /* Handle format specifier */
            if (*format == 'S')
            {
                length += print_string(args);
            }
            /* Add support for other format specifiers here */
            else
            {
                /* Unsupported format specifier, handle as regular character */
                write(1, "%", 1);
                write(1, format, 1);
                length += 2;
            }
        }
        else
        {
            /* Regular character, just print it */
            write(1, format, 1);
            length++;
        }

        format++; /* Move to the next character in the format string */
    }

    return length;
}

int print_string(va_list args)
{
    int length = 0;
    char *str = va_arg(args, char *);

    if (str == NULL)
    {
        str = "(null)";
    }

    while (*str != '\0')
    {
        if (*str < 32 || *str >= 127)
        {
            /* Print non-printable character as \x followed by the ASCII code in hexadecimal */
            printf("\\x%02X", (unsigned char)*str);
            length += 4;
        }
        else
        {
            write(1, str, 1);
            length++;
        }

        str++;
    }

    return length;
}
