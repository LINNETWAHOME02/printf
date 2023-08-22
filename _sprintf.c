#include "main.h"
/**
 * _sprintf - Formats and stores a series of characters and values in a string.
 * @str: Pointer to the destination buffer
 * @format: List of all the arguments
 * @...: Variable number of arguments
 *
 * Return: Number of characters
 */
int _sprintf(char *str, const char *format, ...)
{
	va_list var_args;
	int count = 0;

	if (str == NULL || format == NULL)
		return (-1);
	va_start(var_args, format);
	count = vsprintf(str, format, var_args);
	va_end(var_args);

	return (count);
}
