#include "holberton.h"

/**
 * _printf - printf test function
 * @format: format
 *
 * Return: character count
 */
int _printf(const char *format, ...)
{
	int count = 0, flag = 0;
	void (*f)(va_list args, int *count);
	va_list args;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			f = looper(*format);
			if (f != NULL)
			{
				f(args, &count);
				format++;
			}
			else if(*format == '%')
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
