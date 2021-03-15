#include "holberton.h"

/**
 * _printf - duplicate of printf function
 * @format: string containing characters and format specifiers
 *
 * Return: count of printed characters
 */
int _printf(const char *format, ...)
{
	int count = 0, i;
	void (*f)(va_list args, int *count);
	va_list args;

	va_start(args, format);
	if ((format == NULL) || (*format == '%' && *(format + 1) == '\0'))
		return (-1);
	for (i = 0; (*format) && (format[i]);)
	{
		if (*(format + i) == '%')
		{
			i++;
			f = looper(*(format + i));
			if (f != NULL)
			{
				f(args, &count);
				i++;
			}
			else if (*format == '%')
			{
				_putchar(*(format + i), &count);
				i++;
			}
			else
			{
				_putchar('%', &count);
				_putchar(*(format + i), &count);
				i++;
			}
		}
		else
		{
			_putchar(*(format + i), &count);
			i++;
		}
	}
	va_end(args);
	return (count);
}
