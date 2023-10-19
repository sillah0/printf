#include "main.h"
/**
 * print_char - prints characters
 * @args: list of arguments
 * Return: success
 */

int print_char(va_list args)
{
	char c;

	c = va_arg(args, int);

	return (_putchar(c));
}

/**
 * printi - prints integers
 * @args: list of arguments
 * Return: 1 (success)
 */

int printi(va_list args)
{
	int i = va_arg(args, int);

	return (print_int(i));
}

/**
 * print_int - prints integers
 * @i: integer
 * Return: 1
 */

int print_int(int i)
{
	unsigned int num;
	int count = 0;

	if (i < 0)
	{
		count += _putchar('-');
		num = i * -1;
	}
	else
	{
		num = i;
	}

	if (num >= 10)
		count += print_int(num / 10);

	count += _putchar((num % 10) + '0');

	return (count);
}
