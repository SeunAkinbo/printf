#include "main.h"
#include <stdio.h>

/**
 * _putchar - prints char
 * @c: char argument
 * Return: Argument
 **/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
