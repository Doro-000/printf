#include "holberton.h"

/**
 * _numlen - counts the number of digits in a number
 * @num: number to be counted
 *
 * Return: length of the number
 */
int _numlen(int num)
{
	int len = 0;

	while (num)
	{
		num /= 10;
		len++;
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
		{'o', print_octal}
	};
	int i = 0, flag = 0;

	for (; i < 8; i++)
	{
		if (format == mapping[i].conversion_specifier)
		{
			flag = 1;
			return (mapping[i].function);
		}
	}
	if (!(flag))
		return (NULL);
	
}
