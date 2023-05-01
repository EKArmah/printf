#include "main.h"

/**
 * print_char : prints a char
 * @arg: va_list to get char
 *
 * Return: the number of chars printed
 */

int print_char(va_list arg)
{
	int count = 1;
	int curr_char;

	curr_char = va_arg(arg, int);

	_putchar(curr_char);
	return (count);
}

/**
 * print_str - prints a string
 * @arg: va_list to get string
 *
 * Return: number of chars in string
 */

int print_str(va_list arg)
{
	int count = 0;
	char *temp_str;

	temp_str = va_arg(arg, char *);
	if (temp_str == NULL)
	{
		temp_str = "(null)";
		while (temp_str[count] != '\0')
		{
			_putchar(temp_str[count]);
			count++;
		}
		return (0);
	}
	while (temp_str[count] != '\0')
	{
		_putchar(temp_str[count]);
		count++;
	}
	return (count);
}

/**
 * print_mod - prints mod sign %
 * @arg: va_list to get mod sign
 *
 * Return: number of signs, ideally 1
 */

int print_mod(__attribute__((unused)) va_list arg)
{
	_putchar('%');
	return (1);
}

/**
 * print_NULL - prints (null) whenever a NULL pointer is passed into var list
 * @arg: va list
 *
 * Return: 0
 */

int print_NULL(__attribute__((unused)) va_list arg)
{
	char *temp = "(null)";
	int count = 0;

	printf("NULL case met");
	while (temp[count] != '\0')
	{
		_putchar(temp[count]);
	}
	return (0);
}
