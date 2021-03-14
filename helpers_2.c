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
