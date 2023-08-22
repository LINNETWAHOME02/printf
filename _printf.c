#include "main.h"
/**
 * _printf - Produces output according to a format.
 * @format: The format string.
 * @...: The optional arguments.
 * Return: The number of characters printed (excluding null byte).
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);

	while (*format)
{
	if (*format != '%')
	{
		write(1, format, 1);
		count++;
	}
	else
	{
		format++;
	if (*format == '\0')
		break;
	if (*format == 'c')
	{
		char c = va_arg(args, int);

		write(1, &c, 1);
		count++;
	} else if (*format == 's')
	{
		char *str = va_arg(args, char *);

		write(1, str, strlen(str));
		count++;
	} else if (*format == '%')
	{
		write(1, "%", 1);
		count++;
	}
	}
		format++;
	}
	va_end(args);
	return (count);
}
