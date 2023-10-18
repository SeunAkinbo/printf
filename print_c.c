#include "main.h"
#include <stdarg.h>

/**
 * printf_c - Prints char
 * @val: A variadic function
 * Return: 1
 */


int printf_c(va_list val)
{
	char str = va_arg(val, int);

	_putchar(str);
	return (1);
}

