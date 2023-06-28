#include "main.h"
/**
 * handle_b - handles the %b conversion specifier
 * @args: arguments list
 *
 * Return: number of characters printed
 */

int handle_b(va_list args)
{
	unsigned int n;
	int i = BUFF_SIZE - 2;
	char buffer[BUFF_SIZE];

	n = va_arg(args, unsigned int);

	if (n == 0)
		buffer[i--] = '0';

	buffer[BUFF_SIZE - 1] = '\0';

	while (n > 0)
	{
		buffer[i--] = (n % 2) + '0';
		n /= 2;
	}

	i++;

	write(1, buffer + i, BUFF_SIZE - i - 1);

	return (BUFF_SIZE - i - 1);
}
