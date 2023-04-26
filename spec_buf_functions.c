#include "main.h"

/**
 * buf_integer - helper function for print_int
 * @n: current int or dec
 * @count: num of digits in n
 *
 * Return: number of digits in n
 */

int buf_integer(int n, int count)
{
	if (n / 10 > 0)
	{
		count++;
		return (buf_integer(n /= 10, count));
	}
	else
	{
		return (count += 1);
	}
}

/**
 * _pow - calculated the power of a base to a given exponent
 * @base: base number
 * @exp: exponent
 *
 * Return: calculated power
 */
int _pow(int base, int xp)
{
	int base_pow = base;
	if (xp == 0)
	{
		return (1);
	}
	while (xp > 1)
	{
		base_pow *= base;
		xp--;
	}
	return (base_pow);
}
