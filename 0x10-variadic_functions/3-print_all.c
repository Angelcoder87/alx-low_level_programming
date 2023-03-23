#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char c;
	int i;
	float f;
	char *s;

	va_start(args, format);
	while (*format)
	{
	switch (*format)
	{
	case 'c':
	c = va_arg(args, int);
	printf("%c", c);
	break;
	case 'i':
	i = va_arg(args, int);
	printf("%d", i);
	break;
	case 'f':
	f = va_arg(args, double);
	printf("%f", f);
	break;
	case 's':
	s = va_arg(args, char *);
	if (s == NULL)
	printf("(nil)");
	else
	printf("%s", s);
	break;
	}
	if (*(format + 1))
	printf(", ");
	format++;
	}
	va_end(args);
	printf("\n");
}
