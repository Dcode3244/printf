#include "main.h"

/**
 * print_percent - Prints a %
 * @ap: arguments
 * @buffer: stores characters
 *
 * Return: Always 1.
 */
int print_percent(va_list __attribute__((__unused__)) ap, char *buffer)
{
	*buffer = '%';

	return (1);
}
