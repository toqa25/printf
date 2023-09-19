#include "main.h"

/**
 * _printf - print variables
 * @format:char
 * Return: printed char
 */
int _printf(const char *format, ...)
{
	int p = 0;

	va_list argu;

		if (format == NULL)
		{
			return (-1);
		}
		va_start(argu, format);
		while (*format)
		{
			if (*format == '%')
			{
				format++;
			}
		else
		{
			_putchar(*format + '0');
			p++;
		}
		if (*format == '\0')
		{
			break;
		}
		p += 2;
		}
		p++;
	va_end(argu);
	return (p);
}
