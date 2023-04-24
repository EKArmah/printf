#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct form - struct form
 *
 * @frm: char pointer to type description
 * @f: function pointer
 */

typedef struct form
{
	char *frm;
	int (*f)(va_list);
} get_type;


int _printf(const char *format, ...);
int print_str(va_list arg);
int print_char(va_list arg);
int print_mod(va_list arg);
int print_NULL(va_list arg);
int buffer_count_retr(va_list print_spec, char forms);

#endif /*MAIN_H*/

