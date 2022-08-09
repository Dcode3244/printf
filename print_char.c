#include "main.h"

/**
 * print_char - Prints a character.
 * @ap: A va_list pointing to the character to print.
 * @buffer: A character buffer to store the character in.
 *
 * Return: Always 1.
 */
int print_char(va_list ap, char *buffer)
{
	char ch;

	ch = va_arg(ap, int);

	*buffer = ch;
	return (1);
}
