#include <limits.h>
#include <stdio.h>
#include "../main.h"

/**
 * main - Starting point
 *
 * Return: Always 0
 */
int main(void)
{
    int len2;
    unsigned int ui;
    /*void *addr;*/

    len2 = _printf("Let's try to printf %c simple sentence.\n", 48);
    /*len2 = printf("Let's try to printf a simple sentence.\n");*/
    ui = (unsigned int)INT_MAX + 1024;
    /*addr = (void *)0x7ffe637541f0;*/
    /*_printf("Length:[%d, %i]\n", len, len);*/
    _printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned:[%u]\n", ui);
    /*_printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);*/
    /*_printf("Character:[%c]\n", 'H');*/
    /*printf("Character:[%c]\n", 'H');*/
    /*_printf("String:[%s]\n", "I am a string !");*/
    /*printf("String:[%s]\n", "I am a string !");*/
    /*_printf("Address:[%p]\n", addr);*/
    /*printf("Address:[%p]\n", addr);*/
    /*_printf("Percent:[%%]\n");*/
    /*len2 = printf("Percent:[%%]\n");*/
    _printf("Len:[%d]\n", 102);
    /*printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");*/
    /*_printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);*/
    /*printf("hello\n");*/
    _printf("\\n");
	/*printf("%9d\n", -382323590);*/
	/*_printf("%c%cth %s%s a%cg%s: Y%%ou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", ";", "know", 't', ", Jon", '\n');*/
    return (0);
}

