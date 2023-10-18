#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
* print_oct - this prints octagonal values
* @val:  va_list
* Return: number of characters printed
*/

int print_oct(va_list val)
{
	int i, counter = 0;
	int *array;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;

	while (num / 8 != 0)
	{
		num /= 8;
		counter++;
	}
	counter++;
	array = malloc(sizeof(int) * counter);
	if (array == NULL)
		return (0);
	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 8;
		temp = temp / 8;
	}
	for (i = counter - 1; i >= 0; i--)
		_putchar(array[i] + '0');
	free(array);
	return (counter);
}
