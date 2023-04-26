#include "main.h"

/**
 * _putchar - prints out given char
 * @c: char to print
 *
 * Return: 0 on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
