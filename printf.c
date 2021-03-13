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
	int i = 0, count;
	va_list args;

	va_start(args, format);
	while (*format)
	{
		switch (current)
	        {
			case 'c':
				printf("%c", va_arg(args, int));
				comma(i, index);
				i++;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				comma(i, index);
				i++;
				break;
			case '%':
				printf("%f", va_arg(args, double));
				comma(i, index);
				i++;
				break;
			case 's':
				printf("%s", nil(va_arg(args, char *)));
				comma(i, index);
				i++;
				break;
			default:
				i++;
				break;
		}
	}
	printf("\n");
	va_end(args);
	return (count);
}
