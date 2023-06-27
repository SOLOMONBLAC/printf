#include "main.h"
#include <unistd.h>

/**
 * handle_percent - Handle the '%' specifier
 *
 * Return: Number of characters printed
 */

int handle_percent(void)
{
	write(1, "%", 1);
	(return 1);
}
