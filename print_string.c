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
