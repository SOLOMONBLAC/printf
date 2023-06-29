#include <stdio.h>
#include"main"

/**
 * print_hexa - Prints a hexadecimal num_1ber in lower or upper
 * @types: Lista of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * @size: Size specification
 * Return: Number of chars printed
 */

int print_hexa_upper(va_list types, char buffer[],
	int flags, int width, int precision, int size);

int print_hexa(va_list types, char map_to[], char buffer[],
	int flags, char flag_ch, int width, int precision, int size);

int print_hexa_upper(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	return (print_hexa
(types, "0123456789ABCDEF", buffer, flags, 'X', width, precision, size));
	}

int print_hexa(va_list types, char map_to[], char buffer[],
	int flags, char flag_ch, int width, int precision, int size)
{
	int i = BUFF_SIZE - 2;
	unsigned long int num_1 = va_arg(types, unsigned long int);
	unsigned long int init_num_1 = num_1;

	UNUSED(width);

	num_1 = unsigd_siz_convt(num_1, size);

	if (num_1 == 0)
	buffer[i--] = '0';
	buffer[BUFF_SIZE - 1] = '\0';
	while (num_1 > 0)
	{
	buffer[i--] = map_to[num_1 % 16];
	num_1 /= 16;
	}
	if (flags & F_HASH && init_num_1 != 0)
	{
	buffer[i--] = flag_ch;
	buffer[i--] = '0';
	}

	i++;
return (write_unsigd
		(0, i, buffer, flags, width, precision, size));
}

