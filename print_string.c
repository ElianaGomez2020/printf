#include "holberton.h"
/**
 *print_str - function to print a string
 *@arg: arg recived
 *Return: the number of characters printed
 */
int print_str(va_list arg)
{
	char *str;
	int counter;

	str = va_arg(arg, char*);
	if (str == NULL)
		str = "(nul)";
	for (counter = 0; str[counter]; counter++)
		_putchar(str[counter]);
	return (counter);
}
