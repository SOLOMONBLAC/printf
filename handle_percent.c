#include "main.h"
#include <unistd.h>

/**
 * handle_percent - Handle the '%' specifier
 *
 * @args: Additional arguments or data for processing.
 * Return: Number of characters printed
 */
int handle_percent(va_list args)
{
	(void)args;
	write(1, "%", 1);
	return (1);
}
