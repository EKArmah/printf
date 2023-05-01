#include "main.h"

/**
 * print_unsigned_int - prints an unsigned integer
 * @arg: va_list
 *
 * Return: num of digits in integer
 */

int print_unsigned_int(va_list arg)
{
	int temp, temp_cp, power, div, total_count, index = 1;

	temp = va_arg(arg, int);
	
	if (temp < 0)
	{
		temp = -1 * temp;
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
	return (total_count);
}
