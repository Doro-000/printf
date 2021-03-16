#include "holberton.h"
/**
 * print_bin - prints an bin to stdout;
 * @args: variable arguments passed to _printf
 * @count: int to be used by print, see description for print in helpers.c
 *
 * Return: void
 */

void print_bin(va_list args, int *count)
{
	char *bin_string;
	int num = va_arg(args, int);

	bin_string = malloc(sizeof(char) * (_numlen(num, 2) + 1));
	if (bin_string != NULL)
	{
		_itoa(num, bin_string, 2);
	}
	else
		exit(-1);
	print(bin_string, count);
	free(bin_string);
}

/**
 * print_octal - prints an octal to stdout;
 * @args: variable arguments passed to _printf
 * @count: int to be used by print, see description for print in helpers.c
 *
 * Return: void
 */
void print_octal(va_list args, int *count)
{
	char *octal_string;
	unsigned int num = va_arg(args, int);

	octal_string = malloc(sizeof(char) * (_numlen(num, 8) + 1));
	if (octal_string != NULL)
	{
		_itoa(num, octal_string, 8);
	}
	print(octal_string, count);
	free(octal_string);
}

/**
 * print_S - prints the string to stdout;
 * @args: variable arguments passed to _printf
 * @count: int to be used by print, see description for print in helpers.c
 *
 * Return: void
 */
void print_S(va_list args, int *count)
{
	char *string;
	char *hex;
	int i = 0, j = 0;

	string = va_arg(args, char *);
	if (string != NULL)
	{
		for (; string[i] != '\0'; i++)
		{
			if (string[i] >= 32 && string[i] <= 126)
				_putchar(string[i], count);
			else
			{
				hex = malloc(sizeof(char) * (_numlen(string[i], 16)));
				if (_numlen(string[i], 16) = 2)
					print("\\x", count);
				else
					print("\\x0", count);
				_itoa(string[i], hex, 16);
				for (; hex[j] != '\0'; j++)
				{
					if (hex[j] >= 97 && hex[j] <= 122)
					{
						hex[j] -= 32;
					}
				}
				print(hex, count);
				free(hex);
			}
		}
	}
	else
	{
		print("(null)", count);
	}
}
