#include "main.h"
#include <unistd.h>

/**
 * handle_s - Handle the 's' specifier
 * @args: Variable argument list
 *
 * Return: Number of characters printed
 */
int handle_s(va_list args)
{
	int printed_chars = 0;
	char *s = va_arg(args, char *);

	if (s != NULL)
	{
	int i = 0;

	while (s[i] != '\0')
	{
	write(1, &s[i], 1);
	printed_chars++;
	i++;
	}
	}
	(return printed_chars);
}
