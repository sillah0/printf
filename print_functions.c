#include "main.h"
/**
 * print_char - prints characters
 * @ap: list of arguments
 * Return: 1 (success)
 */

int print_char(va_list ap)
{
	char c;

	c = va_arg(ap, int);

	return (_putchar(c));
}

/**
 * printi - prints integers
 * @ap: list of arguments
 * Return: 1 (success)
 */

int printi(va_list ap)
{
	int i = va_arg(ap, int);

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

/**
 * print_string - prints strings
 * @ap: list of arguments
 * Return: 1
 */

int print_string(va_list ap)
{
	char *str = va_arg(ap, char *);
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
 * @c: unsigned int
 *
 * Return: 0 or 1
 */

int int_to_binary(int num)
{
	unsigned int count;

	count = 0;

	if (num / 2)
		count += int_to_binary(num / 2);

	count += _putchar((num % 2) + '0');

	return (count);
}

/*int main()
{
	int num = 9;
	decimalToBinary(num);
	return 0;
}*/

/**
 * int_to_bin - turns int to binary
 * @ap: list of arguments taken
 * Return: 1
 */

int int_to_bin(va_list ap)
{
	int a = va_arg(ap, int);

	return (int_to_binary(a));
}
