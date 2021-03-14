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
 * _numlen - counts the number of digits in a number
 * @num: number to be counted
 *
 * Return: pointer to helper function
 */
void (*looper(char format, int *flag))(va_list, int *)
{
	map mapping[] = {
		{'c', print_char},{'d', print_int},
		{'i', print_int},{'s', print_str}
	}
	int i = 0;

	for (; i < 5; i++)
	{
		if (format == mapping[i].type)
		{
			return (mapping[i].func);
			*flag = 1;
		}
	}
}
