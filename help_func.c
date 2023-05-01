#include "main.h"

/**
 * _putchar: prints out given character
 * @c: character to print
 *
 * Return: 0 on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
