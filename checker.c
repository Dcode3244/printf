#include "main.h"

/**
 * checker - checks if symboll matches with any characters
 * @c: the symboll to be checked
 *
 * Return: pointer to a matching function or NULL if it fails
 */
int (*checker(const char *c))(va_list ap, char *buffer)
{
	printer fmt[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_digit},
		{"i", print_digit}
	};
	int i;

	for (i = 0; i < 5; i++)
	{
		if (*c == *(fmt[i].fmt))
			return (fmt[i].print);
	}

	return (NULL);
}
