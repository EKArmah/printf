#include "main.h"

/**
 * print_int: prints an integer
 * @arg: va_list pointing to current value
 *
 * Return: number of chars of the integer
 */

int print_int(va_list arg)
{
	int temp, temp_cp, check_neg, power, div, total_count, index = 1;

	temp = va_arg(arg, int);

	check_neg = temp;
	if (temp < 0)
	{
		_putchar('-');
		if (temp == INT_MIN)
		{
			temp = INT_MAX;
		}
	}
	total_count = buf_integer(temp, 0);

	while (index <= total_count)
	{
		power = _pow(10, (total_count - index));
		div = temp / power;
		temp_cp = div  % 10;
		_putchar('0' + temp_cp);
		index++;
	}

	if (check_neg < 0)
	{
		total_count += 1;
	}
	return (total_count);

}
