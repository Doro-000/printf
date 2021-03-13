#include "test.h"

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
	index = checker(format);
	while ((format != NULL) && (format[i]))
	{
		current = format[i];
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
			case 'f':
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
}


/**
 * checker - print strings with given separator
 * @format: format
 *
 * Return: int
 */
int checker(const char * const format)
{
	int i = 0, j = 0;
	char str;

	while ((format != NULL) && (format[j]))
	{
		str = format[j];
		switch (str)
		{
			case 'c':
				i = j;
				j++;
				break;
			case 'f':
				i = j;
				j++;
				break;
			case 's':
				i = j;
				j++;
				break;
			case 'i':
				i = j;
				j++;
				break;
			default:
				j++;
				break;
		}
	}
	return (i);
}
/**
 * comma - print comma
 * @i: current index
 * @j: last valid index
 *
 * Return: void
 */
void comma(int i, int j)
{
	if (i != j)
		printf(", ");
}
/**
 * nil - print strings with given separator
 * @s: check if its NULL
 *
 * Return: (nil) if null
 */
char *nil(char *s)
{
	if (s == NULL)
		s = "(nil)";
	return (s);
}
