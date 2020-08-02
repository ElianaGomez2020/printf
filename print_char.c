#include "holberton.h"

/**
 * print_char - function to print chars
 * @ch: va_list type parameter
 * Return: int
 */

int print_char(va_list ch)
{
	char character = (char)va_arg(ch, int);
	int chcount = 0;

	if (character != '\0')
	{
		_putchar(character);
		chcount++;
		return (chcount);
	}
	return (chcount);
}
