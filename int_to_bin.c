#include "main.h"

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

