#include "main.h"

/**
 * print_string - prints strings
 * @args: list of arguments
 * Return: 1
 */

int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int i = 0;

	if (str == NULL)
		str = "(null)";

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);

}

/**
 * int_to_binary - turns unsined int to binary
 * @num: unsigned int
 *
 * Return: 0 or 1
 */

int int_to_binary(int num)
{
	unsigned int count = 0;

	if (num / 2)
		count += int_to_binary(num / 2);

	count += _putchar((num % 2) + '0');

	return (count);

}

/**
 * int_to_bin - turns int to binary
 * @args: list of arguments taken
 * Return: 1
 */

int int_to_bin(va_list args)
{
	int a = va_arg(args, int);

	return (int_to_binary(a));

}

