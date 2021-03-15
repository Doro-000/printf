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
	char *hex_string;
	int i = 0;

	string = va_arg(args, char *);
	for (; string[i] != '\0'; i++)
	{
		if (string[i] >= 32 && string[i] <= 126)
			_putchar(string[i], count);
		else
		{
			hex_string = malloc(sizeof(char) * (_numlen(string[i], 16) + 1));
			print("/x", count);
			if (hex_string != NULL)
			{
				_itoa(string[i], hex_string, 16);
				for (i = 0; hex_string[i] != '\0' ; i++)
				{
					if (hex_string[i] >= 97 && hex_string[i] <= 122)
					{
						hex_string[i] -= 32;
					}
				}
			}
			print(hex_string, count);
			free(hex_string);
		}
	}
}

/**
 * print_unsigned - prints an unsigned int to stdout;
 * @args: variable arguments passed to _printf
 * @count: int to be used by print, see description for print in helpers.c
 *
 * Return: void
 */

// void print_unsigned(va_list args, int *count)
// {
// 	char *bin_string;
// 	int i, uni = va_arg(args, int);
// 	unsigned int j;

// 	j = uni;
// 	for (i = 1000000000; i > 0; i /= 10)
// 	{
// 		if (i 
// 		_itoa(num, bin_string, 2);
// 	}
// 	print(bin_string, count);
// 	free(bin_string);
// }
