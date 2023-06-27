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
	int printed_chars;
	char *s;
	int i;

	i = 0;
	printed_chars = 0;
	s = va_arg(args, char *);

	if (s != NULL)
	{
		while (s[i] != '\0')
		{
			write(1, &s[i], 1);
			printed_chars++;
			i++;
		}
	}

	return (printed_chars);
}
