#include "main.h"

/**
 * print_revs - this Function prints string in reverse
 * @val: va_list arguments
 * Return: the string
 */


int print_revs(va_list val)
{
	char *s = va_arg(val, char*);
	int i, j = 0;

	if (s == NULL)
		s = "(null)";
	while (s[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_putchar(s[i]);
	return (j);
}
