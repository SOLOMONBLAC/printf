#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 *
 * Return: number of characters printed
 */

int print_number(int n)
{
	int count, INT_MIN = 0;

	count = 0;

	if (n == INT_MIN)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		count++;
		n = -n;
	}
	if (n / 10)
		count += print_number(n / 10);
	write(1, &"0123456789"[n % 10], 1);
	count++;

	return (count);
}
