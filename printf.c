#include "holberton.h"

/**
 * _printf - duplicate of printf function
 * @format: string containing characters and format specifiers
 *
 * Return: count of printed characters
 */
int _printf(const char *format, ...)
{
	int count = 0;
	void (*f)(va_list args, int *count);
	va_list args;

	va_start(args, format);
	if ((format == NULL) || (*format == '%' && *(format + 1) == '\0'))
		return (-1);
	while ((*format) != '\0' && (*(format + 1) != '\0'))
	{
		if (((*format) == '%') && (*(format + 1) != '\0'))
		{
			format++;
			f = looper(*format);
			if (f != NULL)
			{
				f(args, &count);
				format++;
			}
			else if (*format == '%')
			{
				_putchar(*format, &count);
				format++;
			}
			else
			{
				_putchar('%', &count);
				_putchar(*format, &count);
				format++;
			}
		}
		else
		{
			_putchar(*format, &count);
			format++;
		}
	}
	va_end(args);
	return (count);
}
