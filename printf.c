#include "main.h"
#include <stdarg.h>

/**
 * _printf - printf function
 * @format: the format
 * Return: chars
 */


int _printf(const char *format, ...)
{
	va_list args;
	int count = 0, i = 0, j = 0, _identifier = 0;
	function_z list[] = {{"s", print_string}, {"c", print_char},
		{"i", print_int}, {"d", print_int}, {"b", int_to_bin},{NULL, NULL}};

	/* CHECKS FOR NULL VALUE */
	if (format == NULL)
		EXIT_FAILURE;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
			count += _putchar(format[i]);
		else
		{
			i++, j = 0;
			while (list[j].identifier)
			{
				if (*list[j].identifier == format[i])
				{	count += list[j].print_function(args);
					_identifier = 1;
				} j++; }
			if (_identifier)
				_identifier = 0;
			else
			{
				if (format[i] == '%')
					count += _putchar(format[i]);
				else if (!format[i])
				{	count -= 1;
					continue;
				}
				else
				{
					count += _putchar(format[i - 1]);
					count += _putchar(format[i]);
				}}} i++; }
	va_end(args);
	return (count);
}
