#include "holberton.h"

/**
 * _printf - printf test function
 * @format: format
 *
 * Return: character count
 */
int _printf(const char *format, ...)
{
	char tag, *check, temp;
	int count = 0, i = 0, flag = 0;
	void (*f)(va_list args, int *count);
	map mapping[] = {
		{'c', print_char},{'d', print_int},
		{'i', print_int},{'s', print_str}
	}
	va_list args;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (!flag)
			{
				f = looper(format, &count, args, flag);
				return (f(args, &count));
			else
			{
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

// 			switch (*format)
// 			{
// 				case 'c':
// 					temp = va_arg(args, int);
// 					write(1, &temp, 1);
// 					format++;
// 					break;
// // 				case 'd':
// // 					print(va_arg(args, int), &count);
// // 					format++;
// // 					break;
// 				case '%':
// 					print("%", &count);
// 					format++;
// 					break;;
// 				case 's':
// 					print(va_arg(args, char *), &count);
// 					format++;
// 					break;
// 				default:
// 					format++;
// 					break;
// 			}
		}
