#include "holberton.h"

/**
 * printf - printf test function
 * @format: format
 *
 * Return: character count
 */
int printf(const char *format, ...)
{
	char tag;
	char *check;
	int count = 0;
	char temp;
	va_list args;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			switch (*format)
			{
				case 'c':
					temp = va_arg(args, int);
					write(1, &temp, 1);
					format++;
					break;
// 				case 'd':
// 					print(va_arg(args, int), &count);
// 					format++;
// 					break;
				case '%':
					print("%", &count);
					format++;
					break;;
				case 's':
					print(va_arg(args, char *), &count);
					format++;
					break;
				default:
					count++;
					format++;
					break;
			}
		}
		else
		{
			write(1, format, 1);
			count++;
			format++;
		}
	}
	printf("\n");
	va_end(args);
	return (count);
}
