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
