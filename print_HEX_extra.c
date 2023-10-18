#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
<<<<<<< HEAD
* print_HEX_extra - prints Hexadecimal
* @num: Argument
* Return: number of characters printed
=======
* print_int - this prints an integer
* @val:  va_list
* Return: the number of characters printed
>>>>>>> 5af10aa326fce5650a68fafd0cb7156549312bd7
*/

int print_HEX_extra(unsigned int num)
{
	int i, counter = 0;
	int *array;
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(sizeof(int) * counter);
	if (array == NULL)
		return (0);
	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 16;
		temp = temp / 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 7;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}
