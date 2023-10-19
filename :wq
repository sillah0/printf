#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct function_z - structure holding an identifier and a function
 * @identifier: character identifying an action
 * @print_function: function executed once the identifier is identified
 */
typedef struct function_z
{
	char *identifier;
	int (*print_function)(va_list args);
} function_z;


int _putchar(char c);
int _printf(const char *format, ...);

int print_char(va_list args);
int printi(va_list args);
int print_int(int i);
int print_string(va_list args);
int int_to_binary(int num);
int int_to_bin(va_list args);

#endif
