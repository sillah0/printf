#include <stdio.h>
#include "main.h"

/**
 * _printf - printf function
 * @format: the format
 * Return: chars
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format ++;
			if (*format == 'c')
			{
				int arg = va_arg(args, int);
				putchar(arg);
				count++;
			}
			else if (*format == 's')
			{
				char *arg = va_arg(args, char*);
				while (*arg)
				{
					putchar(*arg);
					arg++;
					count++;
				}
			}
			else if (*format == '%')
			{
				putchar('%');
				count++;
			}
		}
		else
		{
			putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
