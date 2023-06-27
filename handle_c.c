#include "main.h"
#include <unistd.h>

/**
 * handle_c - Handle the 'c' specifier
 * @args: Variable argument list
 *
 * Return: Number of characters printed
 */
int handle_c(va_list args)
{

	char c = va_arg(args, int);

	write(1, &c, 1);
	return (1);
}
