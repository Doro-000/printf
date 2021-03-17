#include "holberton.h"

/**
 * _numlen - counts the number of digits in a number
 * @num: number to be counted
 * @base: base of the number
 *
 * Return: length of the number
 */
int _numlen(int num, int base)
{
	int len = 0;

	if (num < 0)
		num *= -1;
	while (num)
	{
		if (base == 10)
		{
			num /= 10;
			len++;
		}
		else if (base == 2)
		{
			num >>= 1;
			len++;
		}
		else if (base == 8)
		{
			num /= 8;
			len++;
		}
		else if (base == 16)
		{
			num /= 16;
			len++;
		}
	}
	return (len);
}

/**
 * looper - function that returns a function
 * @format: character to be checked
 *
 * Return: void
 */
void (*looper(char format))(va_list, int *)
{
	map mapping[] = {
		{'c', print_char}, {'d', print_int},
		{'i', print_int}, {'s', print_str},
		{'x', print_hex_x}, {'X', print_hex_X},
		{'S', print_S}, {'b', print_bin},
		{'o', print_octal}, {'r', print_rev},
		{'R', print_rot13}, {'u', print_unsigned}
	};
	int i = 0;
	void (*f)(va_list, int*);

	f = NULL;

	for (; i < 12; i++)
	{
		if (format == mapping[i].conversion_specifier)
		{
			f = mapping[i].function;
			break;
		}
	}
	return (f);
}

/**
 * transform - helper function to map a letter with it's rot13 encoding
 * @x: char to be encoded
 *
 * Return: the encoded char
 */
char transform(char x)
{
	char one[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char two[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;
	char replacement = x;

	while (i < 52)
	{
		if (x == one[i])
		{
			replacement = two[i];
			break;
		}
		i++;
	}
	return (replacement);
}

/**
 * _itob - converts a number to binary
 * @num: number to be converted
 * @string: buffer to store the result in
 *
 * Return: the converted string
 */
void _itob(int num, char *string)
{
	int c, d, t;

	t = 0;
	if (num == 0)
		string[t++] = '0';
	for (c = 31 ; (c >= 0) && (num != 0); c--)
	{
		d = num >> c;
		if (num >> c)
		{
			if (d & 1)
				*(string + t) = 1 + '0';
			else
				*(string + t) = 0 + '0';
			t++;
		}
	}
	*(string + t) = '\0';
}
/**
 * _itoux - converts a number to unsigned
 * @num: number to be converted
 * @string: buffer to store the result in
 * @base: base of number
 *
 * Return: the converted string
 */

void _itoux(unsigned int num, char *string, unsigned int base)
{
	int i = 0, remain = 0;

	if (num == 0)
	{
		string[i++] = '0';
		string[i] = '\0';
	}
	while (num)
	{
		remain = num % base;
		string[i] = (remain  > 9) ? ((remain - 10) + 'a') : (remain + '0');
		num /= base;
		i++;
	}
	string[i] = '\0';
	reverse_string(string, _strlen(string));
}
