#include "main.h"

/**
 * int_to_binary - turns unsigned int to binary
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

