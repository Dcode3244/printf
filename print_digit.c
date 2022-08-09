#include "main.h"
void print_num(int dig, char *buffer);

/**
 * print_digit - prints numbers
 * @ap: the number
 * @buffer: stores the number
 * Return: lenght of the number
 */
int print_digit(va_list ap, char *buffer)
{
	int dig, copy, len = 1;

	dig = va_arg(ap, int);

	if (dig < 0)
	{
		*buffer = '-';
		len++;

		if (dig == -2147483648)
		{
			*(buffer + 1) = '2';
			len++;
			dig = 147483648;
		}
		else
			dig = -dig;
	}

	copy = dig;

	for (; (copy / 10) > 0;)
	{
		len++;
		copy = copy / 10;
	}

	buffer += len - 1;
	print_num(dig, buffer);

	return (len);
}

/**
 * print_num - prints number
 * @dig: the number
 * @buffer: stores the number
 */

void print_num(int dig, char *buffer)
{
	int d = dig;

	if (d / 10 > 0)
		print_num(d / 10, buffer - 1);

	*buffer = (d % 10) + '0';
}
