#include "holberton.h"
/**
 *print_int - function to print integers
 *@arg: arg recived
 *Return: the number of integers printed
 */
int print_int(va_list arg)
{
	long int num, num1, d = 1, num2;
	int count = 0;

	num = va_arg(arg, int);

	if (num < 0)
	{
		num1 = -num;
		_putchar('-');
		count++;
	}
	else
		num1 = num;
	num2 = num1;
	while (num1 > 9)
	{
		num1 = num1 / 10;
		d *= 10;
	}
	while (d > 0)
	{
		_putchar(((num2 / d) % 10) + '0');
		count++;
		d /= 10;
	}
	return (count);
}
