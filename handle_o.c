#include <stdio.h>
#include "main.h"

/**
 * print_octal - Prints an unsigned num_1ber in octal notation
 * @types: Lista of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */

int print_octal(va_list types, char buffer[],
int flags, int width, int precision, int size)
{
	unsigned long int num_1 = va_arg(types, unsigned long int);
	unsigned long int init_num_1 = num_1;
	int count = 0;

	if (num_1 == 0)
	{
	buffer[0] = '0';
	count++;
	}
	else
	{
	int i = 0;

	while (num_1 > 0)
	{
	buffer[i++] = (num_1 % 8) + '0';
	num_1 /= 8;
	count++;
	}
	int j;

	for (j = 0; j < i / 2; j++)
	{
	char temp = buffer[j];

	buffer[j] = buffer[i - j - 1];
	buffer[i - j - 1] = temp;
	}
	}

	if (flags & F_HASH && init_num_1 != 0)
	{
	int i;

	for (i = count; i > 0; i--)
	buffer[i] = buffer[i - 1];
	buffer[0] = '0';
	count++;
	}
	return (count);
}

