#include <stdarg.h>
#include <stdio.h>
/**
 *  _printf- print variables
 *  @format:char
 *  Return:0 Always
*/

int _printf(const char *format, ...)
{
	va_list argu;
	va_start(argu, format);

	int char_no = 0;

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
			if (*format == '%')
			{
				putchar('%');
				char_no++;
			}
			else if (*format == 'c')
			{
				char c = va_arg(argu int);
				putchar(c);
				char_no++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(argu, char *);
				if (str != NULL)
				{
					while (*str) 
					{
						putchar(*str);
						str++;
						char_no++;
					}
				}
			}
			else if (*format == 'i' || *format == 'd') 
			{
				int num = va_arg(argu, int);
				printf("%d", num);
				char_no += snprintf(NULL, 0, "%d", num);
			}
		       	else {
		putchar(*format);
		char_no++;
	}
		format++;
	}
	va_end(argu);
	return (char_no);
}
