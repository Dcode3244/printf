#ifndef PRINT_H
#define PRINT_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct printer - A new data type for format.
 * @fmt: format
 * @print: function pointer.
 */

typedef struct printer
{
	char *fmt;
	int (*print)(va_list list, char *buffer);
} printer;

int _printf(const char *format, ...);
int (*checker(const char *symbol))(va_list list, char *buffer);
int print_c(va_list list, char *buffer);
int print_s(va_list list, char *buffer);
int print_percent(va_list list, char *buffer);


#endif
