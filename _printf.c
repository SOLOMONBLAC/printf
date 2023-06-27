#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: character string
 *
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count += handle_format(&format, args);
		}
		else
		{
			write(1, format, 1);
			count++;
		}
		format++;
	}
	va_end(args);

	return (count);
}
