#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 *
 * Return: number of characters printed
 */
int print_number(long int n)
{
    int i = BUFF_SIZE - 2;
    int is_negative = 0;
    unsigned long int num;
    char buffer[BUFF_SIZE];

    if (n == 0)
        buffer[i--] = '0';

    buffer[BUFF_SIZE - 1] = '\0';
    num = (unsigned long int)((n < 0) ? -n : n);
    is_negative = (n < 0) ? 1 : 0;

    if (num > INT_MAX)
    {
        buffer[i--] = '0';  /* Handle edge case where num exceeds INT_MAX */
    }
    else
    {
        while (num > 0)
        {
            buffer[i--] = (num % 10) + '0';
            num /= 10;
        }
    }

    if (is_negative)
        buffer[i--] = '-';

    write(1, buffer + i + 1, BUFF_SIZE - i - 2);

    return (BUFF_SIZE - i - 2);
}
