#include "main.h"
<<<<<<< HEAD
=======
#include <stdarg.h>

>>>>>>> 2be6350652bff17d975c8471b5504355e65d17c7
/**
 * _printf - printf function
 * @format: the format
 * Return: chars
 */
<<<<<<< HEAD
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	va_start(args, format);

	while (*format)
=======


int _printf(const char *format, ...)
{
	va_list args;
	int count = 0, i = 0, j = 0, _identifier = 0;
	function_z list[] = {{"s", print_string}, {"c", print_char},
		{"i", printi}, {"d", printi}, {"b", int_to_bin}, {NULL, NULL}};

	/* CHECKS FOR NULL VALUE */
	if (format == NULL)
		EXIT_FAILURE;
	va_start(args, format);
	while (format[i] != '\0')
>>>>>>> 2be6350652bff17d975c8471b5504355e65d17c7
	{
		if (format[i] != '%')
			count += _putchar(format[i]);
		else
		{
<<<<<<< HEAD
			format++;
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
=======
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
>>>>>>> 2be6350652bff17d975c8471b5504355e65d17c7
				}
				else
				{
					count += _putchar(format[i - 1]);
					count += _putchar(format[i]);
				}}} i++; }
	va_end(args);
	return (count);
}
