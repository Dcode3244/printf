#include "main.h"

/**
 * print_hexa - converts and stores an int to hexadecimal to the buffer
 * @ap: the number
 * @buffer: the storage
 * Return: number of digits
 */

int print_hexa(va_list ap, char *buffer)
{
	int i, len = 0;
	char a[50];
	int hex;
	unsigned int num = va_arg(ap, unsigned int);


	if (num == 0)
	{
		*buffer = '0';
		buffer++;
		return (1);
	}

	for (i = 0; num > 0; i++)
	{
		hex = num % 16;
		if (hex < 10)
			a[i] = hex + '0';
		else
		{
			a[i] = 'a' + (hex - 10);
		}
		num = num / 16;
	}

	len = i;

	for (i = i - 1; i >= 0; i--)
	{
		*buffer = a[i];
		buffer++;
	}
	return (len);
}
