#include "main.h"

/**
 * print_binary - converts and stores an int to  binary to the buffer
 * @ap: the number
 * @buffer: the storage
 * Return: number of digits
 */

int print_binary(va_list ap, char *buffer)
{
	int i, len = 0;
	unsigned int a[50];
	unsigned int num = va_arg(ap, unsigned int);


	if (num == 0)
	{
		*buffer = '0';
		buffer++;
		return (1);
	}

	for (i = 0; num > 0; i++)
	{
		a[i] = num % 2;
		num = num / 2;
	}

	len = i;

	for (i = i - 1; i >= 0; i--)
	{
		*buffer = a[i] + '0';
		buffer++;
	}
	return (len);
}
