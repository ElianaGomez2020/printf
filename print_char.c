#include "holberton.h"

/**
*print_char - print char at printf
*@ch: the main string passed to the function
*Return: Integer
*/

int print_char(va_list ch)
{
	_putchar(va_arg(ch, int));
	return (1);
}
