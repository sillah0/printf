#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - Custom printf function
 * @format: Format string containing format specifiers
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	char c;
	const char *str;

	va_start(args, format);

	if (format == NULL)
		return (-1);
	while (*format)
	{
		if (*format == '%' && *(format + 1))
		{
			if (*(format + 1) == 'c')
			{
				c = (char)va_arg(args, int);
				putchar(c);
				count++;
			}
			else if (*(format + 1) == 's')
			{
				str = va_arg(args, const char *);
				if (str == NULL)
					str = "(null)";
				while (*str)
				{
					putchar(*str);
					str++;
					count++;
				}
			}
			else if (*(format + 1) == '%')
			{
				putchar('%');
				count++;
			}
			else
			{
				putchar(*format);
				count++;
			}
			format += 2;
		}
		else
		{
			putchar(*format);
			count++;
			format++;
		}
	}
	va_end(args);
	return (count);
}
