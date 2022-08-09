#include "main.h"

/**
 * print_string - adds string to storage buffer.
 * @ap: A va_list pointing to the string to be printed.
 * @buffer: stores the string.
 * Return: The number of characters stored to buffer.
 */
int print_string(va_list ap, char *buffer)
{
	char *str;
	char *null_str = "(null)";
	int i;

	str = va_arg(ap, char *);
	if (str == NULL)
	{
		for (i = 0; *(null_str + i); i++)
		{
			*buffer = *(null_str + i);
			buffer++;
		}

		return (6);
	}

	for (i = 0; *(str + i); i++)
	{
		*buffer = *(str + i);
		buffer++;
	}

	return (i);
}
