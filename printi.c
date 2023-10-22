#include "main.h"

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
