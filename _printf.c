#include "holberton.h"
/**
 * _printf - function to print
 *@format: string is composed of zero or more directives
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list argument;
	int printcounter = 0;

	va_start(argument, format);

	if (*format != '\0')
	{
		for (; *format != '\0'; format++)
		{
			if (*format == '%')
			{
				format++;
				if (*format == 'c')
					printcounter += print_char(argument);
				if (*format == 's')
					printcounter += print_str(argument);
				if (*format == 'i' || *format == 'd')
					printcounter += print_int(argument);
				if (*format == '%')
					_putchar('%');
					printcounter += 1;
				if (*format == '\0')
					return (-1);
				if (*format != 'c' && *format != 's' && *format != 'i'
				&& *format != 'd' && *format != '%' && *format != '\0')
				{
					_putchar('%');
					_putchar(*format);
					printcounter += 2;
				}
			else
			}
				_putchar(*format);
				printcounter++;
			}
		}
		return (printcounter);
	}
	return (-1);
	va_end(argument);
}
