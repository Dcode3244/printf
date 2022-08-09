#include "main.h"
#include <stdio.h>

/**
 * _printf - prints inputed arguments
 * @format: format specifier
 * Return: The number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list ap;
	char *buffer, *ptr_buff;
	int i, last = 0, buff_len, len = 0, ap_len = 0;

	buffer = malloc(sizeof(char) * 2048);
	if (buffer == NULL || format == NULL)
		return (-1);
	ptr_buff = buffer;

	va_start(ap, format);
	for (i = 0; *(format + i) != '\0'; i++)
	{
		if (*(format + i) == '%')
		{
			last++;
			if (checker(format + i + 1))
			{
				i++;
				ap_len = checker(format + i)(ap, buffer);
				buffer += ap_len;
				len += ap_len;
				buff_len = len;
				last--;
				continue;
			}
			if (*(format + i + 1) == '\0' && last == 1)
			{
				buff_len = -1;
				break;
			}
		}
		*buffer = *(format + i);
		len++;
		buffer++;
		buff_len = len;
	}
	write(1, ptr_buff, len);
	va_end(ap);
	free(ptr_buff);
	return (buff_len);
}
