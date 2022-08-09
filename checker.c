#include "main.h"

/**
 * checker - checks if symboll matches with any characters
 * @symbol: the symboll to be checked
 *
 * Return: a matching function of NULL if it fails
 */
int (*checker(const char *symbol))(va_list list, char *buffer)
{
	printer fmt[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_percent},
	};
	int i;

	for (i = 0; i < 3; i++)
	{
		if (*symbol == *(fmt[i].fmt))
			return (fmt[i].print);
	}

	return (NULL);
}
