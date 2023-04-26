#include "main.h"

/**
 * get_app_type_print: get the needed function for given spececified char
 * @frms: char for function call
 *
 * Return: pointer to needed function
 */

int (*get_app_type_print(char frms))(va_list print_spec)
{
	int type_count = 0;
	char *temp;

	get_type type_ls[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_mod},
		{"d", print_int},
		{"i", print_int},
		{"u", print_unsigned_int}};

	while (type_count < 6)
	{
		temp = type_ls[type_count].frm;

		if (frms == *temp)
		{
			return (type_ls[type_count].f);
		}
		type_count++;
	}

	return (type_ls[type_count].f);
}

/**
 * buffer_count_retr - the buffer function to get the char count
 * @print_spec: va_list
 * @forms: current char specifier expected
 *
 * Return: final char count
 */

int buffer_count_retr(va_list print_spec, char forms)
{
	int str_count = 0;
	char *spec_list = "csidu%";

	if (forms == 0)
	{
		return (0);
	}
	if (!strchr(spec_list, forms))
	{
		_putchar('%');
		_putchar(forms);
		return (2);
	}
	str_count = get_app_type_print(forms)(print_spec);
	return (str_count);
}

/**
 * _printf - printf the unknown number and the type of input to standard output
 * @format: standard string to print
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list print_specs;
	int final_counter = 0, counter = 0;


	if (format == NULL)
	{
		return (-1);
	}
	va_start(print_specs, format);

	while (format[counter] != '\0')
	{
		if (format[counter] != '%')
		{
			_putchar(format[counter]);
			final_counter++;
			counter++;
		}
		else
		{
			if (format[counter + 1] == '\0')
			{
				return (-1);
			}
			final_counter += buffer_count_retr(print_specs, format[counter += 1]);
			counter++;
		}

	}
	va_end(print_specs);
	/*printf("Total num of chars printed: %d\n", final_counter);*/
	return (final_counter);
}

