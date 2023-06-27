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

	int largestPositive = 2147483647;
    int largestNegative = -2147483648;

    
    // Test Case 1: Basic Positive Number
    printf("Test Case 1: %d\n", num1);
    _printf("Test Case 1: %d\n", num1);

    // Test Case 2: Basic Negative Number
    printf("Test Case 2: %d\n", num2);
    _printf("Test Case 2: %d\n", num2);

    // Test Case 3: Zero
    printf("Test Case 3: %d\n", num3);
    _printf("Test Case 3: %d\n", num3);

    // Test Case 4: Large Positive Number
    printf("Test Case 4: %d\n", num4);
    _printf("Test Case 4: %d\n", num4);

    // Test Case 5: Large Negative Number
    printf("Test Case 5: %d\n", num5);
    _printf("Test Case 5: %d\n", num5);

    // Test Case 6: Multiple Specifiers
    printf("Test Case 6: num1 = %d, num2 = %d\n", num1, num2);
    _printf("Test Case 6: num1 = %d, num2 = %d\n", num1, num2);

    // Printing the largest positive number
    printf("Largest Positive: %d\n", largestPositive);

    // Printing the largest negative number
    printf("Largest Negative: %d\n", largestNegative);

        // Test Case 1: Positive Number with Plus Sign
    printf("Test Case 1: %+d\n", num1);
    _printf("Test Case 1: %+d\n", num1);

    // Test Case 2: Negative Number with Plus Sign
    printf("Test Case 2: %+d\n", num2);
    _printf("Test Case 2: %+d\n", num2);

    // Test Case 3: Positive Number with Space
    printf("Test Case 3: % d\n", num1);
    _printf("Test Case 3: % d\n", num1);

    // Test Case 4: Negative Number with Space
    printf("Test Case 4: % d\n", num2);
    _printf("Test Case 4: % d\n", num2);

    // Test Case 5: Positive Number with Width Specifier
    printf("Test Case 5: %10d\n", num1);
    _printf("Test Case 5: %10d\n", num1);

    // Test Case 6: Negative Number with Width Specifier
    printf("Test Case 6: %10d\n", num2);
    _printf("Test Case 6: %10d\n", num2);
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	return 0;
}
