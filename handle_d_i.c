#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * handle_d - Handle format specifier 'd' and 'i'
 * @args: Variable argument list
 *
 * Return: Number of characters printed
 */
int handle_d_i(va_list args)
{
    int num = va_arg(args, int);
    int temp = num;
    int digits = 0;
    int printed_chars = 0;
    char *number;
    int index;

    if (num == 0)
    {
   	 write(1, "0", 1);
   	 return (1);
    }
    else if (num < 0)
    {
   	 write(1, "-", 1);
   	 printed_chars++;
   	 num = -num;
   	 temp = num;
    }

    while (temp != 0)
    {
   	 temp /= 10;
   	 digits++;
    }

    number = malloc(digits * sizeof(char));
    if (number == NULL)
   	 return (-1);

    index = digits - 1;

    while (num != 0)
    {
   	 int digit = num % 10;
   	 number[index] = digit + '0';
   	 num /= 10;
   	 index--;
    }

    write(1, number, digits);
    printed_chars += digits;

    free(number);

    return (printed_chars);
}
