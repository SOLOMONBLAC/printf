#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Printf function
 * @format: Format string
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int printed_chars = 0, i = 0;

	if (format == NULL)
	return (-1);
	va_start(args, format);
	while (format && format[i] != '\0')
	{
		if (format[i] != '%')
	{	write(1, &format[i], 1);
		printed_chars++;
	}	else if (format[i] == '%' && format[i + 1] != '\0')
	{	i++;
		if (format[i] == 'c')
		printed_chars += handle_c(args);
		else if (format[i] == 's')
		printed_chars += handle_s(args);
		else if (format[i] == 'd' || format[i] == 'i')
		printed_chars += handle_d_i(args);
		else if (format[i] == '%')
	{	write(1, &format[i], 1);
		printed_chars++;
	}
	}	i++;
		if (format[i] != '%')
	{	write(1, &format[i], 1);
		printed_chars++;
	}	else if (format[i] == '%' && format[i + 1] != '\0')
	{	i++;
		if (format[i] == 'c')
		printed_chars += handle_c(args);
		else if (format[i] == 's')
		printed_chars += handle_s(args);
		else if (format[i] == '%')
	{	write(1, &format[i], 1);
		printed_chars++;
	}
	}	i++;
	}	va_end(args);
		return (printed_chars);
}
