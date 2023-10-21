#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - Custom printf function that supports %c, %s, %%, %d, and %i specifiers.
 * @format: Format string containing specifiers.
 * @...: Additional arguments based on the specifiers.
 * Return: Number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	int temp, digitCount;
	va_start(args, format);

	while (*format)
	{
	if (*format == '%' && (*(format + 1) == 'c' || *(format + 1) == 's' || *(format + 1) == '%' || *(format + 1) == 'd' || *(format + 1) == 'i'))
	{
		/** Handle %c: char argument
		 */
	if (*(format + 1) == 'c')
	{
		int c = va_arg(args, int);
		putchar(c);
		count++;
            }
		/** Handle %s: string argument
		 */
	else if (*(format + 1) == 's')
	{
		char *str = va_arg(args, char *);
		while (*str)
		{
			putchar(*str);
			str++;
			count++;
		}
	}
		/** Handle %%: percent sign
		 */
	else if (*(format + 1) == '%')
	{
		putchar('%');
		count++;
	}
		/** Handle %d or %i: integer argument
		 */
	else if (*(format + 1) == 'd' || *(format + 1) == 'i')
	{
		int num = va_arg(args, int);
		printf("%d", num);
		/** Count the number of digits in the printed number
		 */
		temp = num;
		digitCount = 0;
		do
		{
			temp /= 10;
			digitCount++;
		}
		while (temp != 0);
		count += digitCount;
	}
		format += 2; /** Move format pointer past the specifier and continue parsing */
	}
	else
	{
		putchar(*format); /** Print non-format characters */
		count++;
		format++;
	}
	}
	va_end(args);
	return (count);
}
