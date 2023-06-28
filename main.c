#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len = 39;
	int len2 = 39;
	int num1 = 42;
	int num2 = -987;
	int num3 = 0;
	int num4 = 123456789;
	int num5 = -987654321;
	unsigned int binary_num = 12345;

	int largestPositive = 2147483647;
	int largestNegative = -2147483648;

	printf("Test Case 1: %d\n", num1);
	_printf("Test Case 1: %d\n", num1);

	printf("Test Case 2: %d\n", num2);
	_printf("Test Case 2: %d\n", num2);

	printf("Test Case 3: %d\n", num3);
	_printf("Test Case 3: %d\n", num3);

	printf("Test Case 4: %d\n", num4);
	_printf("Test Case 4: %d\n", num4);

	printf("Test Case 5: %d\n", num5);
	_printf("Test Case 5: %d\n", num5);

	printf("Test Case 6: num1 = %d, num2 = %d\n", num1, num2);
	_printf("Test Case 6: num1 = %d, num2 = %d\n", num1, num2);

	printf("Largest Positive: %d\n", largestPositive);

	printf("Largest Negative: %d\n", largestNegative);

	_printf("Test Case 7: Binary: %b\n", binary_num);

	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	return 0;
}

