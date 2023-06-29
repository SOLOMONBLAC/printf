#include "main.h"
#include <stdio.h>

/**
 * print_unsigned - Prints an unsigned number
 * @types: List a of arguments
 * @buffer: Buffer array to handle print
 * @flags: Calculates active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed.
 */
int print_unsigned(va_list types, char buffer[],
	int flags, int width, int precision, int size)

{
	int num_1 = 0;
	int i = BUFF_SIZE - 2;

	if (num_1 == 0)
	buffer[i--] = '0';
	buffer[BUFF_SIZE - 1] = '\0';
	while (num_1 > 0 && i >= 0)
	{
	buffer[i--] = (num_1 % 10) + '0';
	num_1 /= 10;
	}
	i++;
	return (write_unsgnd(0, BUFF_SIZE - i,
	&buffer[i], flags, width, precision, size));
}
